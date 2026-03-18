/*
 * XREFs of WheaConfigureErrorSource @ 0x140BFFC80
 * Callers:
 *     WheaAddErrorSourceDeviceDriver @ 0x140847BD0 (WheaAddErrorSourceDeviceDriver.c)
 *     HalpWheaInitDiscard @ 0x140CAFBBC (HalpWheaInitDiscard.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     WheapInitializeDeferredErrorSources @ 0x1406D4870 (WheapInitializeDeferredErrorSources.c)
 */

__int64 __fastcall WheaConfigureErrorSource(signed int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r14
  void *volatile *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // r15d
  void *v9; // rdx
  LegacyAutoBoost *v10; // rbp
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rbp
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  signed __int32 v17[18]; // [rsp+0h] [rbp-48h] BYREF

  v4 = a1;
  if ( (unsigned int)a1 > 0x12 )
    return (unsigned int)-1073741811;
  v6 = &WheapInUsePageOfflineNotifyLock.StackLimit + 8 * (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v8 = -1073741823;
  --CurrentThread->KernelApcDisable;
  v10 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&WheapConfigTableLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&WheapConfigTableLock.Header.Lock, 0, v10, &WheapConfigTableLock);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v12 = (AutoBoost *)KeAbPreAcquire((__int64)(&WheapInUsePageOfflineNotifyLock.StackLimit + 8 * v4), 0LL, 0LL, v11);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&WheapInUsePageOfflineNotifyLock.StackLimit + 8 * v4,
      v12,
      (__int64)(&WheapInUsePageOfflineNotifyLock.StackLimit + 8 * v4));
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v13);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  if ( !*((_BYTE *)v6 + 8) )
  {
    *((_DWORD *)v6 + 3) = *(_DWORD *)a2;
    if ( *(_QWORD *)(a2 + 8) )
      v6[2] = *(void *volatile *)(a2 + 8);
    if ( *(_QWORD *)(a2 + 16) )
      v6[3] = *(void *volatile *)(a2 + 16);
    if ( *(_QWORD *)(a2 + 24) )
      v6[4] = *(void *volatile *)(a2 + 24);
    if ( *(_QWORD *)(a2 + 32) )
    {
      v15 = *(__int64 (__fastcall **)(__int64, __int64))(a2 + 32);
    }
    else
    {
      if ( (int)v4 <= 11 || (_DWORD)v4 == 14 )
        goto LABEL_27;
      v15 = WheapGenericErrSrcRecover;
    }
    *((_QWORD *)v6 + 5) = v15;
LABEL_27:
    if ( *(_QWORD *)(a2 + 40) )
      v6[6] = *(void *volatile *)(a2 + 40);
    _InterlockedOr(v17, 0);
    *((_BYTE *)v6 + 8) = 1;
    if ( WheapInitializationComplete )
      v8 = WheapInitializeDeferredErrorSources(v4);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock.StackLimit + 8 * v4);
  KeAbPostRelease((unsigned __int64)(&WheapInUsePageOfflineNotifyLock.StackLimit + 8 * v4));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&WheapConfigTableLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&WheapConfigTableLock);
  KeLeaveCriticalRegion();
  return v8;
}
