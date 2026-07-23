/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x140C553F8
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140C5A5B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( WheapPfaLock.SchedulerApc.ApcStateIndex )
  {
    KeInitializeTimer(&stru_140E650B0);
    KeInitializeDpc(&stru_140E64FF0, AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140E650B0, 0LL, 0x1Eu, 0, &stru_140E64FF0);
  }
  return result;
}
