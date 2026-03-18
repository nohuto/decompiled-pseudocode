/*
 * XREFs of WheapCallInUsePageNotificationCallbacks @ 0x140848A48
 * Callers:
 *     WheaAttemptRowOffline @ 0x1406D5AE0 (WheaAttemptRowOffline.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1408487D0 (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     WheaLogInternalEvent @ 0x1403DFEC0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallInUsePageNotificationCallbacks(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v10; // rax
  void *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rdi
  struct _KTHREAD *i; // rdi
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
  for ( i = (struct _KTHREAD *)WheapInUsePageOfflineNotifyLock.Header.WaitListHead.Flink;
        i != (struct _KTHREAD *)&WheapInUsePageOfflineNotifyLock.Header.WaitListHead;
        i = *(struct _KTHREAD **)&i->Header.Lock )
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
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&WheapInUsePageOfflineNotifyLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
