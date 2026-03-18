/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x140C4F3CC
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x140C511F4 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140C51580 (AnFwpBackgroundUpdateTimer.c)
 *     ResFwFreeContext @ 0x140C528B8 (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
 * Callees:
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( WheapPfaLock.SchedulerApc.Type )
  {
    result = KeCancelTimer(&stru_140E64E70);
    WheapPfaLock.SchedulerApc.Type = 0;
  }
  return result;
}
