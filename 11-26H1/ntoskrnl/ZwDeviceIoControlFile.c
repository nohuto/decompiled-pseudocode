/*
 * XREFs of ZwDeviceIoControlFile @ 0x1407280A0
 * Callers:
 *     PopFlushAndHold @ 0x140506AF0 (PopFlushAndHold.c)
 *     DifZwDeviceIoControlFileWrapper @ 0x1406A8390 (DifZwDeviceIoControlFileWrapper.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14079EBD4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14082E448 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpGetDriveGeometry @ 0x140841B08 (ExpGetDriveGeometry.c)
 *     BiCreateVhdRamdiskBootDevice @ 0x1408982DC (BiCreateVhdRamdiskBootDevice.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x140898D7C (BiGetVolumeDiskExtentsInformation.c)
 *     BiIsBootRamdisk @ 0x140898E7C (BiIsBootRamdisk.c)
 *     SiGetDeviceNumberInformation @ 0x14089AD84 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x14089AE64 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x14089AF6C (SiIssueSynchronousIoctl.c)
 *     ExpGetPartitionTableInfo @ 0x140A2E19C (ExpGetPartitionTableInfo.c)
 *     SiGetDiskPartitionInformation @ 0x140ADE9A0 (SiGetDiskPartitionInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140AEF17C (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140AF3568 (PfSnVolumeCheckSeekPenalty.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140B152C8 (BiIssueGetDriveLayoutIoctl.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140B1E470 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetPartitionInformation @ 0x140B3CC28 (BiGetPartitionInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140B3DEF0 (BiIsVolumePartitionInformationRetained.c)
 *     ExpTranslateNtPath @ 0x140B597F4 (ExpTranslateNtPath.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140B6780C (ExpGetSystemWriteConstraintInformation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140CDBBC4 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140D09118 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140D092A0 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140D09598 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x140D0A114 (RamdiskStart.c)
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
