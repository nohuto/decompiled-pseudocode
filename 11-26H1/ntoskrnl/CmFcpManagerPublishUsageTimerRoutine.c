/*
 * XREFs of CmFcpManagerPublishUsageTimerRoutine @ 0x1406E7010
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14035884C (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerPublishUsageTimerRoutine(__int64 a1, __int64 a2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 1688));
}
