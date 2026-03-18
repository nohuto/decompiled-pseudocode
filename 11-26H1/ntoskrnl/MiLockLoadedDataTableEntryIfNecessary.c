/*
 * XREFs of MiLockLoadedDataTableEntryIfNecessary @ 0x1404ABD44
 * Callers:
 *     MmProtectDriverSection @ 0x1406E6130 (MmProtectDriverSection.c)
 *     FsRtlSetDriverBacking @ 0x14078FF20 (FsRtlSetDriverBacking.c)
 *     MmGetModuleRoutineAddress @ 0x140864A10 (MmGetModuleRoutineAddress.c)
 *     MmLockPagableSectionByHandle @ 0x140A9C420 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x140ABB180 (MmLockPagableDataSection.c)
 *     MmResetDriverPaging @ 0x140AC9400 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140AC9AA0 (MmPageEntireDriver.c)
 *     MmChangeImageProtection @ 0x140AD5D10 (MmChangeImageProtection.c)
 *     MmIsDriverVerifyingByAddress @ 0x140C43F40 (MmIsDriverVerifyingByAddress.c)
 * Callees:
 *     MmFindDataTableEntryByAddress @ 0x140366EA0 (MmFindDataTableEntryByAddress.c)
 *     MiLockLoadedDataTableEntry @ 0x1406FD170 (MiLockLoadedDataTableEntry.c)
 */

struct _LIST_ENTRY *__fastcall MiLockLoadedDataTableEntryIfNecessary(unsigned __int64 a1, _DWORD *a2)
{
  if ( *(struct _KTHREAD **)&stru_140E2D150.SavedApcStateFill[40] == KeGetCurrentThread() )
  {
    *a2 = 0;
    return MmFindDataTableEntryByAddress(a1);
  }
  else
  {
    *a2 = 1;
    return (struct _LIST_ENTRY *)MiLockLoadedDataTableEntry(a1, 1LL);
  }
}
