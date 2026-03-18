/*
 * XREFs of IoGetRelatedDeviceObject @ 0x14026CA30
 * Callers:
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     MiSynchronousPageWrite @ 0x14026B4C4 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026B73C (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14026B9F0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14026BD90 (IoPageReadEx.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14026DFE4 (FsRtlAcquireFileForModWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14026E454 (IoAsynchronousPageWrite.c)
 *     FsRtlReleaseFileForModWrite @ 0x14026EE84 (FsRtlReleaseFileForModWrite.c)
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 *     CcZeroData @ 0x14046D2D0 (CcZeroData.c)
 *     CcSetValidData @ 0x14048FE94 (CcSetValidData.c)
 *     PnpGetRelatedTargetDevice @ 0x1404A15E4 (PnpGetRelatedTargetDevice.c)
 *     IopValidateAndGetWriteParameters @ 0x1404BA26C (IopValidateAndGetWriteParameters.c)
 *     FsRtlGetFileExtents @ 0x1405B5170 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x1405B52E0 (FsRtlMdlReadComplete.c)
 *     FsRtlMdlWriteComplete @ 0x14078DAB0 (FsRtlMdlWriteComplete.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140795248 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x140795B5C (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140795D40 (IoAttachDevice.c)
 *     IoIsPagingFileUsable @ 0x140796504 (IoIsPagingFileUsable.c)
 *     NtQueryQuotaInformationFile @ 0x1407995D0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140799CE0 (NtSetVolumeInformationFile.c)
 *     PiPagePathSetState @ 0x1407A3E10 (PiPagePathSetState.c)
 *     PopGetPolicyDeviceObject @ 0x1407D7628 (PopGetPolicyDeviceObject.c)
 *     RawSetInformation @ 0x140800084 (RawSetInformation.c)
 *     VhdiMountVhdFile @ 0x1408A63B0 (VhdiMountVhdFile.c)
 *     IopGetSetSecurityObject @ 0x1408EC450 (IopGetSetSecurityObject.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IoGetDeviceObjectPointer @ 0x140908800 (IoGetDeviceObjectPointer.c)
 *     NtSetEaFile @ 0x1409AFCE0 (NtSetEaFile.c)
 *     NtUnlockFile @ 0x1409B0030 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1409B0520 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x1409B0D50 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x1409B13A0 (NtQueryVolumeInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x1409B1E90 (BuildQueryDirectoryIrp.c)
 *     IopOpenLinkOrRenameTarget @ 0x1409B321C (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x1409B4538 (IopGetBasicInformationFile.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x1409B8C10 (IopQueryXxxInformation.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1409BB670 (FsRtlAcquireFileExclusiveCommon.c)
 *     IoVolumeDeviceToDosName @ 0x1409FB9E0 (IoVolumeDeviceToDosName.c)
 *     IopGetFileInformation @ 0x1409FC6D0 (IopGetFileInformation.c)
 *     FsRtlSetKernelEaFile @ 0x140A199F0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A1A200 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140A1A550 (FsRtlQueryKernelEaFile.c)
 *     IopDeleteFile @ 0x140A1ECD0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 *     FsRtlReleaseFile @ 0x140A56BA0 (FsRtlReleaseFile.c)
 *     FsRtlGetFileSize @ 0x140A56DE0 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x140A57278 (FsRtlSetFileSize.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A5D320 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140A5D5D0 (FsRtlReleaseFileForCcFlush.c)
 *     IopParseFile @ 0x140A80B90 (IopParseFile.c)
 *     CmpFileFlushAndPurge @ 0x140AAAF1C (CmpFileFlushAndPurge.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AACCA0 (NtNotifyChangeDirectoryFileEx.c)
 *     FsRtlQueryInformationFile @ 0x140AB4A90 (FsRtlQueryInformationFile.c)
 *     FsRtlQueryCachedVdl @ 0x140AB9390 (FsRtlQueryCachedVdl.c)
 *     CcMdlReadComplete @ 0x140AC4E70 (CcMdlReadComplete.c)
 *     IopGetSetObjectId @ 0x140ACEC58 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140ACED9C (IopGetVolumeId.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140AFE0E0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x140AFE1E0 (FsRtlPrepareMdlWrite.c)
 *     IopWriteFileGather @ 0x140B01CE0 (IopWriteFileGather.c)
 *     FsRtlMdlReadEx @ 0x140B05420 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x140B05520 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x140B0A090 (CcMdlWriteComplete.c)
 *     IopReadFileScatter @ 0x140B0D3D8 (IopReadFileScatter.c)
 *     WmipGetFilePDO @ 0x140B2E4D8 (WmipGetFilePDO.c)
 *     IoSetInformation @ 0x140B326A0 (IoSetInformation.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140B39144 (FsRtlIssueFileNotificationFsctl.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140B54250 (FsRtlGetDirectImageOriginalBase.c)
 *     IopFreeBandwidthContract @ 0x140B6E8DC (IopFreeBandwidthContract.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetRelatedDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rdx
  PDEVICE_OBJECT DeviceObject; // rdx
  PVPB v3; // rdx
  PVOID FileObjectExtension; // rax
  struct _DEVICE_OBJECT **v5; // rcx
  struct _DEVICE_OBJECT *v6; // rcx
  PDEVICE_OBJECT v7; // rax
  struct _DEVICE_OBJECT *i; // rcx

  Vpb = FileObject->Vpb;
  if ( (!Vpb || (DeviceObject = Vpb->DeviceObject) == 0LL)
    && ((FileObject->Flags & 0x800) != 0
     || (v3 = FileObject->DeviceObject->Vpb) == 0LL
     || (DeviceObject = v3->DeviceObject) == 0LL) )
  {
    DeviceObject = FileObject->DeviceObject;
  }
  if ( !DeviceObject->AttachedDevice )
    return DeviceObject;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension
    || (v5 = (struct _DEVICE_OBJECT **)*((_QWORD *)FileObjectExtension + 2)) == 0LL
    || (v6 = *v5) == 0LL )
  {
LABEL_14:
    for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
      DeviceObject = i;
    return DeviceObject;
  }
  v7 = DeviceObject;
  while ( v7 != v6 )
  {
    v7 = v7->AttachedDevice;
    if ( !v7 )
      goto LABEL_14;
  }
  return v6;
}
