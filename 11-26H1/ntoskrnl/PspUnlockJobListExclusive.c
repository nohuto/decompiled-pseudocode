/*
 * XREFs of PspUnlockJobListExclusive @ 0x140A7812C
 * Callers:
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x140A76700 (NtCreateJobObject.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall PspUnlockJobListExclusive(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock.AffinityVersion, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.AffinityVersion);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.AffinityVersion);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v3, v2);
}
