/*
 * XREFs of HalAllProcessorsStarted @ 0x140CAD620
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140BE99CC (HalpInitSystemHelper.c)
 */

bool HalAllProcessorsStarted()
{
  return (int)HalpInitSystemHelper(0x15u, 22) >= 0;
}
