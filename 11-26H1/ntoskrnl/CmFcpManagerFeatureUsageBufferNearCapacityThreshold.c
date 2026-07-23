/*
 * XREFs of CmFcpManagerFeatureUsageBufferNearCapacityThreshold @ 0x1404DF168
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x140AC1560 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmFcpManagerFeatureUsageBufferNearCapacityThreshold(unsigned int a1)
{
  return (a1 >> 1) + (a1 >> 2);
}
