/*
 * XREFs of FsRtlCopyRead @ 0x140AAF910
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyReadEx @ 0x14021CC00 (CcCopyReadEx.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     FsRtlIsNtstatusExpected @ 0x1402E2870 (FsRtlIsNtstatusExpected.c)
 *     IoSetTopLevelIrp @ 0x14044F910 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x1404611F0 (IoGetTopLevelIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall FsRtlCopyRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v9; // rsi
  LONGLONG QuadPart; // r12
  PVOID FsContext; // rbx
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v15; // di
  char v16; // al
  LONGLONG v17; // rcx

  v9 = Length;
  if ( IoGetTopLevelIrp() )
    return 0;
  if ( !(_DWORD)v9 )
  {
    IoStatus->Status = 0;
    IoStatus->Information = 0LL;
    return 1;
  }
  QuadPart = FileOffset->QuadPart;
  if ( 0x7FFFFFFFFFFFFFFFLL - FileOffset->QuadPart < v9 )
  {
    IoStatus->Status = -1073741811;
    IoStatus->Information = 0LL;
    return 0;
  }
  FsContext = FileObject->FsContext;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Wait )
  {
    __incgsdword(0x2EC8u);
    v15 = 1;
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
  }
  else
  {
    __incgsdword(0x2EC4u);
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 0) )
    {
      KeLeaveCriticalRegion();
      __incgsdword(0x8980u);
      return 0;
    }
    v15 = 1;
  }
  if ( FileObject->PrivateCacheMap )
  {
    v16 = *((_BYTE *)FsContext + 5);
    if ( v16 )
    {
      if ( v16 != 2 || (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)FileObject, (__int64)FileOffset) )
      {
        v17 = *((_QWORD *)FsContext + 4);
        if ( QuadPart + v9 > v17 )
        {
          if ( FileOffset->QuadPart >= v17 )
          {
            IoStatus->Status = -1073741807;
            IoStatus->Information = 0LL;
LABEL_13:
            ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
            KeLeaveCriticalRegion();
            return v15;
          }
          LODWORD(v9) = *((_DWORD *)FsContext + 8) - FileOffset->LowPart;
        }
        IoSetTopLevelIrp((PIRP)4);
        v15 = CcCopyReadEx(FileObject, (__int64 *)FileOffset, v9, Wait, (__int64)Buffer, IoStatus, 0LL);
        FileObject->Flags |= 0x80000u;
        if ( v15 )
          FileObject->CurrentByteOffset.QuadPart = FileOffset->QuadPart + IoStatus->Information;
        IoSetTopLevelIrp(0LL);
        goto LABEL_13;
      }
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  KeLeaveCriticalRegion();
  __incgsdword(0x2ECCu);
  return 0;
}
