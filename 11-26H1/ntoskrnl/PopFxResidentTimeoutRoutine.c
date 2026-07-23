/*
 * XREFs of PopFxResidentTimeoutRoutine @ 0x140395980
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     PopFxArmResidentTimer @ 0x14021B998 (PopFxArmResidentTimer.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PopFxIdleComponent @ 0x140396DA0 (PopFxIdleComponent.c)
 */

void __fastcall PopFxResidentTimeoutRoutine(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rax
  ULONG_PTR v7; // rbx
  LARGE_INTEGER v8; // rsi
  __int64 v9; // rdx
  unsigned int i; // edi
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp+10h] BYREF

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
  if ( *(struct _KTHREAD **)&PopFxBlockingDeviceListLock.ForegroundLossTime != (struct _KTHREAD *)&PopFxBlockingDeviceListLock.ForegroundLossTime )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v7 = *(_QWORD *)&PopFxBlockingDeviceListLock.ForegroundLossTime;
    v8 = InterruptTimePrecise;
    while ( (unsigned int *)v7 != &PopFxBlockingDeviceListLock.ForegroundLossTime )
    {
      for ( i = 0; i < *(_DWORD *)(v7 + 868); ++i )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v7 + 872) + 8LL * i);
        if ( *(int *)(v9 + 96) > 0
          && v8.QuadPart - *(_QWORD *)(v9 + 144) >= (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
        {
          _InterlockedAdd((volatile signed __int32 *)(v9 + 96), 0xFFFFFFFF);
          _InterlockedAdd((volatile signed __int32 *)&PopFxBlockingDeviceListLock.StackBase, 0xFFFFFFFF);
          PopFxIdleComponent(v7, i);
        }
      }
      v7 = *(_QWORD *)v7;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
  KeLeaveCriticalRegion();
  PopFxArmResidentTimer(1);
}
