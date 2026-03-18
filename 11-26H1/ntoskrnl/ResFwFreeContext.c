/*
 * XREFs of ResFwFreeContext @ 0x140C528B8
 * Callers:
 *     BgFreeContext @ 0x140C4F9A8 (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x1403454A0 (MmFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     LogFwReport @ 0x140C4F030 (LogFwReport.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140C4F3CC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpFwReservePoolSwap @ 0x140C50BC0 (BgpFwReservePoolSwap.c)
 *     ResFwpPageOutBackground @ 0x140C50FE4 (ResFwpPageOutBackground.c)
 *     AnFwFadeCompletion @ 0x140C52980 (AnFwFadeCompletion.c)
 *     BgpTxtCacheDestroy @ 0x140C52AAC (BgpTxtCacheDestroy.c)
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
    gLoadedDiffHivesLock.NpxState = (unsigned __int64)WheapPfaLock.SavedApcState.Process;
    gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Blink;
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
