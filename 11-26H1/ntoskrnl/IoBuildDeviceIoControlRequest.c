/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x14026A6C0
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1404CA410 (FsRtlGetVirtualDiskNestingLevel.c)
 *     HalpSetAcpiRealTimeClock @ 0x140782DAC (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140787E24 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     FsRtlBalanceReads @ 0x140790BB0 (FsRtlBalanceReads.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140793680 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x140797BC4 (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x14079868C (IopSetRemoteLink.c)
 *     IoCheckPagefileDisableReservations @ 0x1407989CC (IoCheckPagefileDisableReservations.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14079D9E8 (IopIssueSystemEnvironmentRequest.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1407DAE34 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopEtDeferredInitDxgContext @ 0x1407DFE00 (PopEtDeferredInitDxgContext.c)
 *     RawPerformDevIoCtrl @ 0x140805964 (RawPerformDevIoCtrl.c)
 *     VhdVerifyBootDisk @ 0x1408AC46C (VhdVerifyBootDisk.c)
 *     VhdiMountVhdFile @ 0x1408AC820 (VhdiMountVhdFile.c)
 *     IopInvalidateVolumesForDevice @ 0x14091958C (IopInvalidateVolumesForDevice.c)
 *     IoVolumeDeviceToDosName @ 0x1409205E0 (IoVolumeDeviceToDosName.c)
 *     FsRtlGetSectorSizeInformation @ 0x140A2EE50 (FsRtlGetSectorSizeInformation.c)
 *     FsRtlIssueDeviceIoControl @ 0x140A2F470 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140A2FD20 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140A30100 (IoVolumeDeviceNameToGuidPath.c)
 *     NtApphelpCacheControl @ 0x140A30790 (NtApphelpCacheControl.c)
 *     FsRtlQueryCachedVdl @ 0x140ABA7B0 (FsRtlQueryCachedVdl.c)
 *     IopGetSetObjectId @ 0x140AD0E98 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140AD0FDC (IopGetVolumeId.c)
 *     IopCreateArcName @ 0x140B1EBE8 (IopCreateArcName.c)
 *     RawQueryFsSizeInfo @ 0x140B28108 (RawQueryFsSizeInfo.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140B28C70 (HalpQueryAcpiRealTimeClock.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140B3B354 (FsRtlIssueFileNotificationFsctl.c)
 *     HalpCallWakeAlarmDriver @ 0x140B45E18 (HalpCallWakeAlarmDriver.c)
 *     IopCreateArcNamesCd @ 0x140CC26E4 (IopCreateArcNamesCd.c)
 *     IopFormatBootDevice @ 0x140CC3180 (IopFormatBootDevice.c)
 *     IopStoreBootDriveLetter @ 0x140CC4270 (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140CC4748 (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140D098DC (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140D09AC8 (SbpStartLanman.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14026A720 (IopBuildDeviceIoControlRequest.c)
 */

PIRP __stdcall IoBuildDeviceIoControlRequest(
        ULONG IoControlCode,
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        BOOLEAN InternalDeviceIoControl,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  void *retaddr; // [rsp+58h] [rbp+0h]

  return (PIRP)IopBuildDeviceIoControlRequest(
                 IoControlCode,
                 DeviceObject,
                 InputBuffer,
                 InputBufferLength,
                 OutputBuffer,
                 OutputBufferLength,
                 InternalDeviceIoControl,
                 Event,
                 IoStatusBlock,
                 retaddr);
}
