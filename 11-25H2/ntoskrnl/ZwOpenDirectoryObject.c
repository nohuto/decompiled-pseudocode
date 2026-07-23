/*
 * XREFs of ZwOpenDirectoryObject @ 0x14069BC40
 * Callers:
 *     DifZwOpenDirectoryObjectWrapper @ 0x140635400 (DifZwOpenDirectoryObjectWrapper.c)
 *     BcdEnumerateDisks @ 0x1406E95D8 (BcdEnumerateDisks.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14072AA18 (PiDrvDbEnumDriverStoreNodes.c)
 *     PiDrvDbRegisterNode @ 0x14072C178 (PiDrvDbRegisterNode.c)
 *     PiDrvDbUnregisterNode @ 0x14072DA18 (PiDrvDbUnregisterNode.c)
 *     ObpInitializeRootNamespace @ 0x140737C88 (ObpInitializeRootNamespace.c)
 *     ExpFindArcName @ 0x1407AC74C (ExpFindArcName.c)
 *     BiGetNtPartitionPath @ 0x140804030 (BiGetNtPartitionPath.c)
 *     SiGetEfiSystemDevice @ 0x140806448 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x14081AE94 (ObCreateSiloRootDirectory.c)
 *     IopGetLegacyVetoListDrivers @ 0x140914FDC (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7E994 (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmGetSystemDriverList @ 0x140C51914 (CmGetSystemDriverList.c)
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
