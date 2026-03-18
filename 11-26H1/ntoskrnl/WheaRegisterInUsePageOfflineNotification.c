/*
 * XREFs of WheaRegisterInUsePageOfflineNotification @ 0x1408484F0
 * Callers:
 *     HvlRegisterWheaErrorNotification @ 0x140791780 (HvlRegisterWheaErrorNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall WheaRegisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback, PVOID Context)
{
  __int64 Pool2; // rax
  struct _KLOCK_ENTRIES *v6; // r9
  struct _LIST_ENTRY *v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  signed __int8 v11; // cf
  AutoBoost *v12; // rsi
  struct _LIST_ENTRY *Blink; // rax

  if ( !WheapInUsePageOfflineNotifyInit )
    return -1073741823;
  Pool2 = ExAllocatePool2(0x40uLL);
  v7 = (struct _LIST_ENTRY *)Pool2;
  if ( !Pool2 )
    return -1073741801;
  *(_QWORD *)(Pool2 + 24) = Context;
  *(_QWORD *)(Pool2 + 16) = Callback;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapInUsePageOfflineNotifyLock, 0LL, 0LL, v6);
  v11 = _interlockedbittestandset64(&WheapInUsePageOfflineNotifyLock.Header.Lock, 0LL);
  v12 = v9;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&WheapInUsePageOfflineNotifyLock,
      v9,
      (__int64)&WheapInUsePageOfflineNotifyLock);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v10);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  Blink = WheapInUsePageOfflineNotifyLock.Header.WaitListHead.Blink;
  if ( WheapInUsePageOfflineNotifyLock.Header.WaitListHead.Blink->Flink != &WheapInUsePageOfflineNotifyLock.Header.WaitListHead )
    __fastfail(3u);
  v7->Flink = &WheapInUsePageOfflineNotifyLock.Header.WaitListHead;
  v7->Blink = Blink;
  Blink->Flink = v7;
  WheapInUsePageOfflineNotifyLock.Header.WaitListHead.Blink = v7;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&WheapInUsePageOfflineNotifyLock);
  KeLeaveCriticalRegion();
  return 0;
}
