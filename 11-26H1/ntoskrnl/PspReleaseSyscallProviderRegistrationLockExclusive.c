/*
 * XREFs of PspReleaseSyscallProviderRegistrationLockExclusive @ 0x1406147BC
 * Callers:
 *     PspDestroySyscallProvider @ 0x1407ED6D8 (PspDestroySyscallProvider.c)
 *     PspInsertSyscallProvider @ 0x1407ED8CC (PspInsertSyscallProvider.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void PspReleaseSyscallProviderRegistrationLockExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock.FirstArgument, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.FirstArgument);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.FirstArgument);
  KeLeaveCriticalRegion();
}
