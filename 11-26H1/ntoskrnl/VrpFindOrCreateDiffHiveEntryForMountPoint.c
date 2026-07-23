/*
 * XREFs of VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14093B92C
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14093B56C (VrpLoadDifferencingHive.c)
 * Callees:
 *     VrpUnlockDiffHiveTable @ 0x14093BAA8 (VrpUnlockDiffHiveTable.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14093BB0C (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpLockDiffHiveTableShared @ 0x14093BD9C (VrpLockDiffHiveTableShared.c)
 *     VrpLockDiffHiveTableExclusive @ 0x14093BE54 (VrpLockDiffHiveTableExclusive.c)
 *     VrpAllocateDiffHiveEntry @ 0x14093BECC (VrpAllocateDiffHiveEntry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpFindOrCreateDiffHiveEntryForMountPoint(PCUNICODE_STRING String1, __int64 a2, __int64 *a3)
{
  _QWORD *DiffHiveEntry; // rdi
  __int64 DiffHiveEntryForMountPointWithLock; // r9
  unsigned int v8; // ebx
  _QWORD *SListFaultAddress; // rcx
  __int64 v11; // rdx
  __int64 v12; // [rsp+48h] [rbp+20h]

  DiffHiveEntry = 0LL;
  VrpLockDiffHiveTableShared();
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
    goto LABEL_4;
  VrpUnlockDiffHiveTable();
  DiffHiveEntry = (_QWORD *)VrpAllocateDiffHiveEntry(String1, a2);
  if ( !DiffHiveEntry )
    return (unsigned int)-1073741670;
  VrpLockDiffHiveTableExclusive();
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
  {
LABEL_4:
    if ( _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
      __fastfail(0xEu);
  }
  else
  {
    DiffHiveEntryForMountPointWithLock = (__int64)DiffHiveEntry;
    v12 = DiffHiveEntry[1] & (-1LL << (BYTE4(gLoadedDiffHivesLock.Header.WaitListHead.Blink) & 0x1F));
    SListFaultAddress = gLoadedDiffHivesLock.SListFaultAddress;
    v11 = ((HIDWORD(gLoadedDiffHivesLock.Header.WaitListHead.Blink) >> 5) - 1) & (HIBYTE(v12)
                                                                                + 37
                                                                                * (BYTE6(v12)
                                                                                 + 37
                                                                                 * (BYTE5(v12)
                                                                                  + 37
                                                                                  * (BYTE4(v12)
                                                                                   + 37
                                                                                   * (BYTE3(v12)
                                                                                    + 374026047
                                                                                    + 37
                                                                                    * (BYTE2(v12)
                                                                                     + 37
                                                                                     * (BYTE1(v12)
                                                                                      + 37 * (unsigned __int8)v12)))))));
    *DiffHiveEntry = *((_QWORD *)gLoadedDiffHivesLock.SListFaultAddress + v11);
    SListFaultAddress[v11] = DiffHiveEntry;
    ++LODWORD(gLoadedDiffHivesLock.Header.WaitListHead.Blink);
    DiffHiveEntry = 0LL;
  }
  v8 = 0;
  *a3 = DiffHiveEntryForMountPointWithLock;
  VrpUnlockDiffHiveTable();
  if ( DiffHiveEntry )
    ExFreePoolWithTag(DiffHiveEntry, 0x67655256u);
  return v8;
}
