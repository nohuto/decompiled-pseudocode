/*
 * XREFs of PspReleaseSyscallProviderRegistrationLockExclusive @ 0x1406175FC
 * Callers:
 *     PspDestroySyscallProvider @ 0x1407F3238 (PspDestroySyscallProvider.c)
 *     PspInsertSyscallProvider @ 0x1407F342C (PspInsertSyscallProvider.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void PspReleaseSyscallProviderRegistrationLockExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock.FirstArgument, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.FirstArgument);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.FirstArgument);
  KeLeaveCriticalRegion();
}
