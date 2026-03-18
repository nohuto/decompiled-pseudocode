/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x14036E1E8
 * Callers:
 *     MiCreateLargePfnList @ 0x14031037C (MiCreateLargePfnList.c)
 *     MiReturnCloneCharges @ 0x14036CAA4 (MiReturnCloneCharges.c)
 *     MiUnmapViewSubsections @ 0x14036D950 (MiUnmapViewSubsections.c)
 *     MiFreeLargePages @ 0x1403C700C (MiFreeLargePages.c)
 *     MiGetSubsectionCharges @ 0x1404B69E0 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404D1140 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDeleteAweInfoPageRuns @ 0x140701000 (MiDeleteAweInfoPageRuns.c)
 *     MiFreeContiguousLargePageRun @ 0x140701770 (MiFreeContiguousLargePageRun.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 *     MiCommitVadGetCharges @ 0x1409C7650 (MiCommitVadGetCharges.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnCrossPartitionCharge @ 0x1405037E4 (MiReturnCrossPartitionCharge.c)
 */

void __fastcall MiReturnCrossPartitionCharges(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  volatile LONG *v5; // rbx
  struct _KEVENT *v9; // rdi
  volatile LONG *v10; // rcx
  KIRQL v11; // si
  int v12; // eax
  __int64 v13; // r8

  v5 = (volatile LONG *)(a1 + 2112);
  v9 = 0LL;
  v10 = (volatile LONG *)(a1 + 2112);
  if ( KeGetCurrentIrql() == 2 )
  {
    v11 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(v10);
  }
  v12 = MiReturnCrossPartitionCharge(a1, a2, a4);
  if ( (a3 & 1) != 0 )
    v12 = MiReturnCrossPartitionCharge(a1, a2 + 1, v13);
  if ( v12 )
    v9 = *(struct _KEVENT **)(a1 + 3152);
  if ( v11 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  else
    ExReleaseSpinLockExclusive(v5, v11);
  if ( v9 )
    KeSetEvent(v9, 1, 0);
}
