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

__int64 __fastcall ZwCreateSymbolicLinkObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
