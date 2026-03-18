/*
 * XREFs of MmUnlockLoadedDataTableEntryShared @ 0x1406FD1D0
 * Callers:
 *     LdrpKrnGetDataTableEntry @ 0x1404AB078 (LdrpKrnGetDataTableEntry.c)
 *     ExpQuerySingleModuleInformation @ 0x14077AC20 (ExpQuerySingleModuleInformation.c)
 *     EtwpProviderArrivalCallback @ 0x14093C304 (EtwpProviderArrivalCallback.c)
 *     RtlPcToFilePath @ 0x1409FA0A0 (RtlPcToFilePath.c)
 * Callees:
 *     MiUnlockLoadedDataTableEntry @ 0x1404A4B98 (MiUnlockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmUnlockLoadedDataTableEntryShared(__int64 a1)
{
  return MiUnlockLoadedDataTableEntry(a1, 0);
}
