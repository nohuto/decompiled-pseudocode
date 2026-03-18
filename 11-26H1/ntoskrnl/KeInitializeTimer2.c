/*
 * XREFs of KeInitializeTimer2 @ 0x140456ED0
 * Callers:
 *     EtwpCoverageEnsureContext @ 0x140775C70 (EtwpCoverageEnsureContext.c)
 *     PopInitializeTimer @ 0x1407C8C18 (PopInitializeTimer.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x1407CC0A4 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopThermalZoneAdd @ 0x1407D1E00 (PopThermalZoneAdd.c)
 *     ExpWorkQueueInitializeHealthMetricsMonitor @ 0x140840160 (ExpWorkQueueInitializeHealthMetricsMonitor.c)
 *     ExpWorkQueueManagerInitialize @ 0x1408402B8 (ExpWorkQueueManagerInitialize.c)
 *     NtCreateWorkerFactory @ 0x140A912F0 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x140ABD000 (NtCreateTimer2.c)
 *     KiCompleteKernelInit @ 0x140BF36A8 (KiCompleteKernelInit.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x140456EEC (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2(a1, a2, a3, a4);
}
