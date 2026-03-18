/*
 * XREFs of MiUnlockDriverMappings @ 0x1404F9FA4
 * Callers:
 *     MiReleaseDriverPtes @ 0x140A80038 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140B0A2B4 (MiReserveDriverPtes.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall MiUnlockDriverMappings(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&stru_140E2D150.SchedulerApc.NormalContext,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2D150.SchedulerApc.NormalContext);
  KeAbPostRelease((unsigned __int64)&stru_140E2D150.SchedulerApc.NormalContext);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v3, v2);
}
