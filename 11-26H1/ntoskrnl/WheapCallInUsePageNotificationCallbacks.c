/*
 * XREFs of WheapCallInUsePageNotificationCallbacks @ 0x14084ED18
 * Callers:
 *     WheaAttemptRowOffline @ 0x1406D9BC0 (WheaAttemptRowOffline.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14084EAA0 (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallInUsePageNotificationCallbacks(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v10; // rax
  void *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rdi
  PVOID *v14; // rdi
  unsigned int v15; // r14d
  __int64 v16; // rsi
  __int128 Src; // [rsp+38h] [rbp-48h] BYREF
  __int128 v19; // [rsp+48h] [rbp-38h]
  __int128 v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+68h] [rbp-18h]

  v21 = 0LL;
  v6 = a2;
  Src = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapInUsePageOfflineNotifyLock, 0LL, 0LL, (struct _KLOCK_ENTRIES *)a4);
  v12 = _interlockedbittestandset64(&WheapInUsePageOfflineNotifyLock.Header.Lock, 0LL);
  v13 = v10;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&WheapInUsePageOfflineNotifyLock,
      v10,
      (__int64)&WheapInUsePageOfflineNotifyLock);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v11);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v14 = (PVOID *)WheapInUsePageOfflineNotifyList;
  if ( WheapInUsePageOfflineNotifyList != &WheapInUsePageOfflineNotifyList )
  {
    do
    {
      *(_DWORD *)(a4 + 32) = a3;
      LOBYTE(v11) = v6;
      guard_dispatch_icall_no_overrides(a1, (__int64)v11);
      v15 = 0;
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 56LL;
      *(_QWORD *)&v19 = 0x800000584C4E524BuLL;
      *((_QWORD *)&v19 + 1) = 0x1800000002LL;
      if ( a3 )
      {
        v16 = a4 + 44;
        do
        {
          LODWORD(v20) = v15 + a1;
          *(_QWORD *)((char *)&v20 + 4) = *(unsigned int *)(v16 - 8);
          HIDWORD(v20) = *(_DWORD *)v16;
          v21 = *(_QWORD *)(v16 + 8);
          WheaLogInternalEvent(&Src);
          ++v15;
          v16 += 24LL;
        }
        while ( v15 < a3 );
        v6 = a2;
      }
      v14 = (PVOID *)*v14;
    }
    while ( v14 != &WheapInUsePageOfflineNotifyList );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&WheapInUsePageOfflineNotifyLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
