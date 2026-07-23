/*
 * XREFs of HalpInitSystemPhase0 @ 0x140CB36FC
 * Callers:
 *     HalInitSystem @ 0x140BEF970 (HalInitSystem.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140BEF9CC (HalpInitSystemHelper.c)
 */

bool HalpInitSystemPhase0()
{
  return (int)HalpInitSystemHelper(7u, 16) >= 0;
}
