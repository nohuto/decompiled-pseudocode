/*
 * XREFs of MiReduceCommitLimits @ 0x14070A82C
 * Callers:
 *     MiReflectCommitRemovedFromPartition @ 0x14070E2F4 (MiReflectCommitRemovedFromPartition.c)
 *     MiTargetedPageFileReductionApc @ 0x1407124C8 (MiTargetedPageFileReductionApc.c)
 *     MiCompleteMemoryRemoval @ 0x14086C0DC (MiCompleteMemoryRemoval.c)
 *     MiUpdateExistingPageFile @ 0x140872760 (MiUpdateExistingPageFile.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputeCommitThresholds @ 0x1404F38EC (MiComputeCommitThresholds.c)
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
