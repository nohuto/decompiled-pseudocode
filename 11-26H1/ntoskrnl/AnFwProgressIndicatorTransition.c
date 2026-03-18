/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x140C4F3F8
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140C545B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219B40 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x140483D00 (KeInitializeTimer.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( WheapPfaLock.SchedulerApc.SpareByte0 )
  {
    KeInitializeTimer(&stru_140E64EB0);
    KeInitializeDpc(&stru_140E64DF0, AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140E64EB0, 0LL, 0x1Eu, 0, &stru_140E64DF0);
  }
  return result;
}
