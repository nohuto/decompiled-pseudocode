/*
 * XREFs of FsRtlCopyWrite @ 0x140AC06C0
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyWriteWontFlush @ 0x14026A9B0 (CcCopyWriteWontFlush.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     FsRtlIsNtstatusExpected @ 0x1402C4930 (FsRtlIsNtstatusExpected.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     CcCanIWrite @ 0x1403854B0 (CcCanIWrite.c)
 *     IoSetTopLevelIrp @ 0x140447A40 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x1404595F0 (IoGetTopLevelIrp.c)
 *     CcZeroData @ 0x140466A50 (CcZeroData.c)
 *     CcCopyWrite @ 0x1404D95D0 (CcCopyWrite.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall FsRtlCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  ULONG_PTR v9; // rbx
  BOOLEAN v12; // r12
  char *FsContext; // r15
  __int64 v14; // rsi
  __int64 v15; // r14
  struct _KTHREAD *CurrentThread; // rax
  char v17; // r10
  LARGE_INTEGER v18; // rdi
  signed __int64 v19; // rbx
  char v20; // dl
  signed __int64 v21; // r9
  BOOLEAN v22; // al
  PLARGE_INTEGER v24; // rdx
  struct _ERESOURCE *v25; // rcx
  struct _ERESOURCE *v26; // rcx
  struct _ERESOURCE *v27; // rcx
  BOOLEAN v28; // [rsp+50h] [rbp-78h]
  char v29; // [rsp+51h] [rbp-77h]
  char v30; // [rsp+52h] [rbp-76h]
  LARGE_INTEGER FileOffseta; // [rsp+58h] [rbp-70h] BYREF
  signed __int64 v32; // [rsp+60h] [rbp-68h]
  __int64 v33; // [rsp+68h] [rbp-60h]
  __int64 v34; // [rsp+70h] [rbp-58h]
  char *v35; // [rsp+78h] [rbp-50h]
  __int128 v36; // [rsp+80h] [rbp-48h]

  v9 = Length;
  v12 = 0;
  v28 = 1;
  v30 = 0;
  if ( FileOffset->LowPart != -1 || (v29 = 1, FileOffset->HighPart != -1) )
    v29 = 0;
  if ( IoGetTopLevelIrp() )
    return 0;
  FsContext = (char *)FileObject->FsContext;
  v35 = FsContext;
  if ( !CcCanIWrite(FileObject, v9, Wait, 0)
    || (FileObject->Flags & 0x10) != 0
    || !CcCopyWriteWontFlush(FileObject, FileOffset, v9) )
  {
    return 0;
  }
  IoStatus->Status = 0;
  IoStatus->Information = v9;
  if ( !(_DWORD)v9 )
    return 1;
  v14 = 0LL;
  v33 = 0LL;
  v15 = 0LL;
  v34 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v29 || (signed __int64)(FileOffset->QuadPart + v9) > *((_QWORD *)FsContext + 5) )
  {
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_56;
    v17 = 0;
  }
  else
  {
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_56;
    v17 = 1;
  }
  if ( v29 )
    v18 = *(LARGE_INTEGER *)(FsContext + 32);
  else
    v18 = *FileOffset;
  v19 = v18.QuadPart + v9;
  v32 = v19;
  FileOffseta = v18;
  if ( !FileObject->PrivateCacheMap
    || (v20 = FsContext[5]) == 0
    || (v21 = *((_QWORD *)FsContext + 5), v18.QuadPart >= v21 + 0x2000)
    || 0x7FFFFFFFFFFFFFFFLL - v18.QuadPart < Length
    || v19 > *((_QWORD *)FsContext + 3) )
  {
LABEL_55:
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    goto LABEL_56;
  }
  if ( !v17 || v19 <= v21 )
    goto LABEL_22;
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
  {
LABEL_56:
    KeLeaveCriticalRegion();
    return 0;
  }
  if ( v29 )
  {
    v18 = *(LARGE_INTEGER *)(FsContext + 32);
    FileOffseta = v18;
    v19 = v18.QuadPart + Length;
    v32 = v19;
  }
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_55;
  v20 = FsContext[5];
  if ( !v20 || v19 > *((_QWORD *)FsContext + 3) )
    goto LABEL_55;
LABEL_22:
  if ( v20 != 2 )
    goto LABEL_23;
  v36 = 0LL;
  v24 = FileOffset;
  if ( FileOffset->QuadPart == -1 )
    v24 = (PLARGE_INTEGER)(FsContext + 32);
  if ( (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)FileObject, (__int64)v24) )
  {
LABEL_23:
    if ( v19 > *((_QWORD *)FsContext + 4) )
    {
      v30 = 1;
      v14 = *((_QWORD *)FsContext + 4);
      v33 = v14;
      v15 = *((_QWORD *)FsContext + 5);
      v34 = v15;
      if ( *((_DWORD *)FsContext + 9) == HIDWORD(v32) || (v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 4) = v19;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v26, 1u);
        *((_QWORD *)FsContext + 4) = v19;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    IoSetTopLevelIrp((PIRP)4);
    if ( v18.QuadPart > *((_QWORD *)FsContext + 5) )
    {
      v22 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &FileOffseta, Wait);
      v28 = v22;
    }
    else
    {
      v22 = 1;
    }
    if ( v22 )
      v28 = CcCopyWrite(FileObject, &FileOffseta, Length, Wait, Buffer);
    IoSetTopLevelIrp(0LL);
    if ( v28 )
    {
      if ( v19 > *((_QWORD *)FsContext + 5) )
      {
        if ( *((_DWORD *)FsContext + 11) == HIDWORD(v32)
          || (v27 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
        {
          *((_QWORD *)FsContext + 5) = v19;
        }
        else
        {
          ExAcquireResourceExclusiveLite(v27, 1u);
          *((_QWORD *)FsContext + 5) = v19;
          ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
        }
      }
      FileObject->Flags |= 0x1000u;
      if ( v30 )
      {
        *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v19;
        FileObject->Flags |= 0x2000u;
      }
      FileObject->CurrentByteOffset.QuadPart = v18.QuadPart + Length;
    }
    else if ( v30 )
    {
      v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
      if ( v25 )
      {
        ExAcquireResourceExclusiveLite(v25, 1u);
        *((_QWORD *)FsContext + 4) = v14;
        *((_QWORD *)FsContext + 5) = v15;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
      else
      {
        *((_QWORD *)FsContext + 4) = v14;
        *((_QWORD *)FsContext + 5) = v15;
      }
    }
    v12 = v28;
  }
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  KeLeaveCriticalRegion();
  return v12;
}
