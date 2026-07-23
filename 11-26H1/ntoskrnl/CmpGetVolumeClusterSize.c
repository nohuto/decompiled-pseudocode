/*
 * XREFs of CmpGetVolumeClusterSize @ 0x1408BCE30
 * Callers:
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IoAllocateIrp @ 0x14026BA40 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReference @ 0x1402F8660 (IoGetAttachedDeviceReference.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryVolumeInformationFile @ 0x1407288E0 (ZwQueryVolumeInformationFile.c)
 *     CmpCreateEvent @ 0x1408BD094 (CmpCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall CmpGetVolumeClusterSize(HANDLE FileHandle, int *a2)
{
  struct _OBJECT_TYPE *Flink; // r8
  NTSTATUS result; // eax
  int Event; // eax
  PVOID v7; // r15
  NTSTATUS v8; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PVOID v10; // rdi
  struct _DEVICE_OBJECT *v11; // rsi
  PIRP Irp; // rax
  IRP *v13; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  IRP *v15; // rdx
  struct _IO_STACK_LOCATION *v16; // rax
  NTSTATUS Status; // r14d
  unsigned int v18; // edx
  int v19; // edx
  PVOID Object; // [rsp+30h] [rbp-49h] BYREF
  PVOID v21; // [rsp+38h] [rbp-41h]
  HANDLE Handle; // [rsp+40h] [rbp-39h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-31h] BYREF
  __int64 v24; // [rsp+58h] [rbp-21h] BYREF
  __int128 v25; // [rsp+60h] [rbp-19h]
  int v26; // [rsp+70h] [rbp-9h]
  __int128 FsInformation; // [rsp+78h] [rbp-1h] BYREF
  __int64 v28; // [rsp+88h] [rbp+Fh]

  v28 = 0LL;
  v21 = 0LL;
  Flink = (struct _OBJECT_TYPE *)CmpContextListLock.ApcState.ApcListHead[1].Blink->Flink;
  Handle = 0LL;
  v26 = 0;
  Object = 0LL;
  FsInformation = 0LL;
  v24 = 6LL;
  IoStatusBlock = 0LL;
  v25 = 0LL;
  result = ObReferenceObjectByHandle(FileHandle, 0, Flink, 0, &Object, 0LL);
  if ( result < 0 )
    return result;
  Event = CmpCreateEvent(NotificationEvent);
  v7 = Object;
  v8 = Event;
  if ( Event >= 0 )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
    v10 = v21;
    v11 = AttachedDeviceReference;
    if ( !AttachedDeviceReference )
      goto LABEL_26;
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    v13 = Irp;
    if ( !Irp )
      goto LABEL_26;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v15 = Irp;
    CurrentStackLocation[-1].MajorFunction = 14;
    CurrentStackLocation[-1].DeviceObject = v11;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2954240;
    CurrentStackLocation[-1].Parameters.Read.Length = 28;
    CurrentStackLocation[-1].Parameters.Create.Options = 12;
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v24;
    Irp->UserBuffer = &v24;
    v16 = Irp->Tail.Overlay.CurrentStackLocation;
    v13->Flags = 80;
    v13->IoStatus.Status = -1073741637;
    v16[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&CmpGetVolumeClusterSizeCompletion;
    v16[-1].Context = v10;
    v16[-1].Control = -32;
    Status = IofCallDriver(v11, v15);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(v10, Executive, 0, 0, 0LL);
      Status = v13->IoStatus.Status;
    }
    IoFreeIrp(v13);
    if ( Status < 0 )
      goto LABEL_26;
    if ( HIDWORD(v24) < 0x18 )
      goto LABEL_26;
    v18 = HIDWORD(v25);
    if ( !HIDWORD(v25) )
      goto LABEL_26;
    if ( ((HIDWORD(v25) - 1) & HIDWORD(v25)) != 0 )
      Status = -1073741288;
    if ( Status < 0 )
    {
LABEL_26:
      v8 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation);
      if ( v8 < 0 )
        goto LABEL_16;
      v18 = HIDWORD(v28);
    }
    v8 = 0;
    if ( v18 > 0x1000 )
    {
      v19 = 8;
      goto LABEL_15;
    }
    if ( v18 < 0x200 )
    {
      v19 = 1;
      goto LABEL_15;
    }
    v19 = v18 >> 9;
    if ( ((v19 - 1) & v19) == 0 )
    {
LABEL_15:
      *a2 = v19;
      goto LABEL_16;
    }
    v8 = -1073741288;
LABEL_16:
    if ( v11 )
      ObfDereferenceObject(v11);
    goto LABEL_18;
  }
  v10 = 0LL;
LABEL_18:
  ObfDereferenceObject(v7);
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    ZwClose(Handle);
  }
  return v8;
}
