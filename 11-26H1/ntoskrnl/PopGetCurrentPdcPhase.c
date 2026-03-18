/*
 * XREFs of PopGetCurrentPdcPhase @ 0x14060D670
 * Callers:
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140773E40 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopRecordPhysicalPowerButton @ 0x1407C9068 (PopRecordPhysicalPowerButton.c)
 *     NtSetThreadExecutionState @ 0x1407D2150 (NtSetThreadExecutionState.c)
 * Callees:
 *     <none>
 */

__int64 PopGetCurrentPdcPhase()
{
  return (unsigned int)PopCurrentPdcCsPhase;
}
