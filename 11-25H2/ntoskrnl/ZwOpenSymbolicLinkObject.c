/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x14069D840
 * Callers:
 *     DifZwOpenSymbolicLinkObjectWrapper @ 0x140636A00 (DifZwOpenSymbolicLinkObjectWrapper.c)
 *     IoIsValidNameGraftingBuffer @ 0x1407096D0 (IoIsValidNameGraftingBuffer.c)
 *     PiDrvDbUnregisterNode @ 0x14072DA18 (PiDrvDbUnregisterNode.c)
 *     SiOpenArcNameObject @ 0x140807138 (SiOpenArcNameObject.c)
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409B01F8 (IopQueryRegistryKeySystemPath.c)
 *     SiTranslateSymbolicLink @ 0x140A24494 (SiTranslateSymbolicLink.c)
 *     ExpTranslateSymbolicLink @ 0x140A61C44 (ExpTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7E994 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiTranslateSymbolicLink @ 0x140A801EC (BiTranslateSymbolicLink.c)
 *     IoDeleteSymbolicLink @ 0x140A8B1B0 (IoDeleteSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x140C0C380 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
