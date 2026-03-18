/*
 * XREFs of VrpFindDiffHiveEntryForMountPoint @ 0x140947338
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x140947228 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140847024 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpUnlockDiffHiveTable @ 0x14094B5B8 (VrpUnlockDiffHiveTable.c)
 *     VrpLockDiffHiveTableShared @ 0x14094B61C (VrpLockDiffHiveTableShared.c)
 */

__int64 __fastcall VrpFindDiffHiveEntryForMountPoint(PCUNICODE_STRING String1)
{
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  __int64 v3; // rbx

  VrpLockDiffHiveTableShared();
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  v3 = DiffHiveEntryForMountPointWithLock;
  if ( DiffHiveEntryForMountPointWithLock
    && _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
  {
    __fastfail(0xEu);
  }
  VrpUnlockDiffHiveTable();
  return v3;
}
