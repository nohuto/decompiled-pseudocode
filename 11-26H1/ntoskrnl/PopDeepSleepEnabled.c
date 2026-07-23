/*
 * XREFs of PopDeepSleepEnabled @ 0x1404CB9AC
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407E2A20 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopCheckResiliencyScenarios @ 0x1409F8E64 (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x140B52B14 (PopEnforceDeepSleep.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140B69834 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
