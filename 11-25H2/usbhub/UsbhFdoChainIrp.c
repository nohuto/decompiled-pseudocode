/*
 * XREFs of UsbhFdoChainIrp @ 0x14003B6CC
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140021D60 (UsbhFdoDeviceControl.c)
 *     UsbhFdoInternalDeviceControl @ 0x140035740 (UsbhFdoInternalDeviceControl.c)
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x14003ABD0 (UsbhFdoPnp_QueryDeviceRelations.c)
 *     UsbhFdoSystemControl @ 0x14003BC60 (UsbhFdoSystemControl.c)
 *     UsbhFdoReturnHubCount @ 0x140041270 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1400413B8 (UsbhFdoReturnRootHubPdo.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoChainIrp(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v3; // rax

  v3 = (PDEVICE_OBJECT *)FdoExt(a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v3[151], a2);
}
