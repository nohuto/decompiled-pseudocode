/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x1405BB910
 * Callers:
 *     KiSetFeatureBits @ 0x140BFD4E8 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
