/*
 * XREFs of DpiSetDeviceUsageType @ 0x14024C19C
 * Callers:
 *     DpiAddDevice @ 0x14023C1E0 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiSetDeviceUsageType(PDEVICE_OBJECT DeviceObject, ULONG a2)
{
  PIRP v4; // rax
  IRP *v5; // rdx
  unsigned int Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v5 = v4;
  if ( v4 )
  {
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 22;
    CurrentStackLocation[-1].Parameters.SetLock.Lock = 1;
    CurrentStackLocation[-1].Parameters.Create.Options = a2;
    Status = IofCallDriver(DeviceObject, v5);
    if ( Status == 259 )
    {
      Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( Status )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 3691;
      }
      else
      {
        Status = IoStatusBlock.Status;
        if ( IoStatusBlock.Status < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 3706;
        }
      }
    }
  }
  else
  {
    Status = -1073741670;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3656;
  }
  return Status;
}
