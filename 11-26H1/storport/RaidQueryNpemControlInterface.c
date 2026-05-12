/*
 * XREFs of RaidQueryNpemControlInterface @ 0x14009594C
 * Callers:
 *     NvmeGetNpemControlInterface @ 0x14008FCE8 (NvmeGetNpemControlInterface.c)
 *     RaidGetNpemControlInterface @ 0x140094604 (RaidGetNpemControlInterface.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidQueryNpemControlInterface(PDEVICE_OBJECT DeviceObject, _LARGE_INTEGER a2)
{
  PIRP v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( !v4 )
    return -1073741670;
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  v4->IoStatus.Status = -1073741637;
  v4->IoStatus.Information = 0LL;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_NPEM_CONTROL_INTERFACE;
  CurrentStackLocation[-1].MinorFunction = 8;
  CurrentStackLocation[-1].Parameters.Create.Options = 65600;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = a2;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  result = IofCallDriver(DeviceObject, v4);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
