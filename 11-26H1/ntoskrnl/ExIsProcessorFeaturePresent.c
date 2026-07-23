/*
 * XREFs of ExIsProcessorFeaturePresent @ 0x1404B9080
 * Callers:
 *     PiIsDriverBlocked @ 0x140A3814C (PiIsDriverBlocked.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x1404B90A0 (RtlIsProcessorFeaturePresent.c)
 */

BOOLEAN __stdcall ExIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  return RtlIsProcessorFeaturePresent(ProcessorFeature);
}
