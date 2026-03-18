/*
 * XREFs of MmAllocateNodePagesForMdlEx @ 0x1403481C0
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140348260 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

__int64 __fastcall MmAllocateNodePagesForMdlEx(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return MmAllocatePartitionNodePagesForMdlEx(a1, a2, a3, a4, a5, a6, a7, 0LL);
}
