/*
 * XREFs of MiReduceCommitLimits @ 0x140705B5C
 * Callers:
 *     MiReflectCommitRemovedFromPartition @ 0x140709640 (MiReflectCommitRemovedFromPartition.c)
 *     MiTargetedPageFileReductionApc @ 0x14070D818 (MiTargetedPageFileReductionApc.c)
 *     MiCompleteMemoryRemoval @ 0x140865CFC (MiCompleteMemoryRemoval.c)
 *     MiUpdateExistingPageFile @ 0x14086C380 (MiUpdateExistingPageFile.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputeCommitThresholds @ 0x1404FA2DC (MiComputeCommitThresholds.c)
 */

void __fastcall MiReduceCommitLimits(__int64 a1, __int64 a2, __int64 a3)
{
  volatile LONG *v3; // rbp
  KIRQL v7; // r14

  v3 = (volatile LONG *)(a1 + 17272);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 17272));
  if ( a3 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 17224), -a3);
  if ( a2 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 23448), -a2);
  MiComputeCommitThresholds(a1, 1);
  if ( v7 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockExclusive(v3, v7);
}
