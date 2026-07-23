/*
 * XREFs of BgpFwLibraryDisable @ 0x140C56AAC
 * Callers:
 *     BgpFwLibraryDestroy @ 0x140C569EC (BgpFwLibraryDestroy.c)
 *     BgLibraryDisable @ 0x140C5AEE4 (BgLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     LogFwReport @ 0x140C55030 (LogFwReport.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140C571F4 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140C57380 (AnFwDisplayProgressIndicator.c)
 *     BgpFoDestroy @ 0x140C57B24 (BgpFoDestroy.c)
 *     BgpTxtDestroyRegion @ 0x140C57F4C (BgpTxtDestroyRegion.c)
 *     AnFwFadeCompletion @ 0x140C58980 (AnFwFadeCompletion.c)
 *     ResFwBackgroundTransition @ 0x140C5AF20 (ResFwBackgroundTransition.c)
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
      if ( WheapPfaLock.SchedulerApc.SystemArgument1 == gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink )
        WheapPfaLock.SchedulerApc.SystemArgument1 = 0LL;
      gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( gLoadedDiffHivesLock.NpxState )
    {
      BgpTxtDestroyRegion(gLoadedDiffHivesLock.NpxState);
      if ( WheapPfaLock.SchedulerApc.SystemArgument2 == (PVOID)gLoadedDiffHivesLock.NpxState )
        WheapPfaLock.SchedulerApc.SystemArgument2 = 0LL;
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
