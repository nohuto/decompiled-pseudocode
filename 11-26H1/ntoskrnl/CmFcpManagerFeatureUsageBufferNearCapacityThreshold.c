/*
 * XREFs of CmFcpManagerFeatureUsageBufferNearCapacityThreshold @ 0x1404E5BC8
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x140ABF4C0 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmFcpManagerFeatureUsageBufferNearCapacityThreshold(unsigned int a1)
{
  return (a1 >> 1) + (a1 >> 2);
}
