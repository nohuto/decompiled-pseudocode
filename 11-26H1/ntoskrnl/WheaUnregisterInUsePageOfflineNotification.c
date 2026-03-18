/*
 * XREFs of WheaUnregisterInUsePageOfflineNotification @ 0x1408486A0
 * Callers:
 *     HvlUnregisterWheaErrorNotification @ 0x1407917E0 (HvlUnregisterWheaErrorNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall WheaUnregisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback)
{
  struct _KLOCK_ENTRIES *v1; // r9
  char v2; // di
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rsi
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rdx

  v2 = 0;
  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return -1073741823;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapInUsePageOfflineNotifyLock, 0LL, 0LL, v1);
  v8 = _interlockedbittestandset64(&WheapInUsePageOfflineNotifyLock.Header.Lock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&WheapInUsePageOfflineNotifyLock,
      v6,
      (__int64)&WheapInUsePageOfflineNotifyLock);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  for ( i = WheapInUsePageOfflineNotifyLock.Header.WaitListHead.Flink;
        i != &WheapInUsePageOfflineNotifyLock.Header.WaitListHead;
        i = i->Flink )
  {
    Flink = i->Flink;
    if ( Callback == (PFN_IN_USE_PAGE_OFFLINE_NOTIFY)i[1].Flink )
    {
      if ( Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      ExFreePoolWithTag(i, 0x61656857u);
      v2 = 1;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&WheapInUsePageOfflineNotifyLock);
  KeLeaveCriticalRegion();
  return v2 == 0 ? 0xC0000008 : 0;
}
