/*
 * XREFs of HalpInitSystemPhase0 @ 0x140CAD6BC
 * Callers:
 *     HalInitSystem @ 0x140BE9970 (HalInitSystem.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140BE99CC (HalpInitSystemHelper.c)
 */

bool HalpInitSystemPhase0()
{
  return (int)HalpInitSystemHelper(7u, 16) >= 0;
}
