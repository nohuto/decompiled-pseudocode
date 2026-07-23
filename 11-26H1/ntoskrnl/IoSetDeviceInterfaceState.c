/*
 * XREFs of IoSetDeviceInterfaceState @ 0x1409AA7B0
 * Callers:
 *     DifIoSetDeviceInterfaceStateWrapper @ 0x1406622A0 (DifIoSetDeviceInterfaceStateWrapper.c)
 *     PnpDisableDeviceInterfaces @ 0x1409B7A10 (PnpDisableDeviceInterfaces.c)
 *     PiSwDeviceInterfaceSetState @ 0x140B1284C (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140B14B14 (PiSwDeviceInterfacesUpdateState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 */

NTSTATUS __stdcall IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v5 = IopProcessSetInterfaceState(&SymbolicLinkName->Length, Enable, 1);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v5 < 0 )
    return Enable != 0 ? v5 : 0;
  return v5;
}
