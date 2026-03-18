/*
 * XREFs of HvlShouldUseSyntheticClusterIpi @ 0x140532350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlShouldUseSyntheticClusterIpi()
{
  return (HvlpFlags & 8) != 0;
}
