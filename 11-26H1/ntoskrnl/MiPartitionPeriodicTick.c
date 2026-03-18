/*
 * XREFs of MiPartitionPeriodicTick @ 0x1402A703C
 * Callers:
 *     KeBalanceSetManager @ 0x1405F79E0 (KeBalanceSetManager.c)
 *     MiBalanceSetThread @ 0x1406F0500 (MiBalanceSetThread.c)
 * Callees:
 *     MiCheckTrimUnusedPageFileRegions @ 0x1402073C8 (MiCheckTrimUnusedPageFileRegions.c)
 *     MiEmptyDecayClusterTimers @ 0x1402994DC (MiEmptyDecayClusterTimers.c)
 *     MiLogPartitionState @ 0x1402A6280 (MiLogPartitionState.c)
 *     MiPeriodicZeroingNeeded @ 0x1402A64FC (MiPeriodicZeroingNeeded.c)
 *     MiReleaseSystemCacheView @ 0x1402A71F0 (MiReleaseSystemCacheView.c)
 *     MiSignalPartitionTrimThreads @ 0x1402A7450 (MiSignalPartitionTrimThreads.c)
 *     MiFreeUnusedSlabPages @ 0x1402A7510 (MiFreeUnusedSlabPages.c)
 *     MiModifiedWriterPeriodicTick @ 0x1402A7E04 (MiModifiedWriterPeriodicTick.c)
 *     MiScheduleZeroPageThreads @ 0x1402A8034 (MiScheduleZeroPageThreads.c)
 *     MiSignalLargePageRebuild @ 0x1402A8360 (MiSignalLargePageRebuild.c)
 *     MiAdjustCachedStacks @ 0x1402A8504 (MiAdjustCachedStacks.c)
 *     MiLogPeriodicTelemetry @ 0x1402A8770 (MiLogPeriodicTelemetry.c)
 *     MiPruneProcessLargePageCaches @ 0x1402A8FB4 (MiPruneProcessLargePageCaches.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiResumeBackgroundZeroing @ 0x14051F69C (MiResumeBackgroundZeroing.c)
 *     MiEmptyProcessorCommitCache @ 0x1407057E8 (MiEmptyProcessorCommitCache.c)
 */

__int64 __fastcall MiPartitionPeriodicTick(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r14
  unsigned int v5; // eax
  int v6; // eax

  v2 = 0;
  if ( stru_140E36558.FirstArgument
    && *(_DWORD *)stru_140E36558.FirstArgument
    && (*((_DWORD *)stru_140E36558.FirstArgument + 4) & 0x800LL) != 0
    && (*((_QWORD *)stru_140E36558.FirstArgument + 3) & 0x800LL) == *((_QWORD *)stru_140E36558.FirstArgument + 3) )
  {
    MiLogPartitionState(*((_QWORD *)stru_140E36558.FirstArgument + 3), a1);
  }
  MiSignalPartitionTrimThreads(a1);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v3 + 56320LL * (unsigned __int16)KeNumberNodes;
  while ( v3 < v4 )
  {
    if ( !*(_BYTE *)(v3 + 14216) )
    {
      v5 = MiPeriodicZeroingNeeded(v3);
      MiResumeBackgroundZeroing(v3, v5, 0LL);
    }
    v3 += 56320LL;
  }
  MiEmptyDecayClusterTimers(a1);
  MiFreeUnusedSlabPages(a1);
  MiPruneProcessLargePageCaches(a1, 1LL);
  MiReleaseSystemCacheView(a1, 0LL);
  v6 = *(_DWORD *)(a1 + 17296);
  if ( *(_QWORD *)(a1 + 23104) >= *(_QWORD *)(a1 + 17256) )
  {
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 17296) = 1;
      MiEmptyProcessorCommitCache(a1);
      v2 = 3;
    }
  }
  else if ( v6 )
  {
    *(_DWORD *)(a1 + 17296) = 0;
  }
  MiAdjustCachedStacks(a1, v2);
  MiSignalLargePageRebuild(a1);
  MiScheduleZeroPageThreads(a1);
  MiCheckTrimUnusedPageFileRegions((_QWORD *)a1);
  MiModifiedWriterPeriodicTick(a1);
  if ( (++*(_DWORD *)(a1 + 2856) & 0x1F) == 0 )
    KeSetEvent((PRKEVENT)(a1 + 2832), 0, 0);
  KeSetEvent((PRKEVENT)(a1 + 160), 0, 0);
  return MiLogPeriodicTelemetry(a1);
}
