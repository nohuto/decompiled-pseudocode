/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x1407298C0
 * Callers:
 *     DifZwCreateSymbolicLinkObjectWrapper @ 0x1406A5AC0 (DifZwCreateSymbolicLinkObjectWrapper.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x140798E90 (IoCreateUnprotectedSymbolicLink.c)
 *     PiDrvDbRegisterNode @ 0x1407B9BF0 (PiDrvDbRegisterNode.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407C5AAC (ObpCreateDosDevicesDirectory.c)
 *     ObpInitializeRootNamespace @ 0x1407C5FFC (ObpInitializeRootNamespace.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407F5270 (PspSiloInitializeSystemRootSymlink.c)
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 *     SeGetTokenDeviceMap @ 0x140A21DB8 (SeGetTokenDeviceMap.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140CC9C90 (PiCreateDriverDataDirectoryRoot.c)
 *     CmpInitializeDriverStores @ 0x140CF0F10 (CmpInitializeDriverStores.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LinkTarget)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
