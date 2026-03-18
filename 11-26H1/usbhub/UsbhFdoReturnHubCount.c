/*
 * XREFs of UsbhFdoReturnHubCount @ 0x140040D9C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhFdoChainIrp @ 0x14003B12C (UsbhFdoChainIrp.c)
 */

__int64 __fastcall UsbhFdoReturnHubCount(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rbx
  _IO_SECURITY_CONTEXT *SecurityContext; // r10
  unsigned int v8; // ebx

  v6 = FdoExt(a1);
  PdoExt(a2);
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( (v6[640] & 1) != 0 )
  {
    v8 = 0;
    if ( SecurityContext )
      ++LODWORD(SecurityContext->SecurityQos);
    else
      v8 = -1073741811;
    a3->IoStatus.Status = v8;
    IofCompleteRequest(a3, 0);
  }
  else
  {
    if ( SecurityContext )
      ++LODWORD(SecurityContext->SecurityQos);
    v8 = UsbhFdoChainIrp(a1, a3);
  }
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v8;
}
