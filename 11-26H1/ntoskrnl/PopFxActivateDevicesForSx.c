/*
 * XREFs of PopFxActivateDevicesForSx @ 0x1404CE9D4
 * Callers:
 *     PopFxPrepareDevicesForShutdown @ 0x1405248F0 (PopFxPrepareDevicesForShutdown.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PopFxActivateDevice @ 0x1404CEB00 (PopFxActivateDevice.c)
 */

void __fastcall PopFxActivateDevicesForSx(unsigned int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v6; // rbx
  struct _KTHREAD *i; // rbx
  unsigned __int8 *StackLimit; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.Teb, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PopFxBlockingDeviceListLock.Teb,
      0,
      v6,
      (struct _KTHREAD *)&PopFxBlockingDeviceListLock.Teb);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v6 + 33) |= 2u;
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  for ( i = *(struct _KTHREAD **)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        i != (struct _KTHREAD *)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    StackLimit = (unsigned __int8 *)i->StackLimit;
    if ( StackLimit && StackLimit[216] < a1 && (i->AbCompletedIoQoSBoostCount & 1) == 0 )
    {
      PopFxActivateDevice(*((_QWORD *)StackLimit + 4), 0LL, 0LL);
      _InterlockedOr((volatile signed __int32 *)StackLimit + 74, 0x1000u);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
  KeLeaveCriticalRegion();
}
