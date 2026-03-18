/*
 * XREFs of MiLockLoadedDataTableEntry @ 0x1406FD170
 * Callers:
 *     LdrpKrnGetDataTableEntry @ 0x1404AB078 (LdrpKrnGetDataTableEntry.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404ABD44 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmLockLoadedDataTableEntry @ 0x1404C3C10 (MmLockLoadedDataTableEntry.c)
 *     MmLockLoadedDataTableEntryShared @ 0x1404D9298 (MmLockLoadedDataTableEntryShared.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140514250 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MmWriteSystemImageTracepoint @ 0x1406FCF64 (MmWriteSystemImageTracepoint.c)
 *     MmDiscardDriverSection @ 0x140D01280 (MmDiscardDriverSection.c)
 * Callees:
 *     MmFindDataTableEntryByAddress @ 0x140366EA0 (MmFindDataTableEntryByAddress.c)
 *     MmReleaseLoadLockShared @ 0x1404A4BD8 (MmReleaseLoadLockShared.c)
 *     MiAcquireLoadLock @ 0x1404AB9EC (MiAcquireLoadLock.c)
 *     MiLockLoaderEntry @ 0x14051E298 (MiLockLoaderEntry.c)
 */

struct _LIST_ENTRY *__fastcall MiLockLoadedDataTableEntry(unsigned __int64 a1, int a2)
{
  struct _LIST_ENTRY *DataTableEntryByAddress; // rax
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  int v7; // r11d
  struct _LIST_ENTRY *v8; // rbx

  MiAcquireLoadLock(0);
  DataTableEntryByAddress = MmFindDataTableEntryByAddress(a1);
  v8 = DataTableEntryByAddress;
  if ( DataTableEntryByAddress )
  {
    if ( !v7 )
      MiLockLoaderEntry((__int64)DataTableEntryByAddress, a2 == 0 ? 2 : 0, v5, v6);
    return v8;
  }
  else
  {
    MmReleaseLoadLockShared(0LL);
    return 0LL;
  }
}
