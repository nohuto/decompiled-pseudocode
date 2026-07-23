/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x14057F630
 * Callers:
 *     KiSetFeatureBits @ 0x140BFD4E8 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
