/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x14046EB90
 * Callers:
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x140B57D54 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x14046ECD0 (CmpArmLazyWriter.c)
 *     CmpAdjustFileCFSafety @ 0x1404EAA58 (CmpAdjustFileCFSafety.c)
 *     HvMarkHiveWithNoSectionExtend @ 0x14077EB20 (HvMarkHiveWithNoSectionExtend.c)
 *     CmpVolumeContextCanHiveSectionBeExtended @ 0x140ABEB24 (CmpVolumeContextCanHiveSectionBeExtended.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140ABEB70 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvViewMapContainsLockedPages @ 0x140B00124 (HvViewMapContainsLockedPages.c)
 *     HvUnlockHiveFilePages @ 0x140B31A00 (HvUnlockHiveFilePages.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpRecheckHiveVolumePolicy(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ecx
  bool v5; // cf
  __int64 v6; // rcx
  int v7; // ebx

  CmpLockRegistry();
  HvLockHiveFlusherExclusive(a1);
  v2 = *(_QWORD *)(a1 + 4800);
  if ( !v2 )
    goto LABEL_8;
  if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(a1 + 4800))
    || (v3 = *(_DWORD *)(a1 + 4120), (v3 & 0x20) != 0) )
  {
    if ( (unsigned __int8)HvViewMapContainsLockedPages(a1 + 224) )
      CmpArmLazyWriter(2LL, 0LL, 0LL);
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(a1 + 160) & 0x8000) == 0 )
  {
    v5 = (v3 & 0x10000) != 0;
    v6 = a1;
    if ( v5 )
    {
LABEL_11:
      HvUnlockHiveFilePages(v6);
      goto LABEL_6;
    }
    HvUnlockHiveFlusherExclusive(a1);
    CmpUnlockRegistry();
    v7 = CmpAdjustFileCFSafety(*(HANDLE *)(a1 + 1544));
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(a1);
    if ( v7 >= 0 )
    {
      *(_DWORD *)(a1 + 4120) |= 0x10000u;
      v6 = a1;
      goto LABEL_11;
    }
  }
LABEL_6:
  if ( !(unsigned __int8)CmpVolumeContextCanHiveSectionBeExtended(v2) )
    HvMarkHiveWithNoSectionExtend(a1);
LABEL_8:
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry();
}
