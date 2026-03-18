/*
 * XREFs of WheaSelLogError @ 0x14064F448
 * Callers:
 *     IopWheaSelLogError @ 0x140592000 (IopWheaSelLogError.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     IpmiHwContextInitialized @ 0x1406942CC (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelErrorRecord @ 0x1406949DC (IpmiLibAddSelErrorRecord.c)
 */

__int64 __fastcall WheaSelLogError(__int64 a1, unsigned int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rax
  signed __int8 v7; // cf
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((__int64)&WheaIpmiContextLock, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&WheaIpmiContextLock, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&WheaIpmiContextLock, v6, (__int64)&WheaIpmiContextLock);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  if ( !(unsigned __int8)IpmiHwContextInitialized(&WheaIpmiContext) || WheaIpmiHwLogLocked )
    v11 = -1073741823;
  else
    v11 = IpmiLibAddSelErrorRecord(v10, v9, a2, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheaIpmiContextLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheaIpmiContextLock);
  KeAbPostRelease((ULONG_PTR)&WheaIpmiContextLock);
  KeLeaveCriticalRegion();
  return v11;
}
