/*
 * XREFs of PoFxSystemLatencyNotify @ 0x140395E64
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1403960E8 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall PoFxSystemLatencyNotify(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // di
  LegacyAutoBoost *v7; // rbx
  __int64 v8; // r8
  unsigned __int64 i; // rbx
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.WaitListEntry.Blink, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink,
         17LL,
         0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink,
      0,
      v7,
      (struct _KTHREAD *)(&PopFxBlockingDeviceListLock.SwapListEntry + 1));
  }
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v7 + 33) |= 2u;
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  for ( i = PopFxBlockingDeviceListLock.RelativeTimerBias;
        (unsigned __int64 *)i != &PopFxBlockingDeviceListLock.RelativeTimerBias;
        i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 96) )
    {
      v11 = a1;
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(16LL, &v11, v8) )
      {
        if ( !v6 )
          v6 = *(_DWORD *)(i + 24) >= 0;
      }
    }
  }
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink,
         0LL,
         17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.WaitListEntry.Blink);
  KeLeaveCriticalRegion();
  return v6;
}
