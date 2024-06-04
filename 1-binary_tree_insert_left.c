#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
if (parent == NULL)
{
return (NULL);
}
binary_tree_t *new = binary_tree_node(parent, value);
if (new == NULL)
{
return (NULL);
}
if (parent->left != NULL)
{
new->left = parent->left;
parent->left->parent = new;
}
parent->left = new;
return (new);
}
