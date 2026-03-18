/*
 * XREFs of UsbhFdoPnp_RemoveDevice @ 0x1400507C0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhReleaseHubNumber @ 0x140051418 (UsbhReleaseHubNumber.c)
 *     Usbh_FDO_Pnp_State @ 0x1400518D4 (Usbh_FDO_Pnp_State.c)
 *     UsbhSshDisabled @ 0x14005EE90 (UsbhSshDisabled.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhFdoPnp_RemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rsi
  _DWORD *v5; // rax
  unsigned int v6; // ebp
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  unsigned int v10; // edi

  Log((__int64)DeviceObject, 2, 1716667725, 0LL, (__int64)Irp);
  v4 = FdoExt((__int64)DeviceObject);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x16u,
      (__int64)&WPP_e515ed24217c325a0d538c98f1498d1a_Traceguids);
  v5 = FdoExt((__int64)DeviceObject);
  UsbhSshDisabled(DeviceObject, v5 + 346);
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), Irp, File, 1u, 0x20u);
  if ( (v6 & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = v6;
    IofCompleteRequest(Irp, 0);
    return v6;
  }
  else
  {
    Log((__int64)DeviceObject, 2, 1769174128, 0LL, 0LL);
    if ( dword_1400705D0 )
    {
      v8 = FdoExt((__int64)DeviceObject);
      if ( *((_QWORD *)v8 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64))v8 + 554))(*((_QWORD *)v8 + 529), 0LL, 5LL);
    }
    IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(v4 + 306), Irp, 0x20u);
    v9 = FdoExt((__int64)DeviceObject);
    Usbh_FDO_Pnp_State(v9 + 346, 2LL);
    UsbhReleaseHubNumber(DeviceObject);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Status = 0;
    v10 = IofCallDriver(*((PDEVICE_OBJECT *)v4 + 151), Irp);
    if ( v4[1221] )
      KeWaitForSingleObject(v4 + 1224, Executive, 0, 0, 0LL);
    IoDetachDevice(*((PDEVICE_OBJECT *)v4 + 151));
    IoDeleteDevice(DeviceObject);
    return v10;
  }
}
