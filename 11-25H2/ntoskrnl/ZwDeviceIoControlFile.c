/*
 * XREFs of ZwDeviceIoControlFile @ 0x14069B220
 * Callers:
 *     PopFlushAndHold @ 0x1404D5B70 (PopFlushAndHold.c)
 *     DifZwDeviceIoControlFileWrapper @ 0x140633070 (DifZwDeviceIoControlFileWrapper.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14070E608 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14079AF34 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407A53D8 (ExpGetSystemWriteConstraintInformation.c)
 *     BiCreateVhdRamdiskBootDevice @ 0x140803D50 (BiCreateVhdRamdiskBootDevice.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1408045C0 (BiGetVolumeDiskExtentsInformation.c)
 *     BiIsBootRamdisk @ 0x1408046B8 (BiIsBootRamdisk.c)
 *     SiGetDeviceNumberInformation @ 0x140806038 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140806114 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140806214 (SiIssueSynchronousIoctl.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408EB938 (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1408EBC00 (PfSnVolumeCheckSeekPenalty.c)
 *     SiQueryProperty @ 0x140A4DF10 (SiQueryProperty.c)
 *     SiGetDiskPartitionInformation @ 0x140A4E058 (SiGetDiskPartitionInformation.c)
 *     ExpGetPartitionTableInfo @ 0x140A6208C (ExpGetPartitionTableInfo.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140A823A4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140A846D0 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140AA99EC (BiIsVolumePartitionInformationRetained.c)
 *     ExpGetDriveGeometry @ 0x140AAD5E0 (ExpGetDriveGeometry.c)
 *     BiGetPartitionInformation @ 0x140AB11AC (BiGetPartitionInformation.c)
 *     ExpTranslateNtPath @ 0x140AD1DB8 (ExpTranslateNtPath.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140C217E0 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140C4C3B4 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140C4C530 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140C4C854 (VhdiQueryVolumeVhdFilePath.c)
 *     CimfsInitializeBootDisk @ 0x140C4CD70 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140C4D308 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
