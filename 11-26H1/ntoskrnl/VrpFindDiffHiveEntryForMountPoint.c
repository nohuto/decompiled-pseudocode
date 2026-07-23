/*
 * XREFs of VrpFindDiffHiveEntryForMountPoint @ 0x14093BD4C
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x14093B458 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     VrpUnlockDiffHiveTable @ 0x14093BAA8 (VrpUnlockDiffHiveTable.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14093BB0C (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpLockDiffHiveTableShared @ 0x14093BD9C (VrpLockDiffHiveTableShared.c)
 */

char *__fastcall VrpFindDiffHiveEntryForMountPoint(PCUNICODE_STRING String1)
{
  char *DiffHiveEntryForMountPointWithLock; // rax
  char *v3; // rbx

  VrpLockDiffHiveTableShared();
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  v3 = DiffHiveEntryForMountPointWithLock;
  if ( DiffHiveEntryForMountPointWithLock
    && _InterlockedIncrement64((volatile signed __int64 *)DiffHiveEntryForMountPointWithLock + 2) <= 1 )
  {
    __fastfail(0xEu);
  }
  VrpUnlockDiffHiveTable();
  return v3;
}
