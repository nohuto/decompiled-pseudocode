/*
 * XREFs of WheapCallInUsePageNotificationCallbacks @ 0x1407B83C8
 * Callers:
 *     WheaAttemptRowOffline @ 0x140650B80 (WheaAttemptRowOffline.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407B814C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallInUsePageNotificationCallbacks(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rax
  signed __int8 v10; // cf
  __int64 *v11; // rdi
  PVOID *v12; // rdi
  unsigned int v13; // r14d
  __int64 v14; // rsi
  __int128 Src; // [rsp+38h] [rbp-48h] BYREF
  __int128 v16; // [rsp+48h] [rbp-38h]
  __int128 v17; // [rsp+58h] [rbp-28h]
  __int64 v18; // [rsp+68h] [rbp-18h]

  v18 = 0LL;
  Src = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((__int64)&WheapInUsePageOfflineNotifyLock, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v11 = v9;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v9, (__int64)&WheapInUsePageOfflineNotifyLock);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  v12 = (PVOID *)WheapInUsePageOfflineNotifyList;
  if ( WheapInUsePageOfflineNotifyList != &WheapInUsePageOfflineNotifyList )
  {
    do
    {
      *(_DWORD *)(a4 + 32) = a3;
      guard_dispatch_icall_no_overrides(a1);
      v13 = 0;
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 56LL;
      *(_QWORD *)&v16 = 0x800000584C4E524BuLL;
      *((_QWORD *)&v16 + 1) = 0x1800000002LL;
      if ( a3 )
      {
        v14 = a4 + 44;
        do
        {
          LODWORD(v17) = v13 + a1;
          *(_QWORD *)((char *)&v17 + 4) = *(unsigned int *)(v14 - 8);
          HIDWORD(v17) = *(_DWORD *)v14;
          v18 = *(_QWORD *)(v14 + 8);
          WheaLogInternalEvent(&Src);
          ++v13;
          v14 += 24LL;
        }
        while ( v13 < a3 );
      }
      v12 = (PVOID *)*v12;
    }
    while ( v12 != &WheapInUsePageOfflineNotifyList );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
