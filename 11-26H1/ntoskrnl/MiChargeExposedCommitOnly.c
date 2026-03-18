/*
 * XREFs of MiChargeExposedCommitOnly @ 0x1407057D0
 * Callers:
 *     MiInsertPartitionPages @ 0x14087C1C4 (MiInsertPartitionPages.c)
 * Callees:
 *     MiIncreaseExposedCommit @ 0x140486A10 (MiIncreaseExposedCommit.c)
 */

unsigned __int64 __fastcall MiChargeExposedCommitOnly(__int64 a1, unsigned __int64 a2)
{
  return MiIncreaseExposedCommit(a1, a2);
}
