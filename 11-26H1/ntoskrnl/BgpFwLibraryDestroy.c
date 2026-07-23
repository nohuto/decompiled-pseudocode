/*
 * XREFs of BgpFwLibraryDestroy @ 0x140C569EC
 * Callers:
 *     BgLibraryDestroy @ 0x140C55A68 (BgLibraryDestroy.c)
 *     BgpFwLibraryInitialize @ 0x140C5A5B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwInitializeReservePool @ 0x140C569A4 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x140C56AAC (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x140C57B24 (BgpFoDestroy.c)
 *     ResFwBackgroundTransition @ 0x140C5AF20 (ResFwBackgroundTransition.c)
 */

__int64 BgpFwLibraryDestroy()
{
  __int64 result; // rax

  BgpFoDestroy(0LL);
  if ( gLoadedDiffHivesLock.AffinityVersion )
  {
    BgpFoDestroy(gLoadedDiffHivesLock.AffinityVersion);
    if ( *(_QWORD *)gLoadedDiffHivesLock.AffinityVersion
      && (*(_DWORD *)(gLoadedDiffHivesLock.AffinityVersion + 12) & 1) == 0 )
    {
      BgpFwFreeMemory(*(_QWORD *)gLoadedDiffHivesLock.AffinityVersion);
    }
    BgpFwFreeMemory(gLoadedDiffHivesLock.AffinityVersion);
    gLoadedDiffHivesLock.AffinityVersion = 0LL;
  }
  if ( gLoadedDiffHivesLock.WaitBlock[2].Object )
  {
    BgpFwFreeMemory((__int64)gLoadedDiffHivesLock.WaitBlock[2].Object);
    gLoadedDiffHivesLock.WaitBlock[2].Object = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    gLoadedDiffHivesLock.Affinity = 0LL;
    gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink = 0LL;
    gLoadedDiffHivesLock.NpxState = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2LL);
  result = 0LL;
  *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] = 0;
  return result;
}
