/*
 * XREFs of UsbhGetTtDeviceHandle @ 0x1400472F8
 * Callers:
 *     UsbhCreateDevice @ 0x14001016C (UsbhCreateDevice.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhGetTtDeviceHandle(__int64 a1, __int64 *a2, __int64 a3, _NAMED_PIPE_CREATE_PARAMETERS *a4)
{
  PDEVICE_OBJECT *v8; // rbp
  __int64 v9; // r9
  __int64 result; // rax
  PIRP v11; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v8 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 4, 1735682096, (__int64)a2, a3);
  if ( ((_DWORD)v8[320] & 1) != 0 )
  {
    Log(a1, 4, 1735682097, v9, 0LL);
    result = 0LL;
    *a2 = 0LL;
  }
  else
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = IoBuildDeviceIoControlRequest(0x22043Bu, v8[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
    if ( v11 )
    {
      CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
      if ( CurrentStackLocation == (_IO_STACK_LOCATION *)72 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)a2;
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)a3;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = a4;
      Status = IofCallDriver(v8[151], v11);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      else
      {
        IoStatusBlock.Status = Status;
      }
      Log(a1, 4, 1735682136, *a2, Status);
      return (unsigned int)IoStatusBlock.Status;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
