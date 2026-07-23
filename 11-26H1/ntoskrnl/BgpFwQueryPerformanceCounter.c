/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x1404F1AFC
 * Callers:
 *     LogFwReport @ 0x140C55030 (LogFwReport.c)
 *     AnFwpProgressAnimationManual @ 0x140C57650 (AnFwpProgressAnimationManual.c)
 *     AnFwpFadeAnimationTimer @ 0x140C58350 (AnFwpFadeAnimationTimer.c)
 *     AnFwFadeCompletion @ 0x140C58980 (AnFwFadeCompletion.c)
 *     AnFwDisplayFade @ 0x140C58BA0 (AnFwDisplayFade.c)
 *     LogFwStat @ 0x140C5A040 (LogFwStat.c)
 *     AnFwpProgressIndicatorTimer @ 0x140C5A340 (AnFwpProgressIndicatorTimer.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
