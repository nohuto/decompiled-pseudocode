/*
 * XREFs of ZwOpenDirectoryObject @ 0x140728AC0
 * Callers:
 *     DifZwOpenDirectoryObjectWrapper @ 0x1406AEF50 (DifZwOpenDirectoryObjectWrapper.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1407B8488 (PiDrvDbEnumDriverStoreNodes.c)
 *     PiDrvDbRegisterNode @ 0x1407B9BF0 (PiDrvDbRegisterNode.c)
 *     PiDrvDbUnregisterNode @ 0x1407BB480 (PiDrvDbUnregisterNode.c)
 *     ObpInitializeRootNamespace @ 0x1407C5FFC (ObpInitializeRootNamespace.c)
 *     ExpFindArcName @ 0x140841820 (ExpFindArcName.c)
 *     SyspartEnumerateDisks @ 0x14089AB98 (SyspartEnumerateDisks.c)
 *     ObCreateSiloRootDirectory @ 0x1408AD404 (ObCreateSiloRootDirectory.c)
 *     IopGetLegacyVetoListDrivers @ 0x1409C0B9C (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B255E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmGetSystemDriverList @ 0x140D0A9F0 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
