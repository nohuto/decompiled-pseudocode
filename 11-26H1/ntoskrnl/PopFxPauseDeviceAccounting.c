/*
 * XREFs of PopFxPauseDeviceAccounting @ 0x1403949DC
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x14042B348 (PopFxStopDeviceAccounting.c)
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxMergeActiveTimeAccounting @ 0x140394998 (PopFxMergeActiveTimeAccounting.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140395DB8 (PopFxUpdateAccountingActiveTime.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1404AFA54 (PopFxSetGlobalDeviceAccountingEnabled.c)
 */

void __fastcall PopFxPauseDeviceAccounting(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  __int64 v6; // rbp
  ULONG_PTR i; // rbx
  __int64 v8; // rdi
  KIRQL v9; // r11
  _QWORD *v10; // rcx
  unsigned int j; // esi
  KIRQL v12; // r11
  _QWORD *v13; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140F123D0.Header.Lock, 0, v5, &qword_140F123D0);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v5 + 33) |= 2u;
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  v6 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_140F123E0; (ULONG_PTR *)i != &qword_140F123E0; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 640));
      if ( *(_DWORD *)(i + 656) )
      {
        PopFxUpdateAccountingActiveTime(i + 640, v6, 1200000000LL);
        PopFxMergeActiveTimeAccounting(v13);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(i + 640), v12);
      for ( j = 0; j < *(_DWORD *)(i + 868); ++j )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(i + 872) + 8LL * j) + 200LL;
        v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8);
        if ( *(_DWORD *)(v8 + 16) )
        {
          PopFxUpdateAccountingActiveTime(v8, v6, 1200000000LL);
          PopFxMergeActiveTimeAccounting(v10);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v8, v9);
      }
    }
  }
  PopFxSetGlobalDeviceAccountingEnabled(0LL);
  PopFxDeviceAccountingPaused = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140F123D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F123D0);
  KeLeaveCriticalRegion();
}
