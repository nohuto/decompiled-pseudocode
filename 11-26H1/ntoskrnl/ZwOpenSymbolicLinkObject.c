/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x140725B10
 * Callers:
 *     DifZwOpenSymbolicLinkObjectWrapper @ 0x1406AD920 (DifZwOpenSymbolicLinkObjectWrapper.c)
 *     IoIsValidNameGraftingBuffer @ 0x140797740 (IoIsValidNameGraftingBuffer.c)
 *     PiDrvDbUnregisterNode @ 0x1407B8420 (PiDrvDbUnregisterNode.c)
 *     SiTranslateSymbolicLink @ 0x140894C18 (SiTranslateSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x140895AFC (SiOpenArcNameObject.c)
 *     IopProcessSetInterfaceState @ 0x1409D82B0 (IopProcessSetInterfaceState.c)
 *     IopQueryRegistryKeySystemPath @ 0x140A27D00 (IopQueryRegistryKeySystemPath.c)
 *     ExpTranslateSymbolicLink @ 0x140A95510 (ExpTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x140B220E4 (BiTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B231E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x140B39700 (IoDeleteSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x140CBE34C (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, *(_QWORD *)&DesiredAccess);
}
