/*
 * XREFs of ZwOpenFile @ 0x140728620
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404C083C (DbgkPostModuleMessage.c)
 *     EtwpGetDriverDataDosPath @ 0x140500A2C (EtwpGetDriverDataDosPath.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x1405D9128 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwOpenFileWrapper @ 0x1406AF580 (DifZwOpenFileWrapper.c)
 *     HalpAcquirePccInterface @ 0x140789C74 (HalpAcquirePccInterface.c)
 *     IopIsNotNativeDriverImage @ 0x1407979BC (IopIsNotNativeDriverImage.c)
 *     IoAttachDevice @ 0x140798870 (IoAttachDevice.c)
 *     PiOpenDirectoryWithRoot @ 0x1407A3F24 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1407A6880 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1407B7400 (IopFileUtilClearAttributes.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407B771C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1407B978C (PiDrvDbQuerySystemPathWin32.c)
 *     PopLoadFileInMemory @ 0x1407CBD28 (PopLoadFileInMemory.c)
 *     PspLocateSystemDll @ 0x1407F3EEC (PspLocateSystemDll.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407F7F30 (PsCheckProcessFileSigningLevel.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14082E448 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpGetDriveGeometry @ 0x140841B08 (ExpGetDriveGeometry.c)
 *     CMFFlushHitsFile @ 0x140848958 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140849290 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140850E18 (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x14088E4A8 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x14088E564 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140890DFC (AslpPathWildcardAllocMatchNode.c)
 *     BiCreatePartitionDevice @ 0x140897EAC (BiCreatePartitionDevice.c)
 *     BiCreateVhdRamdiskBootDevice @ 0x1408982DC (BiCreateVhdRamdiskBootDevice.c)
 *     BiGetNtPartitionPathCallback @ 0x1408988F0 (BiGetNtPartitionPathCallback.c)
 *     BiGetPhysicalDiskNumber @ 0x140898BE8 (BiGetPhysicalDiskNumber.c)
 *     BiIsBootRamdisk @ 0x140898E7C (BiIsBootRamdisk.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     CmpLogHiveFileInaccessible @ 0x1408BBF64 (CmpLogHiveFileInaccessible.c)
 *     IoVolumeDeviceToDosName @ 0x1409205E0 (IoVolumeDeviceToDosName.c)
 *     KsepSdbMapToMemory @ 0x1409D65BC (KsepSdbMapToMemory.c)
 *     ExpGetPartitionTableInfo @ 0x140A2E19C (ExpGetPartitionTableInfo.c)
 *     IoGetDeviceObjectPointer @ 0x140A30960 (IoGetDeviceObjectPointer.c)
 *     PiInitializeDDB @ 0x140A38F80 (PiInitializeDDB.c)
 *     NtGetNlsSectionPtr @ 0x140A9B7D0 (NtGetNlsSectionPtr.c)
 *     PopBootStatSet @ 0x140ACD7B0 (PopBootStatSet.c)
 *     ExpGetGlobalLocaleSection @ 0x140AD163C (ExpGetGlobalLocaleSection.c)
 *     SiOpenDevice @ 0x140ADEA3C (SiOpenDevice.c)
 *     MiCreateSectionForDriver @ 0x140AEEB60 (MiCreateSectionForDriver.c)
 *     KsepShimDatabaseTime @ 0x140AFFCFC (KsepShimDatabaseTime.c)
 *     PiGetDriverImageDirectory @ 0x140B01014 (PiGetDriverImageDirectory.c)
 *     PopValidateHiberFileSize @ 0x140B03344 (PopValidateHiberFileSize.c)
 *     RtlLockBootStatusData @ 0x140B14C40 (RtlLockBootStatusData.c)
 *     BiGetDriveLayoutInformation @ 0x140B151FC (BiGetDriveLayoutInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140B1E470 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     DbgkpSectionToFileHandle @ 0x140B28350 (DbgkpSectionToFileHandle.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140B3DEF0 (BiIsVolumePartitionInformationRetained.c)
 *     PopBootStatRestoreDefaults @ 0x140B53F84 (PopBootStatRestoreDefaults.c)
 *     DbgkSendSystemDllMessages @ 0x140B54778 (DbgkSendSystemDllMessages.c)
 *     ExpTranslateNtPath @ 0x140B597F4 (ExpTranslateNtPath.c)
 *     IopValidateJunctionTarget @ 0x140B62430 (IopValidateJunctionTarget.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     IopMarkBootPartition @ 0x140CC3960 (IopMarkBootPartition.c)
 *     IopMountBlockIoLayerCallback @ 0x140CC3BA0 (IopMountBlockIoLayerCallback.c)
 *     IopApplySystemPartitionProt @ 0x140CC5004 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140CC7810 (PipCriticalDeviceWaitCallback.c)
 *     IopFileUtilRename @ 0x140CCDA20 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140CDBBC4 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140D09118 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140D092A0 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140D0A114 (RamdiskStart.c)
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
