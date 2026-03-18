/*
 * XREFs of WheaSelLogSetNtSchedulerAvailability @ 0x14064F6B8
 * Callers:
 *     WheaSelLogInitialize @ 0x140C32DC4 (WheaSelLogInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14064F754 (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 */

void WheaSelLogSetNtSchedulerAvailability()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&WheaIpmiContextLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&WheaIpmiContextLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&WheaIpmiContextLock, v1, (__int64)&WheaIpmiContextLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  WheapSelLogSetNtSchedulerAvailabilityNoLock();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheaIpmiContextLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheaIpmiContextLock);
  KeAbPostRelease((ULONG_PTR)&WheaIpmiContextLock);
  KeLeaveCriticalRegion();
}
