/*
 * XREFs of MmUnlockLoadedDataTableEntryShared @ 0x140701EA0
 * Callers:
 *     LdrpKrnGetDataTableEntry @ 0x1404A4708 (LdrpKrnGetDataTableEntry.c)
 *     ExpQuerySingleModuleInformation @ 0x14077DB50 (ExpQuerySingleModuleInformation.c)
 *     EtwpProviderArrivalCallback @ 0x140917EA4 (EtwpProviderArrivalCallback.c)
 *     RtlPcToFilePath @ 0x140B129A0 (RtlPcToFilePath.c)
 * Callees:
 *     MiUnlockLoadedDataTableEntry @ 0x14049E228 (MiUnlockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmUnlockLoadedDataTableEntryShared(__int64 a1)
{
  return MiUnlockLoadedDataTableEntry(a1, 0);
}
