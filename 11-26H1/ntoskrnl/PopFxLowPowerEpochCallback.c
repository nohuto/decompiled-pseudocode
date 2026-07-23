/*
 * XREFs of PopFxLowPowerEpochCallback @ 0x1404F89B0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 __fastcall PopFxLowPowerEpochCallback(void *Buf2, char *a2, int a3)
{
  unsigned int v5; // ebx
  struct _KLOCK_ENTRIES *v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v8; // rbx
  struct _KTHREAD *i; // rbx
  _XSAVE_FORMAT *StateSaveArea; // r8
  char v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = -1073741811;
  if ( !memcmp(&GUID_LOW_POWER_EPOCH, Buf2, 0x10uLL) && a3 == 4 && a2 )
  {
    byte_140E676E4 = *a2;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.WaitListEntry.Blink, 0LL, 0LL, v6);
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink,
           17LL,
           0LL) )
    {
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink,
        0,
        v8,
        (struct _KTHREAD *)(&PopFxBlockingDeviceListLock.SwapListEntry + 1));
    }
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v8 + 33) |= 2u;
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    for ( i = (struct _KTHREAD *)PopFxBlockingDeviceListLock.RelativeTimerBias;
          i != (struct _KTHREAD *)&PopFxBlockingDeviceListLock.RelativeTimerBias;
          i = *(struct _KTHREAD **)&i->Header.Lock )
    {
      StateSaveArea = i->StateSaveArea;
      v12[0] = 0;
      if ( StateSaveArea )
      {
        v12[0] = byte_140E676E4;
        guard_dispatch_icall_no_overrides(24LL, v12);
      }
    }
    PopDirectedDripsDiagLock.SchedulerApcFill3[48] = byte_140E676E4;
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink,
           0LL,
           17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink);
    KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.WaitListEntry.Blink);
    KeLeaveCriticalRegion();
    return 0;
  }
  return v5;
}
