/*
 * XREFs of MmLockLoadedDataTableEntryShared @ 0x1404D9298
 * Callers:
 *     ExpQuerySingleModuleInformation @ 0x14077AC20 (ExpQuerySingleModuleInformation.c)
 *     EtwpProviderArrivalCallback @ 0x14093C304 (EtwpProviderArrivalCallback.c)
 *     RtlPcToFilePath @ 0x1409FA0A0 (RtlPcToFilePath.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x1406FD170 (MiLockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmLockLoadedDataTableEntryShared(__int64 a1)
{
  return MiLockLoadedDataTableEntry(a1, 0LL);
}
