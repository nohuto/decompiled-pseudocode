/*
 * XREFs of ZwOpenFile @ 0x14069B7A0
 * Callers:
 *     DbgkPostModuleMessage @ 0x140484DC4 (DbgkPostModuleMessage.c)
 *     EtwpGetDriverDataDosPath @ 0x1404D43AC (EtwpGetDriverDataDosPath.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14059E624 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwOpenFileWrapper @ 0x1406358B0 (DifZwOpenFileWrapper.c)
 *     BiLogFileOwnerProcess @ 0x14068C42C (BiLogFileOwnerProcess.c)
 *     HalpAcquirePccInterface @ 0x1406F7F44 (HalpAcquirePccInterface.c)
 *     IopIsNotNativeDriverImage @ 0x1407064F4 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x140707338 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x1407079B0 (IoAttachDevice.c)
 *     PiOpenDirectoryWithRoot @ 0x140713C18 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140716790 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14072953C (IopFileUtilClearAttributes.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140729860 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14072BD14 (PiDrvDbQuerySystemPathWin32.c)
 *     PopLoadFileInMemory @ 0x14073D3E4 (PopLoadFileInMemory.c)
 *     PspLocateSystemDll @ 0x1407624B0 (PspLocateSystemDll.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407667E0 (PsCheckProcessFileSigningLevel.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14079AF34 (EtwpUpdateFileInfoDriverRegistration.c)
 *     CMFFlushHitsFile @ 0x1407B39A0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407B42D0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407BA474 (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x1407F8B38 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x1407F8BF4 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1407FB620 (AslpPathWildcardAllocMatchNode.c)
 *     BiCreatePartitionDevice @ 0x1408038D4 (BiCreatePartitionDevice.c)
 *     BiCreateVhdRamdiskBootDevice @ 0x140803D50 (BiCreateVhdRamdiskBootDevice.c)
 *     BiGetNtPartitionPath @ 0x140804030 (BiGetNtPartitionPath.c)
 *     BiIsBootRamdisk @ 0x1408046B8 (BiIsBootRamdisk.c)
 *     IoGetDeviceObjectPointer @ 0x140822F90 (IoGetDeviceObjectPointer.c)
 *     KsepSdbMapToMemory @ 0x14082B4A8 (KsepSdbMapToMemory.c)
 *     ExpGetGlobalLocaleSection @ 0x1408FA174 (ExpGetGlobalLocaleSection.c)
 *     NtGetNlsSectionPtr @ 0x1408FB050 (NtGetNlsSectionPtr.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     CmpLogHiveFileInaccessible @ 0x14091005C (CmpLogHiveFileInaccessible.c)
 *     PiInitializeDDB @ 0x1409AF8CC (PiInitializeDDB.c)
 *     DbgkSendSystemDllMessages @ 0x1409B9DBC (DbgkSendSystemDllMessages.c)
 *     MiCreateSectionForDriver @ 0x140A1340C (MiCreateSectionForDriver.c)
 *     PopBootStatGet @ 0x140A1C0B0 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A1C6F8 (PopBootStatSet.c)
 *     SiOpenDevice @ 0x140A4E0EC (SiOpenDevice.c)
 *     PiGetDriverImageDirectory @ 0x140A54E84 (PiGetDriverImageDirectory.c)
 *     KsepShimDatabaseTime @ 0x140A6049C (KsepShimDatabaseTime.c)
 *     ExpGetPartitionTableInfo @ 0x140A6208C (ExpGetPartitionTableInfo.c)
 *     PopValidateHiberFileSize @ 0x140A764E8 (PopValidateHiberFileSize.c)
 *     RtlLockBootStatusData @ 0x140A7A490 (RtlLockBootStatusData.c)
 *     DbgkpSectionToFileHandle @ 0x140A7F280 (DbgkpSectionToFileHandle.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140A823A4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x140A84604 (BiGetDriveLayoutInformation.c)
 *     MiOpenHotPatchFile @ 0x140A992CC (MiOpenHotPatchFile.c)
 *     PopBootStatRestoreDefaults @ 0x140AA6644 (PopBootStatRestoreDefaults.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140AA99EC (BiIsVolumePartitionInformationRetained.c)
 *     ExpGetDriveGeometry @ 0x140AAD5E0 (ExpGetDriveGeometry.c)
 *     BiGetPhysicalDriveName @ 0x140AB04CC (BiGetPhysicalDriveName.c)
 *     ExpTranslateNtPath @ 0x140AD1DB8 (ExpTranslateNtPath.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     IopMarkBootPartition @ 0x140C0BBA0 (IopMarkBootPartition.c)
 *     IopApplySystemPartitionProt @ 0x140C0D000 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140C0F510 (PipCriticalDeviceWaitCallback.c)
 *     IopFileUtilRename @ 0x140C1537C (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140C217E0 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140C4C3B4 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140C4C530 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140C4CD70 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140C4D308 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
