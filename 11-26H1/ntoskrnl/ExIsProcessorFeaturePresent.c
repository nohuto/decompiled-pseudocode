/*
 * XREFs of ExIsProcessorFeaturePresent @ 0x1404BF830
 * Callers:
 *     PiIsDriverBlocked @ 0x140A250AC (PiIsDriverBlocked.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x1404BF850 (RtlIsProcessorFeaturePresent.c)
 */

BOOLEAN __stdcall ExIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  return RtlIsProcessorFeaturePresent(ProcessorFeature);
}
