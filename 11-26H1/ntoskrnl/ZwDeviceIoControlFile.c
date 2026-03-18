/*
 * XREFs of ZwDeviceIoControlFile @ 0x1407234D0
 * Callers:
 *     PopFlushAndHold @ 0x14050D080 (PopFlushAndHold.c)
 *     DifZwDeviceIoControlFileWrapper @ 0x1406A47B0 (DifZwDeviceIoControlFileWrapper.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14079C094 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140828208 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpGetDriveGeometry @ 0x14083B8C8 (ExpGetDriveGeometry.c)
 *     BiCreateVhdRamdiskBootDevice @ 0x140891EE0 (BiCreateVhdRamdiskBootDevice.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14089297C (BiGetVolumeDiskExtentsInformation.c)
 *     BiIsBootRamdisk @ 0x140892A7C (BiIsBootRamdisk.c)
 *     SiGetDeviceNumberInformation @ 0x140894984 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140894A64 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140894B6C (SiIssueSynchronousIoctl.c)
 *     ExpGetPartitionTableInfo @ 0x140A9594C (ExpGetPartitionTableInfo.c)
 *     SiGetDiskPartitionInformation @ 0x140AE14B0 (SiGetDiskPartitionInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140AEC16C (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140AF0998 (PfSnVolumeCheckSeekPenalty.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140B13804 (BiIssueGetDriveLayoutIoctl.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140B1C260 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetPartitionInformation @ 0x140B3A888 (BiGetPartitionInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140B3BC70 (BiIsVolumePartitionInformationRetained.c)
 *     ExpTranslateNtPath @ 0x140B56AF4 (ExpTranslateNtPath.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140B6476C (ExpGetSystemWriteConstraintInformation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140CD5870 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140D02D78 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140D02F00 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140D031F8 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x140D03E44 (RamdiskStart.c)
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
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
