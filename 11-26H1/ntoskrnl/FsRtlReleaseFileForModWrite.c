/*
 * XREFs of FsRtlReleaseFileForModWrite @ 0x14026E3F4
 * Callers:
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14026D980 (IoGetBaseFileSystemDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x14026E030 (FsFilterPerformCallbacks.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14026E8C0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterFreeCompletionStack @ 0x14026E958 (FsFilterFreeCompletionStack.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

int *__fastcall FsRtlReleaseFileForModWrite(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
{
  int v3; // ebx
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r15
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  struct _ERESOURCE *v12; // rsi
  int v13; // eax
  int v14; // ecx
  char v15; // r12
  struct _DRIVER_OBJECT *v16; // rax
  int *result; // rax
  _QWORD *v18; // rsi
  unsigned int *p_SchedulerAssistYieldCounter; // r14
  __int64 Pool2; // rbx
  int v21; // eax
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-C8h]
  int *v24; // [rsp+40h] [rbp-C0h]
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v26; // [rsp+54h] [rbp-ACh]
  PDEVICE_OBJECT v27; // [rsp+58h] [rbp-A8h]
  struct _FILE_OBJECT *v28; // [rsp+60h] [rbp-A0h]
  __int128 v29; // [rsp+68h] [rbp-98h]
  __int128 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  int v32; // [rsp+90h] [rbp-70h]
  __int16 StackSize; // [rsp+98h] [rbp-68h]
  __int16 v34; // [rsp+9Ah] [rbp-66h]
  _BYTE *v35; // [rsp+A0h] [rbp-60h]
  _BYTE v36[488]; // [rsp+A8h] [rbp-58h] BYREF

  Resource = a2;
  memset_0(&v25, 0, 0x238uLL);
  v24 = &v25;
  v3 = 0;
  v22 = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x60u && *((_QWORD *)AddDevice + 11)
     || *(_DWORD *)AddDevice >= 0x68u && *((_QWORD *)AddDevice + 12)) )
  {
    v4 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v4 )
  {
    v12 = Resource;
    v24 = 0LL;
    goto LABEL_39;
  }
  v32 = 0;
  v26 = -4;
  v25 = 64;
  v27 = RelatedDeviceObject;
  v28 = FileObject;
  v29 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  StackSize = RelatedDeviceObject->StackSize;
  v34 = 0;
  if ( (unsigned __int16)StackSize <= 0xFu )
  {
    v35 = v36;
    memset_0(v36, 0, 0x1E0uLL);
    StackSize = 15;
    goto LABEL_9;
  }
  v18 = 0LL;
  p_SchedulerAssistYieldCounter = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
  {
    if ( v26 != 250 )
    {
      switch ( v26 )
      {
        case 0xFBu:
          goto LABEL_52;
        case 0xFCu:
          goto LABEL_53;
        case 0xFDu:
LABEL_52:
          v18 = AcquireOpsReservePool;
          p_SchedulerAssistYieldCounter = (unsigned int *)&VslpReservedTransferLock.Padding[2];
LABEL_54:
          KeWaitForSingleObject(p_SchedulerAssistYieldCounter, Executive, 0, 0, 0LL);
          Pool2 = (__int64)(v18 + 1);
          *v18 = KeGetCurrentThread();
          memset_0(v18 + 1, 0, 0x3C8uLL);
          v21 = v32 | 2;
          goto LABEL_34;
      }
      if ( v26 != 254 )
      {
        if ( v26 != 255 )
          goto LABEL_54;
        goto LABEL_52;
      }
    }
LABEL_53:
    v18 = (_QWORD *)VslpReservedTransferLock.Padding[1];
    p_SchedulerAssistYieldCounter = &VslpReservedTransferLock.SchedulerAssistYieldCounter;
    goto LABEL_54;
  }
  v21 = v32;
LABEL_34:
  v35 = (_BYTE *)Pool2;
  v32 = v21 | 1;
LABEL_9:
  v12 = Resource;
  *(_QWORD *)&v29 = Resource;
  v13 = FsFilterPerformCallbacks((__int64)&v25, 0, 1, &v22);
  v14 = 0;
  v3 = v13;
  if ( v13 >= 0 )
  {
    if ( v13 )
    {
      if ( v13 != 294 )
        v14 = v13;
      v3 = v14;
LABEL_25:
      if ( v3 >= 0 )
        goto LABEL_26;
      goto LABEL_50;
    }
    FileObject = v28;
    if ( (v32 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(v27, 1953261124LL);
      v15 = 1;
      v16 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v16->FastIoDispatch;
      AddDevice = v16->DriverExtension[1].AddDevice;
      goto LABEL_13;
    }
LABEL_39:
    v15 = 0;
LABEL_13:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x60u || !*((_QWORD *)AddDevice + 11))
      && (*(_DWORD *)AddDevice < 0x68u || !*((_QWORD *)AddDevice + 12)) )
    {
      if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch >= 0xD0 && FastIoDispatch->ReleaseForModWrite )
        v3 = guard_dispatch_icall_no_overrides(FileObject, v12, BaseFileSystemDeviceObject);
      else
        v3 = -1073741808;
      v22 |= 1u;
    }
    if ( v15 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    goto LABEL_25;
  }
LABEL_50:
  if ( (v22 & 1) != 0 )
  {
    ExReleaseResourceLite(v12);
    v3 = 0;
  }
LABEL_26:
  result = v24;
  if ( v24 )
  {
    if ( *((_WORD *)v24 + 37) )
      result = (int *)FsFilterPerformCompletionCallbacks(&v25, (unsigned int)v3, v7);
    if ( (v32 & 1) != 0 )
      return (int *)FsFilterFreeCompletionStack(&v25, v6, v7);
  }
  return result;
}
