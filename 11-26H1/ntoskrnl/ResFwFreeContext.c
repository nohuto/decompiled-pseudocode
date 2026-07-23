/*
 * XREFs of ResFwFreeContext @ 0x140C588B8
 * Callers:
 *     BgFreeContext @ 0x140C559A8 (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140347520 (MmFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     LogFwReport @ 0x140C55030 (LogFwReport.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140C553CC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpFwReservePoolSwap @ 0x140C56BC0 (BgpFwReservePoolSwap.c)
 *     ResFwpPageOutBackground @ 0x140C56FE4 (ResFwpPageOutBackground.c)
 *     AnFwFadeCompletion @ 0x140C58980 (AnFwFadeCompletion.c)
 *     BgpTxtCacheDestroy @ 0x140C58AAC (BgpTxtCacheDestroy.c)
 */

void __fastcall ResFwFreeContext(__int64 a1)
{
  struct _MDL *v2; // rcx

  if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x100000) != 0 )
  {
    BgpTxtCacheDestroy();
    AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    LogFwReport();
    if ( *(_QWORD *)(a1 + 16) )
    {
      BgpFwReservePoolSwap(1, 0LL, 0, 0LL);
      MmFreePagesFromMdl(*(PMDL *)(a1 + 8));
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
    *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] &= 0xFFEFF7FD;
    gLoadedDiffHivesLock.NpxState = (unsigned __int64)WheapPfaLock.SchedulerApc.SystemArgument2;
    gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)WheapPfaLock.SchedulerApc.SystemArgument1;
    gLoadedDiffHivesLock.WaitBlock[0].WaitListEntry.Flink = 0LL;
    gLoadedDiffHivesLock.Timer.TimerListEntry = 0LL;
    *(_OWORD *)&gLoadedDiffHivesLock.Timer.Dpc = 0LL;
    ResFwpPageOutBackground();
  }
  else
  {
    v2 = *(struct _MDL **)(a1 + 8);
    if ( v2 )
    {
      MmFreePagesFromMdl(v2);
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
  }
}
