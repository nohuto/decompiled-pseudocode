/*
 * XREFs of PspUnlockJobListExclusive @ 0x140A80BD0
 * Callers:
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x140A7F420 (NtCreateJobObject.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall PspUnlockJobListExclusive(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock.Affinity, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.Affinity);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.Affinity);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v3, v2);
}
