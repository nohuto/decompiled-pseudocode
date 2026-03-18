/*
 * XREFs of UsbhFdoInternalDeviceControl @ 0x140035740
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhInternalIoctlPropagateResume @ 0x1400357D4 (UsbhInternalIoctlPropagateResume.c)
 *     UsbhFdoChainIrp @ 0x14003B6CC (UsbhFdoChainIrp.c)
 */

__int64 __fastcall UsbhFdoInternalDeviceControl(__int64 a1, IRP *a2)
{
  switch ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x220447u:
    case 0x22044Bu:
      a2->IoStatus.Status = -1073741637;
      IofCompleteRequest(a2, 0);
      return 3221225659LL;
    case 0x220FA3u:
      return UsbhInternalIoctlPropagateResume();
    case 0x220FA7u:
      FdoExt(a1)[1054] = 2;
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 0);
      return 0LL;
    default:
      return UsbhFdoChainIrp(a1, a2);
  }
}
