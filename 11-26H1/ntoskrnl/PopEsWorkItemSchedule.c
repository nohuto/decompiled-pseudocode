/*
 * XREFs of PopEsWorkItemSchedule @ 0x140947B64
 * Callers:
 *     PopEsWnfSubscriptionGpAndMdmCallback @ 0x1407DBB90 (PopEsWnfSubscriptionGpAndMdmCallback.c)
 *     PopEsPowerSettingPolicyCallback @ 0x140946360 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsQueueStateEvaluation @ 0x140947B44 (PopEsQueueStateEvaluation.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140947CB0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x140B50A40 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsInStandbyAcDcCallback @ 0x140B722C0 (PopEsInStandbyAcDcCallback.c)
 *     PopEsInit @ 0x140CD59F4 (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
