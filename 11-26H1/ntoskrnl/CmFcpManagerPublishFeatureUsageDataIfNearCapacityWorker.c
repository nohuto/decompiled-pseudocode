/*
 * XREFs of CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker @ 0x140ABF4A0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x140ABF4C0 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 */

__int64 __fastcall CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker(__int64 a1, __int64 a2)
{
  _InterlockedAnd((volatile signed __int32 *)(a2 + 1796), 0xFFFFFFFE);
  return CmFcpManagerPublishFeatureUsageDataIfNearCapacity(a2);
}
