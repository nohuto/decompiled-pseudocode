/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x14069CA40
 * Callers:
 *     DifZwCreateSymbolicLinkObjectWrapper @ 0x140632400 (DifZwCreateSymbolicLinkObjectWrapper.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x140707EB0 (IoCreateUnprotectedSymbolicLink.c)
 *     PiDrvDbRegisterNode @ 0x14072C178 (PiDrvDbRegisterNode.c)
 *     ObpCreateDosDevicesDirectory @ 0x14073773C (ObpCreateDosDevicesDirectory.c)
 *     ObpInitializeRootNamespace @ 0x140737C88 (ObpInitializeRootNamespace.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140763928 (PspSiloInitializeSystemRootSymlink.c)
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 *     SeGetTokenDeviceMap @ 0x14097F108 (SeGetTokenDeviceMap.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140C116BC (PiCreateDriverDataDirectoryRoot.c)
 *     CmpInitializeDriverStores @ 0x140C35F30 (CmpInitializeDriverStores.c)
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
