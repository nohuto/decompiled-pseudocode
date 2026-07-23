/*
 * XREFs of WheaRegisterInUsePageOfflineNotification @ 0x14084E7C0
 * Callers:
 *     HvlRegisterWheaErrorNotification @ 0x1407942B0 (HvlRegisterWheaErrorNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall WheaRegisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback, PVOID Context)
{
  __int64 Pool2; // rax
  struct _KLOCK_ENTRIES *v6; // r9
  _QWORD *v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  signed __int8 v11; // cf
  AutoBoost *v12; // rsi
  _QWORD *v13; // rax

  if ( !WheapInUsePageOfflineNotifyInit )
    return -1073741823;
  Pool2 = ExAllocatePool2(0x40uLL);
  v7 = (_QWORD *)Pool2;
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
  v13 = (_QWORD *)qword_140EEF118;
  if ( *(PVOID **)qword_140EEF118 != &WheapInUsePageOfflineNotifyList )
    __fastfail(3u);
  *v7 = &WheapInUsePageOfflineNotifyList;
  v7[1] = v13;
  *v13 = v7;
  qword_140EEF118 = (__int64)v7;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&WheapInUsePageOfflineNotifyLock);
  KeLeaveCriticalRegion();
  return 0;
}
