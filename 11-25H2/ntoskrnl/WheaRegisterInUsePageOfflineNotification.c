/*
 * XREFs of WheaRegisterInUsePageOfflineNotification @ 0x1407B7E90
 * Callers:
 *     HvlRegisterWheaErrorNotification @ 0x140702DC0 (HvlRegisterWheaErrorNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall WheaRegisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback, PVOID Context)
{
  __int64 Pool2; // rax
  _QWORD *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rax
  signed __int8 v9; // cf
  __int64 *v10; // rsi
  _QWORD *v11; // rax

  if ( !WheapInUsePageOfflineNotifyInit )
    return -1073741823;
  Pool2 = ExAllocatePool2(0x40uLL);
  v6 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return -1073741801;
  *(_QWORD *)(Pool2 + 24) = Context;
  *(_QWORD *)(Pool2 + 16) = Callback;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((__int64)&WheapInUsePageOfflineNotifyLock, 0LL);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v8, (__int64)&WheapInUsePageOfflineNotifyLock);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  v11 = (_QWORD *)qword_140EEEA98;
  if ( *(PVOID **)qword_140EEEA98 != &WheapInUsePageOfflineNotifyList )
    __fastfail(3u);
  *v6 = &WheapInUsePageOfflineNotifyList;
  v6[1] = v11;
  *v11 = v6;
  qword_140EEEA98 = (__int64)v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  KeLeaveCriticalRegion();
  return 0;
}
