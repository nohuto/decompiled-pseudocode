/*
 * XREFs of WheaSelLogCheckPoint @ 0x1407B6FE0
 * Callers:
 *     IopWheaSelLogCheckPoint @ 0x140591FC0 (IopWheaSelLogCheckPoint.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     WheaSelLogInitialize @ 0x140C32DC4 (WheaSelLogInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     IpmiHwContextInitialized @ 0x1406942CC (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x14069496C (IpmiLibAddSelCheckpointRecord.c)
 */

__int64 WheaSelLogCheckPoint()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&WheaIpmiContextLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&WheaIpmiContextLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&WheaIpmiContextLock, v1, (__int64)&WheaIpmiContextLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  if ( !IpmiHwContextInitialized((__int64)&WheaIpmiContext) || WheaIpmiHwLogLocked )
    v5 = -1073741823;
  else
    v5 = IpmiLibAddSelCheckpointRecord(v4);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheaIpmiContextLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheaIpmiContextLock);
  KeAbPostRelease((ULONG_PTR)&WheaIpmiContextLock);
  KeLeaveCriticalRegion();
  return v5;
}
