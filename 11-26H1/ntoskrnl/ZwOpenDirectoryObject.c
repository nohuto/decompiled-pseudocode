/*
 * XREFs of ZwOpenDirectoryObject @ 0x140723EF0
 * Callers:
 *     DifZwOpenDirectoryObjectWrapper @ 0x1406AB370 (DifZwOpenDirectoryObjectWrapper.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1407B5428 (PiDrvDbEnumDriverStoreNodes.c)
 *     PiDrvDbRegisterNode @ 0x1407B6B90 (PiDrvDbRegisterNode.c)
 *     PiDrvDbUnregisterNode @ 0x1407B8420 (PiDrvDbUnregisterNode.c)
 *     ObpInitializeRootNamespace @ 0x1407C2F9C (ObpInitializeRootNamespace.c)
 *     ExpFindArcName @ 0x14083B5E0 (ExpFindArcName.c)
 *     SyspartEnumerateDisks @ 0x140894798 (SyspartEnumerateDisks.c)
 *     ObCreateSiloRootDirectory @ 0x1408A6F94 (ObCreateSiloRootDirectory.c)
 *     IopGetLegacyVetoListDrivers @ 0x14094522C (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B231E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmGetSystemDriverList @ 0x140D04720 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle, *(_QWORD *)&DesiredAccess);
}
