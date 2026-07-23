/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x1404D7A98
 * Callers:
 *     PopClearUserShutdownMarkerWorker @ 0x1407CBC70 (PopClearUserShutdownMarkerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x1407CC5B0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopThermalStateTransitionWorker @ 0x1407D4D40 (PopThermalStateTransitionWorker.c)
 *     PopUsb4DisplayPresenceUpdatedWorker @ 0x1407DA3D0 (PopUsb4DisplayPresenceUpdatedWorker.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1407DE6E0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1407E2720 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407E2A20 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopAdaptiveStandbyPolicyTimerWorker @ 0x1407E4B50 (PopAdaptiveStandbyPolicyTimerWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1409F8238 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopWin32kActivatorWorker @ 0x140AA9B60 (PopWin32kActivatorWorker.c)
 *     PopBsdFlushWorker @ 0x140B02770 (PopBsdFlushWorker.c)
 *     PopBsdUpdateWorker @ 0x140B027B0 (PopBsdUpdateWorker.c)
 *     PpmPerfTelemetryWorker @ 0x140B2B620 (PpmPerfTelemetryWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140B40DB0 (PopExternalMonitorUpdatedWorker.c)
 *     PopRecordLidStateWorker @ 0x140B56D50 (PopRecordLidStateWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x140B58B70 (PopSetUserShutdownMarkerWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140C03500 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
