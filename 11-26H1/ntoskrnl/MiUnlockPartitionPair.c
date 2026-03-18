/*
 * XREFs of MiUnlockPartitionPair @ 0x140525764
 * Callers:
 *     MiReferencePageRuns @ 0x14028EEEC (MiReferencePageRuns.c)
 *     MiTransferPartitionPageRun @ 0x140709A80 (MiTransferPartitionPageRun.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiUnlockPartitionPair(__int64 a1, __int64 a2, KIRQL a3)
{
  volatile LONG *v5; // rcx

  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 272));
  v5 = (volatile LONG *)(a2 + 272);
  if ( a3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  else
    ExReleaseSpinLockExclusive(v5, a3);
}
