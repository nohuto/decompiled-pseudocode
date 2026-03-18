/*
 * XREFs of PopDeepSleepEnabled @ 0x1404D1DFC
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407DE3A0 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopCheckResiliencyScenarios @ 0x140A3D444 (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x140B50284 (PopEnforceDeepSleep.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140B668A8 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopWeakChargerLock.SchedulerApcFill3[16] != 0;
}
