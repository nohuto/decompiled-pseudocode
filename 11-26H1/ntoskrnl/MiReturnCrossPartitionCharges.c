/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x14036FF88
 * Callers:
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 *     MiReturnCloneCharges @ 0x14036E844 (MiReturnCloneCharges.c)
 *     MiUnmapViewSubsections @ 0x14036F6F0 (MiUnmapViewSubsections.c)
 *     MiFreeLargePages @ 0x1403D0F00 (MiFreeLargePages.c)
 *     MiGetSubsectionCharges @ 0x1404AFE30 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDeleteAweInfoPageRuns @ 0x140705CD0 (MiDeleteAweInfoPageRuns.c)
 *     MiFreeContiguousLargePageRun @ 0x140706440 (MiFreeContiguousLargePageRun.c)
 *     NtFreeUserPhysicalPages @ 0x14087F7C0 (NtFreeUserPhysicalPages.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnCrossPartitionCharge @ 0x1404FD0B4 (MiReturnCrossPartitionCharge.c)
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
