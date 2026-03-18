/*
 * XREFs of UsbhQueryCapsComplete @ 0x1400397E0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhQueryCapsComplete(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 Context)
{
  _DWORD *v4; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  __int128 v6; // xmm1
  int Status; // [rsp+28h] [rbp-10h]

  v4 = FdoExt(Context);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    Status = Irp->IoStatus.Status;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_3a1d82179740321a06fbc3767bd9e9e7_Traceguids,
      Status);
  }
  if ( Irp->PendingReturned )
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  SecurityContext = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  HIDWORD(SecurityContext->SecurityQos) |= 0x200u;
  *((_OWORD *)v4 + 312) = *(_OWORD *)&SecurityContext->SecurityQos;
  *((_OWORD *)v4 + 313) = *(_OWORD *)&SecurityContext->DesiredAccess;
  *((_OWORD *)v4 + 314) = *(_OWORD *)&SecurityContext[1].AccessState;
  v6 = *(_OWORD *)&SecurityContext[2].SecurityQos;
  v4[640] |= 0x200u;
  *((_OWORD *)v4 + 315) = v6;
  KeSetEvent((PRKEVENT)(v4 + 650), 0, 0);
  return (unsigned int)Irp->IoStatus.Status;
}
