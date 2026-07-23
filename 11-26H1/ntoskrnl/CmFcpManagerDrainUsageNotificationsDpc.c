/*
 * XREFs of CmFcpManagerDrainUsageNotificationsDpc @ 0x140358830
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14035884C (CmpWorkItemQueueWork.c)
 */

__int64 __fastcall CmFcpManagerDrainUsageNotificationsDpc(__int64 a1, __int64 a2)
{
  return CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 496));
}
