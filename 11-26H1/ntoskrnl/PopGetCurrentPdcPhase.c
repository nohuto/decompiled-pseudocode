/*
 * XREFs of PopGetCurrentPdcPhase @ 0x140610778
 * Callers:
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140776E40 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopRecordPhysicalPowerButton @ 0x1407CC108 (PopRecordPhysicalPowerButton.c)
 *     NtSetThreadExecutionState @ 0x1407D51F0 (NtSetThreadExecutionState.c)
 * Callees:
 *     <none>
 */

__int64 PopGetCurrentPdcPhase()
{
  return (unsigned int)PopCurrentPdcCsPhase;
}
