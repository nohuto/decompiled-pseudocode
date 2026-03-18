/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x1404DE3B8
 * Callers:
 *     PopClearUserShutdownMarkerWorker @ 0x1407C8BD0 (PopClearUserShutdownMarkerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x1407C9510 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopThermalStateTransitionWorker @ 0x1407D1CA0 (PopThermalStateTransitionWorker.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1407DA7F0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1407DE0A0 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407DE3A0 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopAdaptiveStandbyPolicyTimerWorker @ 0x1407E0110 (PopAdaptiveStandbyPolicyTimerWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A3C818 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopWin32kActivatorWorker @ 0x140AAC5B0 (PopWin32kActivatorWorker.c)
 *     PopBsdFlushWorker @ 0x140B00A40 (PopBsdFlushWorker.c)
 *     PopBsdUpdateWorker @ 0x140B00A80 (PopBsdUpdateWorker.c)
 *     PpmPerfTelemetryWorker @ 0x140B290E0 (PpmPerfTelemetryWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140B3ED80 (PopExternalMonitorUpdatedWorker.c)
 *     PopRecordLidStateWorker @ 0x140B544B0 (PopRecordLidStateWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x140B55E70 (PopSetUserShutdownMarkerWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140BFD500 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
