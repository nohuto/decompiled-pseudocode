/*
 * XREFs of HvUnlockHiveWriter @ 0x1408E14D4
 * Callers:
 *     HvIsRangeDirty @ 0x14077E264 (HvIsRangeDirty.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     CmThawRegistry @ 0x14085D580 (CmThawRegistry.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140862558 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpTransMgrPrepare @ 0x1408B52AC (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1408B57AC (CmpTransMgrSyncHive.c)
 *     CmpDoLocalizeNextHive @ 0x1408B76E0 (CmpDoLocalizeNextHive.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     CmpTrimHive @ 0x1408BDDEC (CmpTrimHive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D74A0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     CmpAddToLeaf @ 0x1408D7CDC (CmpAddToLeaf.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     CmpCheckValueList @ 0x1408DFC60 (CmpCheckValueList.c)
 *     HvMarkCellDirty @ 0x1408E1C90 (HvMarkCellDirty.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     HvpDoAllocateCell @ 0x1408E20F0 (HvpDoAllocateCell.c)
 *     CmpMarkEntireIndexDirty @ 0x140A41298 (CmpMarkEntireIndexDirty.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 *     HvFoldBackDirtyData @ 0x140AAFDC4 (HvFoldBackDirtyData.c)
 *     CmFreezeRegistry @ 0x140AE0F10 (CmFreezeRegistry.c)
 *     CmpReorganizeHive @ 0x140AE10D4 (CmpReorganizeHive.c)
 *     CmpCreateHiveRootCell @ 0x140B4D6CC (CmpCreateHiveRootCell.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall HvUnlockHiveWriter(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 + 80;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(v1);
}
