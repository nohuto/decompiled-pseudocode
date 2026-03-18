/*
 * XREFs of RtlpFcInitializeDelayedFeatureUsageDataBuffer @ 0x1404EA330
 * Callers:
 *     CmFcpManagerPublishFeatureUsageData @ 0x140ABF83C (CmFcpManagerPublishFeatureUsageData.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall RtlpFcInitializeDelayedFeatureUsageDataBuffer(void *a1, size_t a2)
{
  return memset_0(a1, 0, a2);
}
