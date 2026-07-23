/*
 * XREFs of PopFxPauseDeviceAccounting @ 0x14039675C
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x1404227BC (PopFxStopDeviceAccounting.c)
 *     PdcPoCurrentPdcPhase @ 0x1406105F0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxMergeActiveTimeAccounting @ 0x140396718 (PopFxMergeActiveTimeAccounting.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140397B38 (PopFxUpdateAccountingActiveTime.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1404A90E4 (PopFxSetGlobalDeviceAccountingEnabled.c)
 */

void __fastcall PopFxPauseDeviceAccounting(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  __int64 v6; // rbp
  KSPIN_LOCK *i; // rbx
  __int64 v8; // rdi
  KIRQL v9; // r11
  _QWORD *v10; // rcx
  unsigned int j; // esi
  KIRQL v12; // r11
  _QWORD *v13; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.Teb, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PopFxBlockingDeviceListLock.Teb,
      0,
      v5,
      (struct _KTHREAD *)&PopFxBlockingDeviceListLock.Teb);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v5 + 33) |= 2u;
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  v6 = MEMORY[0xFFFFF78000000008];
  for ( i = *(KSPIN_LOCK **)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        i != (KSPIN_LOCK *)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        i = (KSPIN_LOCK *)*i )
  {
    if ( i[6] )
    {
      v12 = KeAcquireSpinLockRaiseToDpc(i + 80);
      if ( *((_DWORD *)i + 164) )
      {
        PopFxUpdateAccountingActiveTime(i + 80, v6, 1200000000LL);
        PopFxMergeActiveTimeAccounting(v13);
      }
      KeReleaseSpinLock(i + 80, v12);
      for ( j = 0; j < *((_DWORD *)i + 217); ++j )
      {
        v8 = *(_QWORD *)(i[109] + 8LL * j) + 200LL;
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
  KeLeaveCriticalRegion();
}
