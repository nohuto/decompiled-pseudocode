/*
 * XREFs of PopUpdatePowerActionWatchdogTimeouts @ 0x1407D1498
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x1404FE998 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140B3CD68 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 */

__int64 PopUpdatePowerActionWatchdogTimeouts()
{
  __int64 result; // rax

  result = PopIsDetailedSleepReliabilityDiagEnabled();
  if ( (_BYTE)result )
  {
    PopPowerActionTransitioningWatchdogTimeout = 330;
    PopPowerActionResumingWatchdogTimeout = 150;
  }
  else
  {
    PopPowerActionTransitioningWatchdogTimeout = PopPowerActionTransitioningWatchdogTimeoutDefault;
    result = (unsigned int)PopPowerActionResumingWatchdogTimeoutDefault;
    PopPowerActionResumingWatchdogTimeout = PopPowerActionResumingWatchdogTimeoutDefault;
  }
  return result;
}
