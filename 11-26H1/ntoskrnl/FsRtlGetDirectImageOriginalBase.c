/*
 * XREFs of FsRtlGetDirectImageOriginalBase @ 0x140B56AF0
 * Callers:
 *     MiReleaseImageSection @ 0x140A64F24 (MiReleaseImageSection.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoAllocateIrpEx @ 0x14026BAA0 (IoAllocateIrpEx.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 */

NTSTATUS __fastcall FsRtlGetDirectImageOriginalBase(PFILE_OBJECT FileObject, __int64 a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  __int64 v5; // rdx
  __int64 Irp; // rax
  IRP *v7; // rdx
  NTSTATUS result; // eax
  __int64 v9; // rax
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+40h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  v10 = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  LOBYTE(v5) = RelatedDeviceObject->StackSize;
  Irp = IoAllocateIrpEx((__int64)RelatedDeviceObject, v5, 0LL);
  v7 = (IRP *)Irp;
  if ( !Irp )
    return -1073741670;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 24) = a2;
  *(_QWORD *)(Irp + 72) = &v10;
  *(_QWORD *)(Irp + 80) = &Object;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  v9 = *(_QWORD *)(Irp + 184);
  *(_WORD *)(v9 - 72) = 13;
  *(_QWORD *)(v9 - 24) = FileObject;
  *(_DWORD *)(v9 - 48) = 590756;
  *(_DWORD *)(v9 - 56) = 0;
  *(_DWORD *)(v9 - 64) = 8;
  *(_QWORD *)(v9 - 40) = 0LL;
  result = IofCallDriver(RelatedDeviceObject, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return v10;
  }
  return result;
}
