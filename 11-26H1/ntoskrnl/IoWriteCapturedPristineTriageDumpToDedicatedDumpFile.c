/*
 * XREFs of IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405CA64C
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405FCA00 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoSynchronousPageWriteEx @ 0x14026AF60 (IoSynchronousPageWriteEx.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1407281E0 (ZwQueryInformationFile.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

__int64 IoWriteCapturedPristineTriageDumpToDedicatedDumpFile()
{
  __int64 v0; // rdi
  __int64 v1; // rdi
  NTSTATUS Status; // ebx
  void *v3; // rcx
  __int64 v4; // r9
  struct _MDL *Mdl; // rax
  struct _FILE_OBJECT *v6; // rsi
  struct _MDL *v7; // rdi
  void *v8; // rcx
  PVOID Object; // [rsp+48h] [rbp+7h] BYREF
  __int128 v11; // [rsp+50h] [rbp+Fh] BYREF
  char *v12; // [rsp+60h] [rbp+1Fh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+27h] BYREF
  __int128 FileInformation; // [rsp+78h] [rbp+37h] BYREF
  __int64 v15; // [rsp+88h] [rbp+47h]

  v0 = *(_QWORD *)&KsepShimDbLock.SuspendEvent.Header.Lock;
  v12 = 0LL;
  v15 = 0LL;
  v11 = 0LL;
  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  if ( !*(_QWORD *)&KsepShimDbLock.SuspendEvent.Header.Lock )
  {
    if ( *(_DWORD *)(CrashdmpDumpBlock + 1336) != 4 || (v1 = *(_QWORD *)(CrashdmpDumpBlock + 1328)) == 0 )
      return (unsigned int)-1073741670;
    v0 = v1 - 0x2000;
  }
  if ( (void *)(v0 + 0x2000) == IoPreparedTriageDumpData )
  {
    v3 = *(void **)(CrashdmpDumpBlock + 1352);
    if ( v3 )
    {
      Object = 0LL;
      Status = ObReferenceObjectByHandle(v3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      if ( Status >= 0 )
      {
        Mdl = (struct _MDL *)IopAllocateMdl(v0, *(_DWORD *)(v0 + 8196), 0, v4, 0LL, 0);
        v6 = (struct _FILE_OBJECT *)Object;
        v7 = Mdl;
        if ( Mdl )
        {
          MmBuildMdlForNonPagedPool(Mdl);
          v12 = (char *)&v11 + 8;
          BYTE2(v11) = 6;
          *((_QWORD *)&v11 + 1) = (char *)&v11 + 8;
          DWORD1(v11) = 0;
          v8 = *(void **)(CrashdmpDumpBlock + 1352);
          Object = 0LL;
          if ( ZwQueryInformationFile(v8, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) == 259 )
            KeWaitForSingleObject(&v6->Event, Executive, 0, 0, 0LL);
          Status = IoSynchronousPageWriteEx(v6, (__int64)v7, &Object, (__int64)&v11, 0, 0LL, (__int64)&IoStatusBlock);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&v11, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          IoFreeMdl(v7);
        }
        else
        {
          Status = -1073741670;
        }
        ObfDereferenceObjectWithTag(v6, 0x746C6644u);
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)Status;
}
