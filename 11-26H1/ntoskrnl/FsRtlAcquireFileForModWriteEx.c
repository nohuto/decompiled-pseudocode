/*
 * XREFs of FsRtlAcquireFileForModWriteEx @ 0x14026D554
 * Callers:
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14026D980 (IoGetBaseFileSystemDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x14026E030 (FsFilterPerformCallbacks.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14026E8C0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterFreeCompletionStack @ 0x14026E958 (FsFilterFreeCompletionStack.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x14041E930 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14042D7E0 (ExAcquireSharedWaitForExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlAcquireFileForModWriteEx(PFILE_OBJECT FileObject, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  char v5; // si
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  __int64 v7; // rdx
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r15
  __int64 v9; // r8
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  bool v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _ERESOURCE **v16; // r12
  int v17; // eax
  struct _DRIVER_OBJECT *v18; // rax
  int *v19; // rax
  __int64 Pool2; // rax
  PVOID FsContext; // rdi
  char v23; // dl
  _QWORD *v24; // r14
  __int64 v25; // rcx
  char v26; // si
  struct _ERESOURCE *v27; // rcx
  struct _ERESOURCE *v28; // rbx
  BOOLEAN v29; // al
  char v30; // cl
  bool v31; // zf
  struct _ERESOURCE *v32; // rcx
  char v33; // [rsp+31h] [rbp-CFh]
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v35; // [rsp+38h] [rbp-C8h]
  int *v36; // [rsp+48h] [rbp-B8h]
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  char v38; // [rsp+54h] [rbp-ACh]
  PDEVICE_OBJECT v39; // [rsp+58h] [rbp-A8h]
  struct _FILE_OBJECT *v40; // [rsp+60h] [rbp-A0h]
  __int128 v41; // [rsp+68h] [rbp-98h]
  __int128 v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+90h] [rbp-70h]
  __int16 StackSize; // [rsp+98h] [rbp-68h]
  __int16 v46; // [rsp+9Ah] [rbp-66h]
  _BYTE *v47; // [rsp+A0h] [rbp-60h]
  _BYTE v48[488]; // [rsp+A8h] [rbp-58h] BYREF

  *((_QWORD *)&v35 + 1) = a3;
  *(_QWORD *)&v35 = a2;
  memset_0(&v37, 0, 0x238uLL);
  v4 = 0;
  v33 = 0;
  v5 = 0;
  v34 = 0;
  v36 = &v37;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  v9 = 0LL;
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  v13 = AddDevice
     && (*(_DWORD *)AddDevice >= 0x50u && *((_QWORD *)AddDevice + 9)
      || *(_DWORD *)AddDevice >= 0x58u && *((_QWORD *)AddDevice + 10));
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v13 )
  {
    v16 = (struct _ERESOURCE **)*((_QWORD *)&v35 + 1);
    v36 = 0LL;
    goto LABEL_15;
  }
  v44 = 0;
  v38 = -3;
  v37 = 64;
  v39 = RelatedDeviceObject;
  v40 = FileObject;
  v41 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  StackSize = RelatedDeviceObject->StackSize;
  v46 = 0;
  if ( (unsigned __int16)StackSize <= 0xFu )
  {
    v47 = v48;
    memset_0(v48, 0, 0x1E0uLL);
    StackSize = 15;
LABEL_10:
    v16 = (struct _ERESOURCE **)*((_QWORD *)&v35 + 1);
    LOBYTE(v15) = 1;
    v41 = v35;
    LOBYTE(v14) = 1;
    v17 = FsFilterPerformCallbacks(&v37, v14, v15, &v34);
    v9 = 0LL;
    v4 = v17;
    if ( v17 < 0 )
    {
      v5 = v34;
      goto LABEL_23;
    }
    if ( v17 )
    {
      v31 = v17 == 294;
      v19 = &v37;
      if ( v31 )
        v4 = 0;
      goto LABEL_31;
    }
    FileObject = v40;
    if ( (v44 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(v39, 1953261124LL);
      v33 = 1;
      v9 = 0LL;
      v18 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v18->FastIoDispatch;
      AddDevice = v18->DriverExtension[1].AddDevice;
    }
    v5 = v34;
LABEL_15:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x50u || !*((_QWORD *)AddDevice + 9))
      && (*(_DWORD *)AddDevice < 0x58u || !*((_QWORD *)AddDevice + 10)) )
    {
      if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch >= 0x80 && FastIoDispatch->AcquireForModWrite )
      {
        v4 = guard_dispatch_icall_no_overrides(FileObject, v35, v16);
        v9 = 0LL;
      }
      else
      {
        v4 = -1073741808;
      }
      v5 |= 1u;
    }
    if ( v33 )
    {
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
      v9 = 0LL;
    }
LABEL_23:
    if ( v4 != -1073741808 || (v5 & 1) == 0 )
      goto LABEL_24;
    FsContext = FileObject->FsContext;
    if ( !*((_QWORD *)FsContext + 1) )
    {
      *v16 = 0LL;
      goto LABEL_55;
    }
    v23 = *((_BYTE *)FsContext + 4);
    v24 = (_QWORD *)v35;
    if ( (v23 & 8) == 0
      && ((v25 = *((_QWORD *)FsContext + 5), *(_QWORD *)v35 <= v25) || v25 == *((_QWORD *)FsContext + 4)) )
    {
      if ( (v23 & 0x10) == 0 )
      {
        v27 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
        if ( v27 )
        {
          v26 = 0;
LABEL_45:
          v28 = v27;
          if ( !v26 )
          {
            v29 = ExAcquireSharedWaitForExclusive(v27, 0);
            goto LABEL_47;
          }
          while ( 1 )
          {
            v29 = ExAcquireResourceExclusiveLite(v28, 0);
LABEL_47:
            v9 = 0LL;
            if ( !v29 )
              goto LABEL_48;
            v30 = *((_BYTE *)FsContext + 4);
            if ( (v30 & 8) != 0 || *v24 > *((_QWORD *)FsContext + 5) )
            {
              if ( v26 )
                goto LABEL_70;
            }
            else
            {
              if ( (v30 & 0x10) == 0 )
              {
                v32 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
                if ( !v32 || v28 == v32 )
                {
                  if ( v26 )
                  {
LABEL_78:
                    ExConvertExclusiveToSharedLite(v28);
                    v9 = 0LL;
                  }
                }
                else
                {
                  v28 = 0LL;
                  if ( ExAcquireSharedWaitForExclusive(v32, 0) )
                    v28 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
                  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
                  v9 = 0LL;
                  if ( !v28 )
                  {
LABEL_48:
                    v4 = -1073741608;
                    goto LABEL_24;
                  }
                }
LABEL_70:
                *v16 = v28;
LABEL_55:
                v4 = 0;
LABEL_24:
                v19 = v36;
                if ( !v36 )
                  return v4;
LABEL_31:
                if ( *((_WORD *)v19 + 37) )
                  FsFilterPerformCompletionCallbacks(&v37, v4, 0LL);
                if ( (v44 & 1) != 0 )
                  FsFilterFreeCompletionStack(&v37, v7, v9);
                return v4;
              }
              if ( v26 )
                goto LABEL_78;
              if ( v28 == *((struct _ERESOURCE **)FsContext + 1) )
                goto LABEL_70;
            }
            ExReleaseResourceLite(v28);
            v28 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
            v26 = 1;
          }
        }
      }
      v26 = 0;
    }
    else
    {
      v26 = 1;
    }
    v27 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    goto LABEL_45;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v44 |= 1u;
    v47 = (_BYTE *)Pool2;
    goto LABEL_10;
  }
  return 3221225626LL;
}
