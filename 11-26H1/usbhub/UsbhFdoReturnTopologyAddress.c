/*
 * XREFs of UsbhFdoReturnTopologyAddress @ 0x140040FD8
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhBuildTopologyAddress @ 0x140054F28 (UsbhBuildTopologyAddress.c)
 */

__int64 __fastcall UsbhFdoReturnTopologyAddress(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // r15
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  int v8; // eax
  unsigned int v9; // ebx

  FdoExt(a1);
  v6 = PdoExt(a2);
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  }
  v8 = UsbhBuildTopologyAddress(a1, SecurityContext, *((unsigned __int16 *)v6 + 714));
  a3->IoStatus.Status = v8;
  v9 = v8;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v9;
}
