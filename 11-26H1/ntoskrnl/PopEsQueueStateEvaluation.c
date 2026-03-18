/*
 * XREFs of PopEsQueueStateEvaluation @ 0x140947B44
 * Callers:
 *     PopEsInStandbyEvaluate @ 0x14094683C (PopEsInStandbyEvaluate.c)
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x140947B64 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
