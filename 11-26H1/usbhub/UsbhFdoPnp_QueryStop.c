/*
 * XREFs of UsbhFdoPnp_QueryStop @ 0x1400506F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140006600 (UsbhFdoCheckUpstreamConnectionState.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     UsbhDisableHardReset @ 0x14004BFFC (UsbhDisableHardReset.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryStop(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v4; // rbp
  _DWORD *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0;
  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  v5 = FdoExt(a1) + 346;
  Log(a1, 2, 1903784820, (__int64)v5, (__int64)a2);
  UsbhDisableHardReset(*((_QWORD *)v5 + 1));
  if ( (int)UsbhFdoCheckUpstreamConnectionState(*((_QWORD *)v5 + 1), &v9, v6, v7) >= 0 )
    Usbh_SSH_Event(*((_QWORD *)v5 + 1), 6u, (__int64)v5);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Status = 0;
  return IofCallDriver(v4[151], a2);
}
