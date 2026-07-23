/*
 * XREFs of MiLockLoadedDataTableEntryIfNecessary @ 0x1404A53D4
 * Callers:
 *     MmProtectDriverSection @ 0x1406EADE0 (MmProtectDriverSection.c)
 *     FsRtlSetDriverBacking @ 0x140792A50 (FsRtlSetDriverBacking.c)
 *     MmGetModuleRoutineAddress @ 0x14086ADF0 (MmGetModuleRoutineAddress.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x140ABC640 (MmLockPagableDataSection.c)
 *     MmResetDriverPaging @ 0x140ACB510 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140ACBBB0 (MmPageEntireDriver.c)
 *     MmChangeImageProtection @ 0x140AD2CC0 (MmChangeImageProtection.c)
 *     MmIsDriverVerifyingByAddress @ 0x140C49F50 (MmIsDriverVerifyingByAddress.c)
 * Callees:
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 *     MiLockLoadedDataTableEntry @ 0x140701E40 (MiLockLoadedDataTableEntry.c)
 */

struct _LIST_ENTRY *__fastcall MiLockLoadedDataTableEntryIfNecessary(unsigned __int64 a1, _DWORD *a2)
{
  if ( *(struct _KTHREAD **)&stru_140E2D2D0.SavedApcStateFill[40] == KeGetCurrentThread() )
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
