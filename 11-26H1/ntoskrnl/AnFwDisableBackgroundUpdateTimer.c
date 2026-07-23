/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x140C553CC
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x140C571F4 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140C57580 (AnFwpBackgroundUpdateTimer.c)
 *     ResFwFreeContext @ 0x140C588B8 (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x140C58BA0 (AnFwDisplayFade.c)
 * Callees:
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( WheapPfaLock.SchedulerApc.ApcMode )
  {
    result = KeCancelTimer(&stru_140E65070);
    WheapPfaLock.SchedulerApc.ApcMode = 0;
  }
  return result;
}
