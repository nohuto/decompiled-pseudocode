/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x140724CF0
 * Callers:
 *     DifZwCreateSymbolicLinkObjectWrapper @ 0x1406A1EE0 (DifZwCreateSymbolicLinkObjectWrapper.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x140796360 (IoCreateUnprotectedSymbolicLink.c)
 *     PiDrvDbRegisterNode @ 0x1407B6B90 (PiDrvDbRegisterNode.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407C2A4C (ObpCreateDosDevicesDirectory.c)
 *     ObpInitializeRootNamespace @ 0x1407C2F9C (ObpInitializeRootNamespace.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407EF710 (PspSiloInitializeSystemRootSymlink.c)
 *     IopProcessSetInterfaceState @ 0x1409D82B0 (IopProcessSetInterfaceState.c)
 *     SeGetTokenDeviceMap @ 0x140A18788 (SeGetTokenDeviceMap.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140CC3BBC (PiCreateDriverDataDirectoryRoot.c)
 *     CmpInitializeDriverStores @ 0x140CEAB70 (CmpInitializeDriverStores.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateSymbolicLinkObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
