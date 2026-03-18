/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x14057D110
 * Callers:
 *     KiSetFeatureBits @ 0x140BF74E8 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
