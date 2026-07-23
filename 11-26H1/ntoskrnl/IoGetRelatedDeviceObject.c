/*
 * XREFs of IoGetRelatedDeviceObject @ 0x14026BFA0
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     MiSynchronousPageWrite @ 0x14026AA34 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026ACAC (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14026AF60 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14026B300 (IoPageReadEx.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14026D554 (FsRtlAcquireFileForModWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14026D9C4 (IoAsynchronousPageWrite.c)
 *     FsRtlReleaseFileForModWrite @ 0x14026E3F4 (FsRtlReleaseFileForModWrite.c)
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     CcZeroData @ 0x140466A50 (CcZeroData.c)
 *     CcSetValidData @ 0x140489944 (CcSetValidData.c)
 *     PnpGetRelatedTargetDevice @ 0x14049B114 (PnpGetRelatedTargetDevice.c)
 *     IopValidateAndGetWriteParameters @ 0x1404B3AFC (IopValidateAndGetWriteParameters.c)
 *     FsRtlGetFileExtents @ 0x1405B7980 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x1405B7AF0 (FsRtlMdlReadComplete.c)
 *     FsRtlMdlWriteComplete @ 0x1407905E0 (FsRtlMdlWriteComplete.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140797D78 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x14079868C (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140798870 (IoAttachDevice.c)
 *     IoIsPagingFileUsable @ 0x140799034 (IoIsPagingFileUsable.c)
 *     NtQueryQuotaInformationFile @ 0x14079C100 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14079C810 (NtSetVolumeInformationFile.c)
 *     PiPagePathSetState @ 0x1407A6950 (PiPagePathSetState.c)
 *     PopGetPolicyDeviceObject @ 0x1407DAC48 (PopGetPolicyDeviceObject.c)
 *     RawSetInformation @ 0x140805AB4 (RawSetInformation.c)
 *     VhdiMountVhdFile @ 0x1408AC820 (VhdiMountVhdFile.c)
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 *     IoVolumeDeviceToDosName @ 0x1409205E0 (IoVolumeDeviceToDosName.c)
 *     IopGetFileInformation @ 0x1409212D0 (IopGetFileInformation.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     NtSetEaFile @ 0x140980DA0 (NtSetEaFile.c)
 *     NtUnlockFile @ 0x1409810F0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1409815E0 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x140981E10 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140982460 (NtQueryVolumeInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x140982F50 (BuildQueryDirectoryIrp.c)
 *     IopOpenLinkOrRenameTarget @ 0x1409842DC (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x1409855F8 (IopGetBasicInformationFile.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14098C650 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlSetKernelEaFile @ 0x140A23020 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A23830 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140A23B80 (FsRtlQueryKernelEaFile.c)
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 *     IoGetDeviceObjectPointer @ 0x140A30960 (IoGetDeviceObjectPointer.c)
 *     FsRtlReleaseFile @ 0x140A64120 (FsRtlReleaseFile.c)
 *     FsRtlGetFileSize @ 0x140A64360 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x140A647F8 (FsRtlSetFileSize.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A6A2E0 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140A6A590 (FsRtlReleaseFileForCcFlush.c)
 *     IopParseFile @ 0x140A86A00 (IopParseFile.c)
 *     CmpFileFlushAndPurge @ 0x140AA84FC (CmpFileFlushAndPurge.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AAAD60 (NtNotifyChangeDirectoryFileEx.c)
 *     FsRtlQueryInformationFile @ 0x140AB5E30 (FsRtlQueryInformationFile.c)
 *     FsRtlQueryCachedVdl @ 0x140ABA7B0 (FsRtlQueryCachedVdl.c)
 *     CcMdlReadComplete @ 0x140AC6AE0 (CcMdlReadComplete.c)
 *     IopGetSetObjectId @ 0x140AD0E98 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140AD0FDC (IopGetVolumeId.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140B00150 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x140B00250 (FsRtlPrepareMdlWrite.c)
 *     IopWriteFileGather @ 0x140B03A10 (IopWriteFileGather.c)
 *     FsRtlMdlReadEx @ 0x140B07030 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x140B07130 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x140B0BE50 (CcMdlWriteComplete.c)
 *     IopReadFileScatter @ 0x140B0EB28 (IopReadFileScatter.c)
 *     WmipGetFilePDO @ 0x140B30428 (WmipGetFilePDO.c)
 *     IoSetInformation @ 0x140B34AF0 (IoSetInformation.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140B3B354 (FsRtlIssueFileNotificationFsctl.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140B56AF0 (FsRtlGetDirectImageOriginalBase.c)
 *     IopFreeBandwidthContract @ 0x140B71E1C (IopFreeBandwidthContract.c)
 *     NtLockFile @ 0x140B720D0 (NtLockFile.c)
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
