/*
 * XREFs of ZwOpenFile @ 0x140723A50
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404C6E8C (DbgkPostModuleMessage.c)
 *     EtwpGetDriverDataDosPath @ 0x14050705C (EtwpGetDriverDataDosPath.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x1405D6938 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwOpenFileWrapper @ 0x1406AB9A0 (DifZwOpenFileWrapper.c)
 *     HalpAcquirePccInterface @ 0x140787144 (HalpAcquirePccInterface.c)
 *     IopIsNotNativeDriverImage @ 0x140794E8C (IopIsNotNativeDriverImage.c)
 *     IoAttachDevice @ 0x140795D40 (IoAttachDevice.c)
 *     PiOpenDirectoryWithRoot @ 0x1407A13E4 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1407A3D40 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1407B43A0 (IopFileUtilClearAttributes.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407B46BC (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1407B672C (PiDrvDbQuerySystemPathWin32.c)
 *     PopLoadFileInMemory @ 0x1407C8C88 (PopLoadFileInMemory.c)
 *     PspLocateSystemDll @ 0x1407EE38C (PspLocateSystemDll.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407F23D0 (PsCheckProcessFileSigningLevel.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140828208 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpGetDriveGeometry @ 0x14083B8C8 (ExpGetDriveGeometry.c)
 *     CMFFlushHitsFile @ 0x1408434C8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140843E00 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14084AB08 (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x1408880AC (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x140888168 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14088AA00 (AslpPathWildcardAllocMatchNode.c)
 *     BiCreatePartitionDevice @ 0x140891AB0 (BiCreatePartitionDevice.c)
 *     BiCreateVhdRamdiskBootDevice @ 0x140891EE0 (BiCreateVhdRamdiskBootDevice.c)
 *     BiGetNtPartitionPathCallback @ 0x1408924F0 (BiGetNtPartitionPathCallback.c)
 *     BiGetPhysicalDiskNumber @ 0x1408927E8 (BiGetPhysicalDiskNumber.c)
 *     BiIsBootRamdisk @ 0x140892A7C (BiIsBootRamdisk.c)
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 *     CmpLogHiveFileInaccessible @ 0x1408B5990 (CmpLogHiveFileInaccessible.c)
 *     IoGetDeviceObjectPointer @ 0x140908800 (IoGetDeviceObjectPointer.c)
 *     KsepSdbMapToMemory @ 0x1409E6578 (KsepSdbMapToMemory.c)
 *     IoVolumeDeviceToDosName @ 0x1409FB9E0 (IoVolumeDeviceToDosName.c)
 *     PiInitializeDDB @ 0x140A25EE0 (PiInitializeDDB.c)
 *     ExpGetPartitionTableInfo @ 0x140A9594C (ExpGetPartitionTableInfo.c)
 *     NtGetNlsSectionPtr @ 0x140A97650 (NtGetNlsSectionPtr.c)
 *     PopBootStatSet @ 0x140ACB570 (PopBootStatSet.c)
 *     ExpGetGlobalLocaleSection @ 0x140AD41DC (ExpGetGlobalLocaleSection.c)
 *     SiOpenDevice @ 0x140AE154C (SiOpenDevice.c)
 *     MiCreateSectionForDriver @ 0x140AEBC54 (MiCreateSectionForDriver.c)
 *     KsepShimDatabaseTime @ 0x140AFDC8C (KsepShimDatabaseTime.c)
 *     PiGetDriverImageDirectory @ 0x140AFEFA4 (PiGetDriverImageDirectory.c)
 *     PopValidateHiberFileSize @ 0x140B01614 (PopValidateHiberFileSize.c)
 *     RtlLockBootStatusData @ 0x140B12DA0 (RtlLockBootStatusData.c)
 *     BiGetDriveLayoutInformation @ 0x140B13738 (BiGetDriveLayoutInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140B1C260 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     DbgkpSectionToFileHandle @ 0x140B260F0 (DbgkpSectionToFileHandle.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140B3BC70 (BiIsVolumePartitionInformationRetained.c)
 *     PopBootStatRestoreDefaults @ 0x140B516E4 (PopBootStatRestoreDefaults.c)
 *     DbgkSendSystemDllMessages @ 0x140B51ED8 (DbgkSendSystemDllMessages.c)
 *     ExpTranslateNtPath @ 0x140B56AF4 (ExpTranslateNtPath.c)
 *     IopValidateJunctionTarget @ 0x140B5F2B0 (IopValidateJunctionTarget.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     IopMarkBootPartition @ 0x140CBD890 (IopMarkBootPartition.c)
 *     IopMountBlockIoLayerCallback @ 0x140CBDAD0 (IopMountBlockIoLayerCallback.c)
 *     IopApplySystemPartitionProt @ 0x140CBEF34 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140CC1740 (PipCriticalDeviceWaitCallback.c)
 *     IopFileUtilRename @ 0x140CC7930 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140CD5870 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140D02D78 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140D02F00 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140D03E44 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(FileHandle, *(_QWORD *)&DesiredAccess);
}
