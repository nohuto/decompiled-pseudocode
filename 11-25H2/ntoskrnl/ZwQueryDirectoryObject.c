/*
 * XREFs of ZwQueryDirectoryObject @ 0x14069DB00
 * Callers:
 *     DifZwQueryDirectoryObjectWrapper @ 0x1406387E0 (DifZwQueryDirectoryObjectWrapper.c)
 *     BcdEnumerateDisks @ 0x1406E95D8 (BcdEnumerateDisks.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14072AA18 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1407AC74C (ExpFindArcName.c)
 *     BiGetNtPartitionPath @ 0x140804030 (BiGetNtPartitionPath.c)
 *     SiGetEfiSystemDevice @ 0x140806448 (SiGetEfiSystemDevice.c)
 *     IopGetLegacyVetoListDrivers @ 0x140914FDC (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7E994 (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmGetSystemDriverList @ 0x140C51914 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
