/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x1405B90A0
 * Callers:
 *     KiSetFeatureBits @ 0x140BF74E8 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
