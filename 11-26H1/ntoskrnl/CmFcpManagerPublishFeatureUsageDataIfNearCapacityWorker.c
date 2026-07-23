/*
 * XREFs of CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker @ 0x140AC1540
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x140AC1560 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 */

__int64 __fastcall CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker(__int64 a1, __int64 a2)
{
  _InterlockedAnd((volatile signed __int32 *)(a2 + 1868), 0xFFFFFFFE);
  return CmFcpManagerPublishFeatureUsageDataIfNearCapacity(a2);
}
