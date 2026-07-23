/*
 * XREFs of ViPtAllocPoolInfoCallback @ 0x140B7C6F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

ULONG_PTR __fastcall ViPtAllocPoolInfoCallback(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePool2(0x40uLL, a2, 0x6E496956uLL);
}
