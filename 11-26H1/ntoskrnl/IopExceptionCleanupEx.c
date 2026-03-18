/*
 * XREFs of IopExceptionCleanupEx @ 0x1409B6D64
 * Callers:
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404BA6B0 (IopAllocateAndPopulateWriteIrp.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1404C2E04 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140795248 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1407995D0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140799CE0 (NtSetVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     NtSetEaFile @ 0x1409AFCE0 (NtSetEaFile.c)
 *     NtUnlockFile @ 0x1409B0030 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1409B0520 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x1409B13A0 (NtQueryVolumeInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x1409B1E90 (BuildQueryDirectoryIrp.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AACCA0 (NtNotifyChangeDirectoryFileEx.c)
 *     IopWriteFileGather @ 0x140B01CE0 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0D3D8 (IopReadFileScatter.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140268860 (IoFreeIrp.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
