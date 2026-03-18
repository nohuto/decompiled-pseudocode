/*
 * XREFs of UsbhFdoSubmitPdoIdleNotification @ 0x140041094
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     UsbhIdleIrp_Event @ 0x1400152D4 (UsbhIdleIrp_Event.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 */

__int64 __fastcall UsbhFdoSubmitPdoIdleNotification(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  unsigned int v6; // edi
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rcx

  if ( dword_1400706E0 )
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
