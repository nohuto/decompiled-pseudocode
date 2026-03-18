/*
 * XREFs of AnFwpDisableProgressTimer @ 0x140C5332C
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140C51380 (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140C51580 (AnFwpBackgroundUpdateTimer.c)
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
 * Callees:
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     BgpTxtCacheDestroy @ 0x140C52AAC (BgpTxtCacheDestroy.c)
 */

void AnFwpDisableProgressTimer()
{
  bool v0; // cl

  if ( WheapPfaLock.SchedulerApc.SpareByte0 )
  {
    v0 = 0;
    if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x100000) != 0 )
      v0 = (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x1000) != 0;
    WheapPfaLock.SchedulerApc.SpareByte0 = 0;
    if ( (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xC00) != 0xC00 && !v0 )
      KeCancelTimer(&stru_140E64EB0);
    BgpTxtCacheDestroy();
  }
}
