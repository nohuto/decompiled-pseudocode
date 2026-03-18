/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x1404F84EC
 * Callers:
 *     LogFwReport @ 0x140C4F030 (LogFwReport.c)
 *     AnFwpProgressAnimationManual @ 0x140C51650 (AnFwpProgressAnimationManual.c)
 *     AnFwpFadeAnimationTimer @ 0x140C52350 (AnFwpFadeAnimationTimer.c)
 *     AnFwFadeCompletion @ 0x140C52980 (AnFwFadeCompletion.c)
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
 *     LogFwStat @ 0x140C54040 (LogFwStat.c)
 *     AnFwpProgressIndicatorTimer @ 0x140C54340 (AnFwpProgressIndicatorTimer.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
