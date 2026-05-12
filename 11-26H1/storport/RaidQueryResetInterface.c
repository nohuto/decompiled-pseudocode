/*
 * XREFs of RaidQueryResetInterface @ 0x140009958
 * Callers:
 *     RaidGetResetInterface @ 0x140009874 (RaidGetResetInterface.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidQueryResetInterface(PDEVICE_OBJECT DeviceObject, void *a2)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v5; // rax
  unsigned int Status; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  memset_0(a2, 0, 0x50uLL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v5 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v5 )
  {
    CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
    v5->IoStatus.Status = -1073741637;
    v5->IoStatus.Information = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_DEVICE_RESET_INTERFACE_STANDARD;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.Create.Options = 196688;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)a2;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    Status = IofCallDriver(AttachedDeviceReference, v5);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return Status;
}
