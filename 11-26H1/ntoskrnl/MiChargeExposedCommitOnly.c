/*
 * XREFs of MiChargeExposedCommitOnly @ 0x14070A4A0
 * Callers:
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 * Callees:
 *     MiIncreaseExposedCommit @ 0x1404803E0 (MiIncreaseExposedCommit.c)
 */

unsigned __int64 __fastcall MiChargeExposedCommitOnly(__int64 a1, unsigned __int64 a2)
{
  return MiIncreaseExposedCommit(a1, a2);
}
