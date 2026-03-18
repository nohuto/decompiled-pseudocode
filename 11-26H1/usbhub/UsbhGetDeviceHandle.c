/*
 * XREFs of UsbhGetDeviceHandle @ 0x140038888
 * Callers:
 *     UsbhCreateDevice @ 0x14001016C (UsbhCreateDevice.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x14003B4D4 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhGetHubDeviceInformation @ 0x14003CA10 (UsbhGetHubDeviceInformation.c)
 *     UsbhInitializeTtHub @ 0x14003D660 (UsbhInitializeTtHub.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x14004026C (UsbhFdoHandleGetDumpDataIoctl.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhGetDeviceHandle(__int64 a1, _UNICODE_STRING *a2)
{
  PDEVICE_OBJECT *v4; // rdi
  PIRP v5; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v11 = 0LL;
  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v5 = IoBuildDeviceIoControlRequest(0x220437u, v4[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( !v5 )
    return 0LL;
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation == (_IO_STACK_LOCATION *)72 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = a2;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&v11;
  Status = IofCallDriver(v4[151], v5);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  else
  {
    IoStatusBlock.Status = Status;
  }
  Log(a1, 4, 1734633554, Status, v11);
  if ( IoStatusBlock.Status >= 0 )
    return v11;
  else
    return 0LL;
}
