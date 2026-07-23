/*
 * XREFs of PopEsQueueStateEvaluation @ 0x1409C34B4
 * Callers:
 *     PopEsInStandbyEvaluate @ 0x1409C21AC (PopEsInStandbyEvaluate.c)
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x1409C34D4 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
