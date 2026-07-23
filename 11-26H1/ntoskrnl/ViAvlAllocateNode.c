/*
 * XREFs of ViAvlAllocateNode @ 0x1404EFD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_RTL_BALANCED_LINKS *__fastcall ViAvlAllocateNode(_RTL_AVL_TABLE *a1)
{
  _RTL_BALANCED_LINKS *result; // rax

  result = a1[1].BalancedRoot.Parent - 1;
  a1[1].BalancedRoot.Parent = 0LL;
  return result;
}
