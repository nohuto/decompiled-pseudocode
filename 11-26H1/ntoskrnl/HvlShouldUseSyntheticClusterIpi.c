/*
 * XREFs of HvlShouldUseSyntheticClusterIpi @ 0x1405347F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlShouldUseSyntheticClusterIpi()
{
  return (HvlpFlags & 8) != 0;
}
