/*
 * XREFs of MiLockLoadedDataTableEntry @ 0x140701E40
 * Callers:
 *     LdrpKrnGetDataTableEntry @ 0x1404A4708 (LdrpKrnGetDataTableEntry.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404A53D4 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmLockLoadedDataTableEntry @ 0x1404BD460 (MmLockLoadedDataTableEntry.c)
 *     MmLockLoadedDataTableEntryShared @ 0x1404D2978 (MmLockLoadedDataTableEntryShared.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14050DCC0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MmWriteSystemImageTracepoint @ 0x140701C34 (MmWriteSystemImageTracepoint.c)
 *     MmDiscardDriverSection @ 0x140D07620 (MmDiscardDriverSection.c)
 * Callees:
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 *     MmReleaseLoadLockShared @ 0x14049E268 (MmReleaseLoadLockShared.c)
 *     MiAcquireLoadLock @ 0x1404A507C (MiAcquireLoadLock.c)
 *     MiLockLoaderEntry @ 0x1405208A8 (MiLockLoaderEntry.c)
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
