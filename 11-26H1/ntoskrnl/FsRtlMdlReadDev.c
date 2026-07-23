/*
 * XREFs of FsRtlMdlReadDev @ 0x140790420
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1402C4930 (FsRtlIsNtstatusExpected.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IoSetTopLevelIrp @ 0x140447A40 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x1404595F0 (IoGetTopLevelIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CcMdlRead @ 0x140AF04E0 (CcMdlRead.c)
 */

BOOLEAN __stdcall FsRtlMdlReadDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v7; // r14
  LONGLONG v11; // rbx
  char *FsContext; // r12
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v14; // rdi
  char v15; // al
  LONGLONG v16; // rax

  v7 = Length;
  if ( !IoGetTopLevelIrp() )
  {
    if ( !(_DWORD)v7 )
    {
      IoStatus->Status = 0;
      IoStatus->Information = 0LL;
      return 1;
    }
    v11 = FileOffset->QuadPart + v7;
    FsContext = (char *)FileObject->FsContext;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    __incgsdword(0x8944u);
    v14 = (PERESOURCE *)(FsContext + 8);
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( FileObject->PrivateCacheMap )
    {
      v15 = FsContext[5];
      if ( v15 )
      {
        if ( v15 != 2 || (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)FileObject, (__int64)FileOffset) )
        {
          v16 = *((_QWORD *)FsContext + 4);
          if ( v11 > v16 )
          {
            if ( FileOffset->QuadPart >= v16 )
            {
              IoStatus->Status = -1073741807;
              IoStatus->Information = 0LL;
LABEL_12:
              ExReleaseResourceLite(*v14);
              KeLeaveCriticalRegion();
              return 1;
            }
            LODWORD(v7) = *((_DWORD *)FsContext + 8) - FileOffset->LowPart;
          }
          IoSetTopLevelIrp((PIRP)4);
          CcMdlRead(FileObject, FileOffset, v7, MdlChain, IoStatus);
          FileObject->Flags |= 0x80000u;
          IoSetTopLevelIrp(0LL);
          goto LABEL_12;
        }
      }
    }
    ExReleaseResourceLite(*v14);
    KeLeaveCriticalRegion();
    __incgsdword(0x8948u);
  }
  return 0;
}
