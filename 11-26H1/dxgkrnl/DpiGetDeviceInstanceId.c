/*
 * XREFs of DpiGetDeviceInstanceId @ 0x14024BAEC
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x140087EC0 (DpiMiracastInterfaceChange.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x140426148 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDeviceInstanceId(PDEVICE_OBJECT DeviceObject, ULONG_PTR *a2)
{
  PIRP v4; // rax
  IRP *v5; // rdx
  unsigned int Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( DeviceObject && a2 )
  {
    *a2 = 0LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v5 = v4;
    if ( !v4 )
    {
      Status = -1073741670;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 1497;
      return Status;
    }
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 19;
    CurrentStackLocation[-1].Parameters.Read.Length = 3;
    Status = IofCallDriver(DeviceObject, v5);
    if ( Status == 259 )
    {
      Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( Status )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1530;
        return Status;
      }
      Status = IoStatusBlock.Status;
    }
    if ( (Status & 0x80000000) != 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1547;
    }
    else
    {
      *a2 = IoStatusBlock.Information;
    }
    return Status;
  }
  return 3221225485LL;
}
