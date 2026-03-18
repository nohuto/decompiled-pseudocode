/*
 * XREFs of UsbhFdoPnp_QueryStop @ 0x140050220
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140029630 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhDisableHardReset @ 0x14004C430 (UsbhDisableHardReset.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryStop(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v4; // rbp
  _DWORD *v5; // rsi
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0;
  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  v5 = FdoExt(a1) + 346;
  Log(a1, 2, 1903784820, (__int64)v5, (__int64)a2);
  UsbhDisableHardReset(*((_QWORD *)v5 + 1));
  if ( (int)UsbhFdoCheckUpstreamConnectionState(*((_QWORD *)v5 + 1), &v7) >= 0 )
    Usbh_SSH_Event(*((struct _DEVICE_OBJECT **)v5 + 1), 6u, (__int64)v5);
  a2->IoStatus.Status = 0;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], a2);
}
