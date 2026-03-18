/*
 * XREFs of KiPollFreezeExecution @ 0x14052C910
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140C078A0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

char KiPollFreezeExecution()
{
  _mm_pause();
  return 0;
}
