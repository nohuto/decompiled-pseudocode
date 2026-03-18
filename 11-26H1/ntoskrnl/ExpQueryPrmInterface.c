/*
 * XREFs of ExpQueryPrmInterface @ 0x14083F118
 * Callers:
 *     ExpAcquirePrmInterface @ 0x14083EDB0 (ExpAcquirePrmInterface.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReference @ 0x1403EB070 (IoGetAttachedDeviceReference.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IoBuildSynchronousFsdRequest @ 0x140AD5C20 (IoBuildSynchronousFsdRequest.c)
 */

__int64 __fastcall ExpQueryPrmInterface(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v7; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  memset_0(a5, 0, 0x40uLL);
  *a5 = 65600;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v7 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v7 )
  {
    CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
    v7->RequestorMode = 0;
    v7->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&GUID_PRM_DRIVER_INTERFACE_STANDARD;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.Create.Options = 65600;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a5;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    Status = IofCallDriver(AttachedDeviceReference, v7);
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
