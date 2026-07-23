/*
 * XREFs of KeInitializeTimer2 @ 0x14044E740
 * Callers:
 *     EtwpCoverageEnsureContext @ 0x140778B18 (EtwpCoverageEnsureContext.c)
 *     PopInitializeTimer @ 0x1407CBCB8 (PopInitializeTimer.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x1407CF144 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopThermalZoneAdd @ 0x1407D4EA0 (PopThermalZoneAdd.c)
 *     ExpWorkQueueInitializeHealthMetricsMonitor @ 0x1408463A0 (ExpWorkQueueInitializeHealthMetricsMonitor.c)
 *     ExpWorkQueueManagerInitialize @ 0x1408464F8 (ExpWorkQueueManagerInitialize.c)
 *     NtCreateWorkerFactory @ 0x140A95E40 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x140ABF460 (NtCreateTimer2.c)
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2(a1, a2, a3, a4);
}
