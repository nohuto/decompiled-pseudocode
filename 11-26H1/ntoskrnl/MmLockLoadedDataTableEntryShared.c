/*
 * XREFs of MmLockLoadedDataTableEntryShared @ 0x1404D2978
 * Callers:
 *     ExpQuerySingleModuleInformation @ 0x14077DB50 (ExpQuerySingleModuleInformation.c)
 *     EtwpProviderArrivalCallback @ 0x140917EA4 (EtwpProviderArrivalCallback.c)
 *     RtlPcToFilePath @ 0x140B129A0 (RtlPcToFilePath.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x140701E40 (MiLockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmLockLoadedDataTableEntryShared(__int64 a1)
{
  return MiLockLoadedDataTableEntry(a1, 0LL);
}
