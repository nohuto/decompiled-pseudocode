/*
 * XREFs of Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline @ 0x1404F1154
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1407E2720 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407E2A20 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1409F8238 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1409F8700 (PopDripsWatchdogStopWatchdog.c)
 * Callees:
 *     Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledFallback @ 0x140533A90 (Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_PopDripsWatchdogTimerCallback__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PopDripsWatchdogTimerCallback__private_featureState & 1;
  else
    return Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PopDripsWatchdogTimerCallback__private_featureState,
             3LL);
}
