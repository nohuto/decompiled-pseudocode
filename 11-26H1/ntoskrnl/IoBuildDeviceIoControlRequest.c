/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x14026B150
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1404D09E0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     HalpSetAcpiRealTimeClock @ 0x1407802AC (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1407852F4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     FsRtlBalanceReads @ 0x14078E080 (FsRtlBalanceReads.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140790B50 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x140795094 (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x140795B5C (IopSetRemoteLink.c)
 *     IoCheckPagefileDisableReservations @ 0x140795E9C (IoCheckPagefileDisableReservations.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14079AEA8 (IopIssueSystemEnvironmentRequest.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1407D7814 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopEtDeferredInitDxgContext @ 0x1407DBBE0 (PopEtDeferredInitDxgContext.c)
 *     RawPerformDevIoCtrl @ 0x1407FFF34 (RawPerformDevIoCtrl.c)
 *     VhdVerifyBootDisk @ 0x1408A5FFC (VhdVerifyBootDisk.c)
 *     VhdiMountVhdFile @ 0x1408A63B0 (VhdiMountVhdFile.c)
 *     FsRtlGetSectorSizeInformation @ 0x140906BF0 (FsRtlGetSectorSizeInformation.c)
 *     FsRtlIssueDeviceIoControl @ 0x140907210 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140907BC0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140907FA0 (IoVolumeDeviceNameToGuidPath.c)
 *     NtApphelpCacheControl @ 0x140908630 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x1409FB9E0 (IoVolumeDeviceToDosName.c)
 *     IopInvalidateVolumesForDevice @ 0x140A34D8C (IopInvalidateVolumesForDevice.c)
 *     FsRtlQueryCachedVdl @ 0x140AB9390 (FsRtlQueryCachedVdl.c)
 *     IopGetSetObjectId @ 0x140ACEC58 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140ACED9C (IopGetVolumeId.c)
 *     IopCreateArcName @ 0x140B1C9D8 (IopCreateArcName.c)
 *     RawQueryFsSizeInfo @ 0x140B25EA8 (RawQueryFsSizeInfo.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140B26A10 (HalpQueryAcpiRealTimeClock.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140B39144 (FsRtlIssueFileNotificationFsctl.c)
 *     HalpCallWakeAlarmDriver @ 0x140B43F28 (HalpCallWakeAlarmDriver.c)
 *     IopCreateArcNamesCd @ 0x140CBC66C (IopCreateArcNamesCd.c)
 *     IopFormatBootDevice @ 0x140CBD110 (IopFormatBootDevice.c)
 *     IopStoreBootDriveLetter @ 0x140CBE1A0 (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140CBE678 (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140D0360C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140D037F8 (SbpStartLanman.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14026B1B0 (IopBuildDeviceIoControlRequest.c)
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
