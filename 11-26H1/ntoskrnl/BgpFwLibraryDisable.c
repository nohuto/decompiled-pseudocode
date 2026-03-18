/*
 * XREFs of BgpFwLibraryDisable @ 0x140C50AAC
 * Callers:
 *     BgpFwLibraryDestroy @ 0x140C509EC (BgpFwLibraryDestroy.c)
 *     BgLibraryDisable @ 0x140C54EE4 (BgLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140355E00 (BgpFwFreeMemory.c)
 *     LogFwReport @ 0x140C4F030 (LogFwReport.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140C511F4 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140C51380 (AnFwDisplayProgressIndicator.c)
 *     BgpFoDestroy @ 0x140C51B24 (BgpFoDestroy.c)
 *     BgpTxtDestroyRegion @ 0x140C51F4C (BgpTxtDestroyRegion.c)
 *     AnFwFadeCompletion @ 0x140C52980 (AnFwFadeCompletion.c)
 *     ResFwBackgroundTransition @ 0x140C54F20 (ResFwBackgroundTransition.c)
 */

__int64 BgpFwLibraryDisable()
{
  __int64 result; // rax

  result = *(unsigned int *)&gLoadedDiffHivesLock.WaitBlockFill11[80];
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 2) != 0 )
  {
    AnFwDisplayBackgroundUpdate(0LL);
    AnFwFadeCompletion();
    if ( gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink )
    {
      BgpTxtDestroyRegion(gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink);
      if ( WheapPfaLock.SavedApcState.ApcListHead[1].Blink == gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink )
        WheapPfaLock.SavedApcState.ApcListHead[1].Blink = 0LL;
      gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( gLoadedDiffHivesLock.NpxState )
    {
      BgpTxtDestroyRegion(gLoadedDiffHivesLock.NpxState);
      if ( WheapPfaLock.SavedApcState.Process == (_KPROCESS *)gLoadedDiffHivesLock.NpxState )
        WheapPfaLock.SavedApcState.Process = 0LL;
      gLoadedDiffHivesLock.NpxState = 0LL;
    }
    if ( gLoadedDiffHivesLock.AffinityVersion )
    {
      BgpFoDestroy(gLoadedDiffHivesLock.AffinityVersion);
      if ( *(_QWORD *)gLoadedDiffHivesLock.AffinityVersion )
      {
        if ( (*(_DWORD *)(gLoadedDiffHivesLock.AffinityVersion + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)gLoadedDiffHivesLock.AffinityVersion);
      }
      BgpFwFreeMemory(gLoadedDiffHivesLock.AffinityVersion);
      gLoadedDiffHivesLock.AffinityVersion = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1LL);
    result = 0LL;
    *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] &= ~2u;
    gLoadedDiffHivesLock.Timer.TimerListEntry = 0LL;
    gLoadedDiffHivesLock.WaitBlock[0].WaitListEntry.Flink = 0LL;
    *(_OWORD *)&gLoadedDiffHivesLock.Timer.Dpc = 0LL;
  }
  return result;
}
