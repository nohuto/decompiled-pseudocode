/*
 * XREFs of PopFxInsertDevice @ 0x1404E9100
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x1407D0040 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x140B52230 (PopFxRegisterDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopFxInsertDevice(__int64 a1, __int64 a2, struct _LIST_ENTRY *a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  struct _LIST_ENTRY *Flink; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.Teb, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxBlockingDeviceListLock.Teb, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopFxBlockingDeviceListLock.Teb,
      v6,
      (__int64)&PopFxBlockingDeviceListLock.Teb);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v8 + 33) |= 2u;
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  Flink = PopFxBlockingDeviceListLock.GlobalForegroundListEntry.Flink;
  if ( PopFxBlockingDeviceListLock.GlobalForegroundListEntry.Flink->Flink != (struct _LIST_ENTRY *)&PopFxBlockingDeviceListLock.ForegroundLossTime )
    __fastfail(3u);
  a3->Flink = (struct _LIST_ENTRY *)&PopFxBlockingDeviceListLock.ForegroundLossTime;
  a3->Blink = Flink;
  Flink->Flink = a3;
  PopFxBlockingDeviceListLock.GlobalForegroundListEntry.Flink = a3;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
  KeLeaveCriticalRegion();
}
