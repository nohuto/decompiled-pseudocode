/*
 * XREFs of MiSendParkedCoreUpdateToAllChildPartitions @ 0x1404BD200
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x1404A90F4 (MiIterateOverPartitions.c)
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
    v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E2EB88, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2EB88, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E2EB88.Header.Lock, 0, v5, &stru_140E2EB88);
    if ( v5 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v5 + 33) |= 2u;
      else
        *((_BYTE *)v5 + 10) = 1;
    }
    MiIterateOverPartitions((__int64)MiMoveBackgroundZeroThreads, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2EB88, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&stru_140E2EB88.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E2EB88);
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v7, v6);
    v9 = ExAcquireSpinLockExclusive(&dword_140E2D800);
    if ( stru_140E2D910.Parameter == (void *)1 )
      break;
    stru_140E2D910.Parameter = (void *)1;
    if ( v9 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2D800);
    else
      ExReleaseSpinLockExclusive(&dword_140E2D800, v9);
  }
  stru_140E2D910.Parameter = 0LL;
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2D800);
  else
    ExReleaseSpinLockExclusive(&dword_140E2D800, v9);
}
