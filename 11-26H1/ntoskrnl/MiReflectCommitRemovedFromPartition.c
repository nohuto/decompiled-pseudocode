/*
 * XREFs of MiReflectCommitRemovedFromPartition @ 0x140709640
 * Callers:
 *     MiInsertPartitionPages @ 0x14087C1C4 (MiInsertPartitionPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReduceCommitLimits @ 0x140705B5C (MiReduceCommitLimits.c)
 */

void __fastcall MiReflectCommitRemovedFromPartition(__int64 a1, __int64 a2)
{
  MiReduceCommitLimits(a1, a2, a2);
  MiReturnCommit(a1, a2, 16);
}
