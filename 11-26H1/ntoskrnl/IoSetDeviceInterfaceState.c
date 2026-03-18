/*
 * XREFs of IoSetDeviceInterfaceState @ 0x140AF9840
 * Callers:
 *     DifIoSetDeviceInterfaceStateWrapper @ 0x14065E6C0 (DifIoSetDeviceInterfaceStateWrapper.c)
 *     PnpDisableDeviceInterfaces @ 0x140A8ABF0 (PnpDisableDeviceInterfaces.c)
 *     PiSwDeviceInterfaceSetState @ 0x140AF9604 (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140AF971C (PiSwDeviceInterfacesUpdateState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     IopProcessSetInterfaceState @ 0x1409D82B0 (IopProcessSetInterfaceState.c)
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
