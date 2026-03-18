/*
 * XREFs of WheaUnconfigureErrorSource @ 0x140BFFE70
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     WheapSetDefaultErrorConfigurationCalls @ 0x1406D6C6C (WheapSetDefaultErrorConfigurationCalls.c)
 */

__int64 __fastcall WheaUnconfigureErrorSource(unsigned int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  void *volatile *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // ebp
  void *v7; // rdx
  LegacyAutoBoost *v8; // rsi
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rsi

  if ( a1 > 0x12 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = &WheapInUsePageOfflineNotifyLock.StackLimit + 8 * (__int64)(int)a1;
    CurrentThread = KeGetCurrentThread();
    v6 = -1073741823;
    --CurrentThread->KernelApcDisable;
    v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&WheapConfigTableLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&WheapConfigTableLock.Header.Lock, 0, v8, &WheapConfigTableLock);
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v8, v7);
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)v4, 0LL, 0LL, v9);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v10, (__int64)v4);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    if ( *((_BYTE *)v4 + 8) )
    {
      *((_BYTE *)v4 + 8) = 0;
      WheapSetDefaultErrorConfigurationCalls(v4);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((unsigned __int64)v4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&WheapConfigTableLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&WheapConfigTableLock);
    KeLeaveCriticalRegion();
  }
  return v6;
}
