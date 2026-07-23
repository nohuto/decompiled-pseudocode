/*
 * XREFs of KiGetProcessorSignature @ 0x1405F962C
 * Callers:
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 *     KiSetFeatureBits @ 0x140BFD4E8 (KiSetFeatureBits.c)
 * Callees:
 *     RtlGetProcessorSignature @ 0x140C050BC (RtlGetProcessorSignature.c)
 */

__int64 KiGetProcessorSignature()
{
  return RtlGetProcessorSignature();
}
