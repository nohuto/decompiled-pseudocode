/*
 * XREFs of KiGetProcessorSignature @ 0x1405F6C6C
 * Callers:
 *     KiInitializeBootStructures @ 0x140BF5890 (KiInitializeBootStructures.c)
 *     KiSetFeatureBits @ 0x140BF74E8 (KiSetFeatureBits.c)
 * Callees:
 *     RtlGetProcessorSignature @ 0x140BFEEB4 (RtlGetProcessorSignature.c)
 */

__int64 KiGetProcessorSignature()
{
  return RtlGetProcessorSignature();
}
