/*
 * XREFs of PopEsWorkItemSchedule @ 0x1409C34D4
 * Callers:
 *     PopEsWnfSubscriptionGpAndMdmCallback @ 0x1407DFDB0 (PopEsWnfSubscriptionGpAndMdmCallback.c)
 *     PopEsPowerSettingPolicyCallback @ 0x1409C1CD0 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsQueueStateEvaluation @ 0x1409C34B4 (PopEsQueueStateEvaluation.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1409C3620 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x140B53450 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsInStandbyAcDcCallback @ 0x140B772A0 (PopEsInStandbyAcDcCallback.c)
 *     PopEsInit @ 0x140CDBD48 (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
