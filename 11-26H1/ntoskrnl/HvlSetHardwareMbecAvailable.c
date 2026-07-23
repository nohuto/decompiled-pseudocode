/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x1405BB920
 * Callers:
 *     KiSetFeatureBits @ 0x140BFD4E8 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
