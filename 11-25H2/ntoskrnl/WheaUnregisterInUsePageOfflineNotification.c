/*
 * XREFs of WheaUnregisterInUsePageOfflineNotification @ 0x1407B8030
 * Callers:
 *     HvlUnregisterWheaErrorNotification @ 0x140702E10 (HvlUnregisterWheaErrorNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall WheaUnregisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback)
{
  char v1; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rax
  signed __int8 v6; // cf
  __int64 *v7; // rsi
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY *i; // rcx
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY v9; // rax
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY **v10; // rdx

  v1 = 0;
  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return -1073741823;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)&WheapInUsePageOfflineNotifyLock, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v5, (__int64)&WheapInUsePageOfflineNotifyLock);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  for ( i = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)WheapInUsePageOfflineNotifyList;
        i != (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)&WheapInUsePageOfflineNotifyList;
        i = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)*i )
  {
    v9 = *i;
    if ( Callback == i[2] )
    {
      if ( *((PFN_IN_USE_PAGE_OFFLINE_NOTIFY **)v9 + 1) != i
        || (v10 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY **)i[1], *v10 != i) )
      {
        __fastfail(3u);
      }
      *v10 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)v9;
      *((_QWORD *)v9 + 1) = v10;
      ExFreePoolWithTag(i, 0x61656857u);
      v1 = 1;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  KeLeaveCriticalRegion();
  return v1 == 0 ? 0xC0000008 : 0;
}
