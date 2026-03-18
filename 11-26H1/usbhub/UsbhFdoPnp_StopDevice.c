/*
 * XREFs of UsbhFdoPnp_StopDevice @ 0x140050BF0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_FDO_Pnp_State @ 0x1400518D4 (Usbh_FDO_Pnp_State.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_StopDevice(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v4; // rdi
  _DWORD *v5; // rax

  Log(a1, 2, 1716737104, 0LL, (__int64)a2);
  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  v5 = FdoExt(a1);
  Usbh_FDO_Pnp_State(v5 + 346, 5LL);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Status = 0;
  return IofCallDriver(v4[151], a2);
}
