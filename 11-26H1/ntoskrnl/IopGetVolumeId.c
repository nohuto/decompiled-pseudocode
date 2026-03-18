/*
 * XREFs of IopGetVolumeId @ 0x140ACED9C
 * Callers:
 *     IopTrackLink @ 0x140ACE24C (IopTrackLink.c)
 * Callees:
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026B150 (IoBuildDeviceIoControlRequest.c)
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

NTSTATUS __fastcall IopGetVolumeId(PFILE_OBJECT FileObject, __int64 a2)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r14
  PIRP v5; // rax
  IRP *v6; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-21h] BYREF
  _OWORD v11[4]; // [rsp+80h] [rbp-9h] BYREF

  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  memset_0(v11, 0, sizeof(v11));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v5 = IoBuildDeviceIoControlRequest(0, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  v6 = v5;
  if ( !v5 )
    return -1073741670;
  v5->Flags |= 4u;
  v5->Tail.Overlay.OriginalFileObject = FileObject;
  v5->UserBuffer = v11;
  v5->AssociatedIrp.MasterIrp = (struct _IRP *)v11;
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].MajorFunction = 10;
  CurrentStackLocation[-1].Parameters.Read.Length = 64;
  CurrentStackLocation[-1].Parameters.Create.Options = 8;
  PsReferenceSiloContext(FileObject);
  result = IofCallDriver(RelatedDeviceObject, v6);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    result = IoStatusBlock.Status;
  }
  if ( result >= 0 )
  {
    *(_OWORD *)(a2 + 4) = v11[0];
    *(_DWORD *)a2 = 0;
  }
  return result;
}
