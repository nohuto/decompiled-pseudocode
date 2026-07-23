/*
 * XREFs of RtlpHpGetCurrentProcessorNumber @ 0x180072438
 * Callers:
 *     RtlpHpLfhThreadDataInitializeSet @ 0x180072340 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpVsContextHandleContention @ 0x1800E0854 (RtlpHpVsContextHandleContention.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117744 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     RtlGetCurrentProcessorNumberEx @ 0x180163440 (RtlGetCurrentProcessorNumberEx.c)
 */

__int64 RtlpHpGetCurrentProcessorNumber()
{
  _PROCESSOR_NUMBER ProcessorNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcessorNumber = 0;
  RtlGetCurrentProcessorNumberEx(&ProcessorNumber);
  return ProcessorNumber.Number;
}
