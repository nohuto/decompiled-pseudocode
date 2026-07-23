/*
 * XREFs of MiSendParkedCoreUpdateToAllChildPartitions @ 0x1404B69E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x1404A2784 (MiIterateOverPartitions.c)
 */

void __fastcall MiSendParkedCoreUpdateToAllChildPartitions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  LegacyAutoBoost *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  KIRQL v9; // al

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    --CurrentThread->SpecialApcDisable;
    v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E2ED08, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2ED08, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E2ED08.Header.Lock, 0, v5, &stru_140E2ED08);
    if ( v5 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v5 + 33) |= 2u;
      else
        *((_BYTE *)v5 + 10) = 1;
    }
    MiIterateOverPartitions((__int64)MiMoveBackgroundZeroThreads, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2ED08, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&stru_140E2ED08.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E2ED08);
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v7, v6);
    v9 = ExAcquireSpinLockExclusive(&dword_140E2D980);
    if ( stru_140E2DA90.Parameter == (void *)1 )
      break;
    stru_140E2DA90.Parameter = (void *)1;
    if ( v9 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2D980);
    else
      ExReleaseSpinLockExclusive(&dword_140E2D980, v9);
  }
  stru_140E2DA90.Parameter = 0LL;
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2D980);
  else
    ExReleaseSpinLockExclusive(&dword_140E2D980, v9);
}
