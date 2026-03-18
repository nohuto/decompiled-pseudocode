/*
 * XREFs of VrpFindDiffHiveEntryForMountPoint @ 0x140979D3C
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x140979448 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     VrpUnlockDiffHiveTable @ 0x140979A98 (VrpUnlockDiffHiveTable.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140979AFC (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpLockDiffHiveTableShared @ 0x140979D8C (VrpLockDiffHiveTableShared.c)
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
