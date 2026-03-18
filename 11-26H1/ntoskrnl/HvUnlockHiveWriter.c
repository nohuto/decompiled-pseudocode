/*
 * XREFs of HvUnlockHiveWriter @ 0x1408DAF14
 * Callers:
 *     HvIsRangeDirty @ 0x14077B624 (HvIsRangeDirty.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     CmpRefreshHive @ 0x14084DD4C (CmpRefreshHive.c)
 *     CmThawRegistry @ 0x1408571F0 (CmThawRegistry.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x14085C268 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpTransMgrPrepare @ 0x1408AEE6C (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1408AF3A0 (CmpTransMgrSyncHive.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmpTrimHive @ 0x1408B781C (CmpTrimHive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D0EE0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     CmpAddToLeaf @ 0x1408D171C (CmpAddToLeaf.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     CmpCheckValueList @ 0x1408D96A0 (CmpCheckValueList.c)
 *     HvMarkCellDirty @ 0x1408DB6D0 (HvMarkCellDirty.c)
 *     HvAllocateCell @ 0x1408DB7FC (HvAllocateCell.c)
 *     HvpDoAllocateCell @ 0x1408DBB30 (HvpDoAllocateCell.c)
 *     CmpMarkEntireIndexDirty @ 0x140A2F40C (CmpMarkEntireIndexDirty.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 *     HvFoldBackDirtyData @ 0x140AB20F0 (HvFoldBackDirtyData.c)
 *     CmpDoLocalizeNextHive @ 0x140AD63C0 (CmpDoLocalizeNextHive.c)
 *     CmFreezeRegistry @ 0x140AE3390 (CmFreezeRegistry.c)
 *     CmpReorganizeHive @ 0x140AE35CC (CmpReorganizeHive.c)
 *     CmpCreateHiveRootCell @ 0x140B4B93C (CmpCreateHiveRootCell.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall HvUnlockHiveWriter(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 + 80;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(v1);
}
