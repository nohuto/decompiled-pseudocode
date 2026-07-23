/*
 * XREFs of ViPtAllocPoolInfoCallback @ 0x140C303D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

ULONG_PTR __fastcall ViPtAllocPoolInfoCallback(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePool2(64LL, a2, 0x6E496956u);
}
