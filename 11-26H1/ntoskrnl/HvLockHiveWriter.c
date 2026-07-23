/*
 * XREFs of HvLockHiveWriter @ 0x1408E1470
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
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall HvLockHiveWriter(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  v4 = (unsigned __int64 *)(a1 + 80);
  v5 = (AutoBoost *)KeAbPreAcquire(a1 + 80, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
