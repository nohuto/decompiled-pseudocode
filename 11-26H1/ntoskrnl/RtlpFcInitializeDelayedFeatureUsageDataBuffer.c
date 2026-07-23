/*
 * XREFs of RtlpFcInitializeDelayedFeatureUsageDataBuffer @ 0x1404E36E0
 * Callers:
 *     CmFcpManagerPublishFeatureUsageData @ 0x140AC18DC (CmFcpManagerPublishFeatureUsageData.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall RtlpFcInitializeDelayedFeatureUsageDataBuffer(void *a1, size_t a2)
{
  return memset_0(a1, 0, a2);
}
