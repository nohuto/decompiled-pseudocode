/*
 * XREFs of MiReflectCommitRemovedFromPartition @ 0x14070E2F4
 * Callers:
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReduceCommitLimits @ 0x14070A82C (MiReduceCommitLimits.c)
 */

void __fastcall MiReflectCommitRemovedFromPartition(__int64 a1, __int64 a2)
{
  MiReduceCommitLimits(a1, a2, a2);
  MiReturnCommit(a1, a2, 16);
}
