/*
 * XREFs of UsbhFdoChainIrp @ 0x14003B12C
 * Callers:
 *     UsbhFdoDeviceControl @ 0x14001BCE0 (UsbhFdoDeviceControl.c)
 *     UsbhFdoInternalDeviceControl @ 0x140033970 (UsbhFdoInternalDeviceControl.c)
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x14003A640 (UsbhFdoPnp_QueryDeviceRelations.c)
 *     UsbhFdoSystemControl @ 0x14003B6D0 (UsbhFdoSystemControl.c)
 *     UsbhFdoReturnHubCount @ 0x140040D9C (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x140040EE8 (UsbhFdoReturnRootHubPdo.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoChainIrp(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v3; // rax

  v3 = (PDEVICE_OBJECT *)FdoExt(a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v3[151], a2);
}
