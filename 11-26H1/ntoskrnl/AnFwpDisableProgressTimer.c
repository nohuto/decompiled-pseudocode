/*
 * XREFs of AnFwpDisableProgressTimer @ 0x140C5932C
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140C57380 (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140C57580 (AnFwpBackgroundUpdateTimer.c)
 *     AnFwDisplayFade @ 0x140C58BA0 (AnFwDisplayFade.c)
 * Callees:
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     BgpTxtCacheDestroy @ 0x140C58AAC (BgpTxtCacheDestroy.c)
 */

void AnFwpDisableProgressTimer()
{
  bool v0; // cl

  if ( WheapPfaLock.SchedulerApc.ApcStateIndex )
  {
    v0 = 0;
    if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x100000) != 0 )
      v0 = (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x1000) != 0;
    WheapPfaLock.SchedulerApc.ApcStateIndex = 0;
    if ( (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xC00) != 0xC00 && !v0 )
      KeCancelTimer(&stru_140E650B0);
    BgpTxtCacheDestroy();
  }
}
