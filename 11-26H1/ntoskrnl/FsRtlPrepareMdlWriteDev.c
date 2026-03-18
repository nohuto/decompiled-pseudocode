/*
 * XREFs of FsRtlPrepareMdlWriteDev @ 0x14078DB20
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     FsRtlIsNtstatusExpected @ 0x1402E2870 (FsRtlIsNtstatusExpected.c)
 *     CcCanIWrite @ 0x140383700 (CcCanIWrite.c)
 *     IoSetTopLevelIrp @ 0x14044F910 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x1404611F0 (IoGetTopLevelIrp.c)
 *     CcZeroData @ 0x14046D2D0 (CcZeroData.c)
 *     CcPrepareMdlWrite @ 0x1404CDA40 (CcPrepareMdlWrite.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall FsRtlPrepareMdlWriteDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v9; // rsi
  __int64 v10; // r14
  BOOLEAN v11; // r12
  bool v12; // di
  char *FsContext; // r15
  struct _KTHREAD *CurrentThread; // rax
  char v16; // r9
  LARGE_INTEGER v17; // rdi
  LONGLONG v18; // rbx
  char v19; // cl
  struct _ERESOURCE *v20; // rcx
  struct _ERESOURCE *v21; // rcx
  struct _ERESOURCE *v22; // rcx
  char v23; // [rsp+50h] [rbp-68h]
  bool v24; // [rsp+51h] [rbp-67h]
  int v25; // [rsp+5Ch] [rbp-5Ch]
  LARGE_INTEGER EndOffset; // [rsp+60h] [rbp-58h] BYREF
  __int64 v27; // [rsp+68h] [rbp-50h]
  __int64 v28; // [rsp+70h] [rbp-48h]
  char *v29; // [rsp+78h] [rbp-40h]

  v9 = 0LL;
  v27 = 0LL;
  v10 = 0LL;
  v28 = 0LL;
  v11 = 1;
  v23 = 0;
  v12 = FileOffset->QuadPart == -1;
  v24 = v12;
  if ( !IoGetTopLevelIrp() && CcCanIWrite(FileObject, Length, 1u, 0) && (FileObject->Flags & 0x10) == 0 )
  {
    IoStatus->Status = 0;
    if ( !Length )
      return v11;
    FsContext = (char *)FileObject->FsContext;
    v29 = FsContext;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( v12 || Length + FileOffset->QuadPart > *((_QWORD *)FsContext + 5) )
    {
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
      v16 = 0;
    }
    else
    {
      ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
      v16 = 1;
    }
    if ( v12 )
      v17 = *(LARGE_INTEGER *)(FsContext + 32);
    else
      v17 = *FileOffset;
    v18 = v17.QuadPart + Length;
    v25 = HIDWORD(v18);
    EndOffset = v17;
    if ( FileObject->PrivateCacheMap )
    {
      v19 = FsContext[5];
      if ( v19 )
      {
        if ( 0x7FFFFFFFFFFFFFFFLL - v17.QuadPart >= Length && v18 <= *((_QWORD *)FsContext + 3) )
        {
          if ( !v16 || v18 <= *((_QWORD *)FsContext + 5) )
            goto LABEL_52;
          ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
          if ( v24 )
          {
            v17 = *(LARGE_INTEGER *)(FsContext + 32);
            EndOffset = v17;
            v18 = v17.QuadPart + Length;
            v25 = HIDWORD(v18);
          }
          if ( FileObject->PrivateCacheMap )
          {
            v19 = FsContext[5];
            if ( v19 )
            {
              if ( v18 <= *((_QWORD *)FsContext + 3) )
              {
LABEL_52:
                if ( v19 != 2
                  || (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)FileObject, (__int64)FileOffset) )
                {
                  if ( v18 > *((_QWORD *)FsContext + 4) )
                  {
                    v23 = 1;
                    v9 = *((_QWORD *)FsContext + 4);
                    v27 = v9;
                    v10 = *((_QWORD *)FsContext + 5);
                    v28 = v10;
                    if ( *((_DWORD *)FsContext + 9) == v25
                      || (v20 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
                    {
                      *((_QWORD *)FsContext + 4) = v18;
                    }
                    else
                    {
                      ExAcquireResourceExclusiveLite(v20, 1u);
                      *((_QWORD *)FsContext + 4) = v18;
                      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
                    }
                  }
                  IoSetTopLevelIrp((PIRP)4);
                  if ( v17.QuadPart > *((_QWORD *)FsContext + 5) )
                    v11 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, 1u);
                  if ( v11 )
                    CcPrepareMdlWrite(FileObject, &EndOffset, Length, MdlChain, IoStatus);
                  IoSetTopLevelIrp(0LL);
                  if ( v11 )
                  {
                    if ( v18 > *((_QWORD *)FsContext + 5) )
                    {
                      if ( *((_DWORD *)FsContext + 11) == v25
                        || (v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
                      {
                        *((_QWORD *)FsContext + 5) = v18;
                      }
                      else
                      {
                        ExAcquireResourceExclusiveLite(v21, 1u);
                        *((_QWORD *)FsContext + 5) = v18;
                        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
                      }
                    }
                    FileObject->Flags |= 0x1000u;
                    if ( v23 )
                    {
                      *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v18;
                      FileObject->Flags |= 0x2000u;
                    }
                  }
                  else if ( v23 )
                  {
                    v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
                    if ( v22 )
                    {
                      ExAcquireResourceExclusiveLite(v22, 1u);
                      *((_QWORD *)FsContext + 4) = v9;
                      *((_QWORD *)FsContext + 5) = v10;
                      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
                    }
                    else
                    {
                      *((_QWORD *)FsContext + 4) = v9;
                      *((_QWORD *)FsContext + 5) = v10;
                    }
                  }
                  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
                  KeLeaveCriticalRegion();
                  return v11;
                }
              }
            }
          }
        }
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    KeLeaveCriticalRegion();
  }
  return 0;
}
