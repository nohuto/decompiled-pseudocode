/*
 * XREFs of IopExceptionCleanupEx @ 0x140924ADC
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404B3F40 (IopAllocateAndPopulateWriteIrp.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1404BC654 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140797D78 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x14079C100 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14079C810 (NtSetVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     NtSetEaFile @ 0x140980DA0 (NtSetEaFile.c)
 *     NtUnlockFile @ 0x1409810F0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1409815E0 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x140982460 (NtQueryVolumeInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x140982F50 (BuildQueryDirectoryIrp.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AAAD60 (NtNotifyChangeDirectoryFileEx.c)
 *     IopWriteFileGather @ 0x140B03A10 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0EB28 (IopReadFileScatter.c)
 *     NtLockFile @ 0x140B720D0 (NtLockFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall IopExceptionCleanupEx(ULONG_PTR BugCheckParameter2, PIRP Irp, PVOID Object, PVOID P, char a5)
{
  struct _IRP *MasterIrp; // rcx
  struct _MDL *MdlAddress; // rcx

  if ( Irp )
  {
    MasterIrp = Irp->AssociatedIrp.MasterIrp;
    if ( MasterIrp )
      ExFreePoolWithTag(MasterIrp, 0);
    MdlAddress = Irp->MdlAddress;
    if ( MdlAddress )
      IoFreeMdl(MdlAddress);
    if ( (Irp->Flags & 0x200000) != 0 )
    {
      ObfDereferenceObjectWithTag(
        (PVOID)((unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcContext & 0xFFFFFFFFFFFFFFF8uLL),
        0x49526F49u);
      Irp->Flags &= ~0x200000u;
    }
    IoFreeIrp(Irp);
  }
  if ( a5 )
    IopReleaseFileObjectLock(BugCheckParameter2, (__int64)Irp, (__int64)Object);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return ObfDereferenceObject((PVOID)BugCheckParameter2);
}
