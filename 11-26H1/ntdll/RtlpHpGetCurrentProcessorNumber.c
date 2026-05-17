/*
 * XREFs of RtlpHpGetCurrentProcessorNumber @ 0x1800938F0
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180092C30 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800933DC (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpVsContextHandleContention @ 0x1800977E0 (RtlpHpVsContextHandleContention.c)
 * Callees:
 *     RtlGetCurrentProcessorNumberEx @ 0x180163540 (RtlGetCurrentProcessorNumberEx.c)
 */

__int64 RtlpHpGetCurrentProcessorNumber()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  RtlGetCurrentProcessorNumberEx(&v1);
  return BYTE2(v1);
}
