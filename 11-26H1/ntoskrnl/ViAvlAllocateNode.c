/*
 * XREFs of ViAvlAllocateNode @ 0x1404F6740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_RTL_BALANCED_LINKS *__fastcall ViAvlAllocateNode(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  _RTL_BALANCED_LINKS *result; // rax

  result = Table[1].BalancedRoot.Parent - 1;
  Table[1].BalancedRoot.Parent = 0LL;
  return result;
}
