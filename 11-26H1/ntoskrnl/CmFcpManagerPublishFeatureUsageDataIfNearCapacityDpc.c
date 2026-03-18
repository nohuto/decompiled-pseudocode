/*
 * XREFs of CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc @ 0x1406E2CE0
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x140356AAC (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc(__int64 a1, __int64 a2)
{
  _InterlockedAnd((volatile signed __int32 *)(a2 + 1796), 0xFFFFFFFD);
  _m_prefetchw((const void *)(a2 + 1796));
  if ( (_InterlockedOr((volatile signed __int32 *)(a2 + 1796), 1u) & 1) == 0 )
    CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 1680));
}
