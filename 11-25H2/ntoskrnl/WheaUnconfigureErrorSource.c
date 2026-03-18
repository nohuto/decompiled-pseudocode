/*
 * XREFs of WheaUnconfigureErrorSource @ 0x140B51C70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     WheapSetDefaultErrorConfigurationCalls @ 0x140651BCC (WheapSetDefaultErrorConfigurationCalls.c)
 */

__int64 __fastcall WheaUnconfigureErrorSource(unsigned int a1)
{
  unsigned __int64 *v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebp
  __int64 *v4; // rsi
  __int64 *v5; // rax
  __int64 *v6; // rsi

  if ( a1 > 0x12 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v1 = (unsigned __int64 *)((char *)&WheapSourceConfiguration + 64 * (__int64)(int)a1);
    CurrentThread = KeGetCurrentThread();
    v3 = -1073741823;
    --CurrentThread->KernelApcDisable;
    v4 = KeAbPreAcquire((__int64)&WheapConfigTableLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&WheapConfigTableLock,
        0,
        v4,
        (unsigned __int64)&WheapConfigTableLock);
    if ( v4 )
      *((_BYTE *)v4 + 10) = 1;
    v5 = KeAbPreAcquire((__int64)v1, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
      ExfAcquirePushLockExclusiveEx(v1, v5, (__int64)v1);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    if ( *((_BYTE *)v1 + 8) )
    {
      *((_BYTE *)v1 + 8) = 0;
      WheapSetDefaultErrorConfigurationCalls(v1);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease((ULONG_PTR)v1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&WheapConfigTableLock);
    KeAbPostRelease((ULONG_PTR)&WheapConfigTableLock);
    KeLeaveCriticalRegion();
  }
  return v3;
}
