/*
 * XREFs of ZwQueryDirectoryObject @ 0x14072A9A0
 * Callers:
 *     DifZwQueryDirectoryObjectWrapper @ 0x1406B40C0 (DifZwQueryDirectoryObjectWrapper.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1407B8488 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x140841820 (ExpFindArcName.c)
 *     SyspartEnumerateDisks @ 0x14089AB98 (SyspartEnumerateDisks.c)
 *     IopGetLegacyVetoListDrivers @ 0x1409C0B9C (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B255E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmGetSystemDriverList @ 0x140D0A9F0 (CmGetSystemDriverList.c)
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
