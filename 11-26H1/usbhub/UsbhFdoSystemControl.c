/*
 * XREFs of UsbhFdoSystemControl @ 0x14003B6D0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhFdoChainIrp @ 0x14003B12C (UsbhFdoChainIrp.c)
 */

__int64 __fastcall UsbhFdoSystemControl(PDEVICE_OBJECT DeviceObject, IRP *Tag)
{
  _DWORD *v4; // rbp
  NTSTATUS v5; // eax
  unsigned int v6; // edi
  enum _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+58h] [rbp+10h] BYREF

  IrpDisposition = IrpProcessed;
  v4 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 8, 1180126537, 0LL, (__int64)Tag);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), Tag, File, 1u, 0x20u);
  v6 = v5;
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    Tag->IoStatus.Status = v5;
    Log((__int64)DeviceObject, 16, 561474921, v5, (__int64)Tag);
  }
  else
  {
    v6 = WmiSystemControl((PWMILIB_CONTEXT)(v4 + 718), DeviceObject, Tag, &IrpDisposition);
    Log((__int64)DeviceObject, 8, 1182231913, IrpDisposition, (int)v6);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), Tag, 0x20u);
    if ( IrpDisposition == IrpProcessed )
      return v6;
    if ( IrpDisposition != IrpNotCompleted )
      return (unsigned int)UsbhFdoChainIrp((__int64)DeviceObject, Tag);
  }
  IofCompleteRequest(Tag, 0);
  return v6;
}
