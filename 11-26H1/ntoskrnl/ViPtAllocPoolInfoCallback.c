/*
 * XREFs of ViPtAllocPoolInfoCallback @ 0x140C2A3C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

ULONG_PTR __fastcall ViPtAllocPoolInfoCallback(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(64LL, ByteSize, 0x6E496956u);
}
