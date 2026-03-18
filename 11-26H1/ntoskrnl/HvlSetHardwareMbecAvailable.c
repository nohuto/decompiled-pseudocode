/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x1405B90B0
 * Callers:
 *     KiSetFeatureBits @ 0x140BF74E8 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
