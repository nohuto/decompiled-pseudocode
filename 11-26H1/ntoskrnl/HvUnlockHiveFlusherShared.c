/*
 * XREFs of HvUnlockHiveFlusherShared @ 0x1408CFFE8
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1404CC980 (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x1406E2950 (CmpCreateTombstone.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpRefreshHive @ 0x14084DD4C (CmpRefreshHive.c)
 *     CmpAssignKeySecurity @ 0x14085AB60 (CmpAssignKeySecurity.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x14085C268 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmpPromoteKey @ 0x1408B0E74 (CmpPromoteKey.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmpTrimHive @ 0x1408B781C (CmpTrimHive.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmQueryMultipleValueKey @ 0x14097EB2C (CmQueryMultipleValueKey.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140AB95FC (CmpUndoDeleteKeyForTrans.c)
 *     CmpDoLocalizeNextHive @ 0x140AD63C0 (CmpDoLocalizeNextHive.c)
 *     CmpReorganizeHive @ 0x140AE35CC (CmpReorganizeHive.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140AE7478 (CmpUpdateHiveRootCellFlags.c)
 *     CmpCreateHiveRootCell @ 0x140B4B93C (CmpCreateHiveRootCell.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 */

void __fastcall HvUnlockHiveFlusherShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 72);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  KeAbPostRelease((unsigned __int64)v1);
}
