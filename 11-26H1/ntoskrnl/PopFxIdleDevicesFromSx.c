/*
 * XREFs of PopFxIdleDevicesFromSx @ 0x1404AB55C
 * Callers:
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PoFxIdleDevice @ 0x1404ABB10 (PoFxIdleDevice.c)
 */

void __fastcall PopFxIdleDevicesFromSx(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  struct _KTHREAD *i; // rbx
  void *volatile StackLimit; // rdi

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
  for ( i = *(struct _KTHREAD **)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        i != (struct _KTHREAD *)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    StackLimit = i->StackLimit;
    if ( StackLimit && (i->AbCompletedIoQoSBoostCount & 1) == 0 && !*((_BYTE *)StackLimit + 216) )
    {
      PoFxIdleDevice(*((_QWORD *)StackLimit + 4));
      _InterlockedAnd((volatile signed __int32 *)StackLimit + 74, 0xFFFFEFFF);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
  KeLeaveCriticalRegion();
}
