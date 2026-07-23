/*
 * XREFs of PopDiagTraceFxRundown @ 0x140422618
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceControlCallback @ 0x140AC29B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PopDiagTraceDeviceVerboseRundown @ 0x140AD81C0 (PopDiagTraceDeviceVerboseRundown.c)
 *     PopFxTraceDeviceRegistration @ 0x140AF125C (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxPluginRegistration @ 0x140B3DE28 (PopDiagTraceFxPluginRegistration.c)
 */

void __fastcall PopDiagTraceFxRundown(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  LegacyAutoBoost *v7; // rbx
  struct _KTHREAD *j; // rbx
  LegacyAutoBoost *v9; // rbx
  __int64 v10; // r8
  struct _KTHREAD *i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
  {
    v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.WaitListEntry.Blink, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink,
           17LL,
           0LL) )
    {
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink,
        0,
        v9,
        (struct _KTHREAD *)(&PopFxBlockingDeviceListLock.SwapListEntry + 1));
    }
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v9 + 33) |= 2u;
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    for ( i = (struct _KTHREAD *)PopFxBlockingDeviceListLock.RelativeTimerBias;
          i != (struct _KTHREAD *)&PopFxBlockingDeviceListLock.RelativeTimerBias;
          i = *(struct _KTHREAD **)&i->Header.Lock )
    {
      LOBYTE(v10) = 1;
      PopDiagTraceFxPluginRegistration(i, i->SListFaultAddress, v10);
    }
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink,
           0LL,
           17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink);
    KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.WaitListEntry.Blink);
  }
  v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.Teb, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PopFxBlockingDeviceListLock.Teb,
      0,
      v7,
      (struct _KTHREAD *)&PopFxBlockingDeviceListLock.Teb);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v7 + 33) |= 2u;
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  for ( j = *(struct _KTHREAD **)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        j != (struct _KTHREAD *)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        j = *(struct _KTHREAD **)&j->Header.Lock )
  {
    if ( j->StackLimit )
    {
      if ( !a1 )
      {
        LOBYTE(v6) = 1;
        PopFxTraceDeviceRegistration(j, v6);
      }
      PopDiagTraceDeviceVerboseRundown(j, a1);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
  KeLeaveCriticalRegion();
}
