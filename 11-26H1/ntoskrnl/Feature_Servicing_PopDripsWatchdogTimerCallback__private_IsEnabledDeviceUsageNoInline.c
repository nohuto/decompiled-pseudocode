/*
 * XREFs of Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline @ 0x1404F7B44
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1407DE0A0 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407DE3A0 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A3C818 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopDripsWatchdogStopWatchdog @ 0x140A3CCE0 (PopDripsWatchdogStopWatchdog.c)
 * Callees:
 *     Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledFallback @ 0x140531590 (Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledFallback.c)
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
