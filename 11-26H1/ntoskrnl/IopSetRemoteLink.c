/*
 * XREFs of IopSetRemoteLink @ 0x140795B5C
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
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

NTSTATUS __fastcall IopSetRemoteLink(PFILE_OBJECT FileObject, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // edi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r15
  PIRP v7; // rbx
  NTSTATUS result; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _KEVENT Event; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v12[34]; // [rsp+80h] [rbp-80h] BYREF

  memset_0(v12, 0, sizeof(v12));
  v5 = 0;
  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v7 = IoBuildDeviceIoControlRequest(0x1400ECu, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  if ( !v7 )
    return -1073741670;
  if ( a3 )
  {
    v5 = a3[2] + 12;
    if ( v5 > 0x110 )
      return -1073741789;
    memmove(v12, a3, v5);
    v12[0] = 0LL;
  }
  v7->Flags |= 4u;
  v7->AssociatedIrp.MasterIrp = (struct _IRP *)v12;
  CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
  v7->Tail.Overlay.OriginalFileObject = FileObject;
  CurrentStackLocation[-1].FileObject = FileObject;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1037;
  CurrentStackLocation[-1].Parameters.Create.Options = v5;
  PsReferenceSiloContext(FileObject);
  result = IofCallDriver(RelatedDeviceObject, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
