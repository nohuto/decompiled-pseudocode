/*
 * XREFs of UsbhFdoSubmitPdoIdleNotification @ 0x140041564
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1400089B0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhDecPdoIoCount @ 0x14000F830 (UsbhDecPdoIoCount.c)
 *     UsbhIdleIrp_Event @ 0x140033A44 (UsbhIdleIrp_Event.c)
 */

__int64 __fastcall UsbhFdoSubmitPdoIdleNotification(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  unsigned int v6; // edi
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rcx

  if ( dword_14006F680 )
  {
    v6 = -1073741637;
    a3->IoStatus.Status = -1073741637;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  }
  else
  {
    Parameters = a3->Tail.Overlay.CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( Parameters && *(_QWORD *)&Parameters->NamedPipeType )
    {
      return (unsigned int)UsbhIdleIrp_Event(a1, a2, a3, 1u, 0);
    }
    else
    {
      v6 = -1073741224;
      a3->IoStatus.Status = -1073741224;
      IofCompleteRequest(a3, 0);
      UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
      UsbhException(a1, 0, 122, 0LL, 0, -1073741224, 0, usbfile_dioctl_c, 1148, 0);
    }
  }
  return v6;
}
