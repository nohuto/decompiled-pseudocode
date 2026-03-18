/*
 * XREFs of UsbhFdoPnp_QueryPnpDeviceState @ 0x1400505A0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryPnpDeviceState(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v4; // rdi
  int v6; // [rsp+28h] [rbp-40h]

  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 2, 1934650960, *((unsigned int *)v4 + 643), (__int64)a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_e515ed24217c325a0d538c98f1498d1a_Traceguids);
  if ( *((_DWORD *)v4 + 643) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = *((_DWORD *)v4 + 643);
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x11u,
        (__int64)&WPP_e515ed24217c325a0d538c98f1498d1a_Traceguids,
        v6);
    }
    a2->IoStatus.Information |= *((unsigned int *)v4 + 643);
    a2->IoStatus.Status = 0;
    UsbhException(a1, 0, 87, &a2->IoStatus.Information, 8u, 0, 0, usbfile_pnp_c, 2265, 0);
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], a2);
}
