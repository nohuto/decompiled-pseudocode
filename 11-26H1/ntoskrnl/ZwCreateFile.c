/*
 * XREFs of ZwCreateFile @ 0x140723E90
 * Callers:
 *     DifZwCreateFileWrapper @ 0x1404C0620 (DifZwCreateFileWrapper.c)
 *     RtlFileMapInitializeByNtPath @ 0x1405021A0 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x140618490 (LdrpMapResourceFile.c)
 *     CmpDeleteCorruptedFile @ 0x1406E316C (CmpDeleteCorruptedFile.c)
 *     FsRtlpOpenDev @ 0x14078E260 (FsRtlpOpenDev.c)
 *     IopBootLogToFile @ 0x1407941C4 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x1407A0A9C (PiCreateDirectoryPath.c)
 *     PopGetPolicyDeviceObject @ 0x1407D7628 (PopGetPolicyDeviceObject.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x14085755C (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpInitBackupHive @ 0x14085A834 (CmpInitBackupHive.c)
 *     SdbpGetFileTimestamp @ 0x140880F74 (SdbpGetFileTimestamp.c)
 *     VhdiMountVhdFile @ 0x1408A63B0 (VhdiMountVhdFile.c)
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 *     CmpVolumeContextStart @ 0x140906340 (CmpVolumeContextStart.c)
 *     EtwpDelayCreate @ 0x140A16624 (EtwpDelayCreate.c)
 *     CmpIsFileInSystemConfig @ 0x140A77570 (CmpIsFileInSystemConfig.c)
 *     EtwpCreateDirectoryFile @ 0x140AF7458 (EtwpCreateDirectoryFile.c)
 *     PspIoRateEntryActivate @ 0x140AFB4A4 (PspIoRateEntryActivate.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140B6476C (ExpGetSystemWriteConstraintInformation.c)
 *     PopFlushVolumeWorker @ 0x140C06A60 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x140C135E0 (KdpCreateFileCallback.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140CC3BBC (PiCreateDriverDataDirectoryRoot.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE2A38 (BapdpProcessVsmKeyBlobs.c)
 *     EmInitSystem @ 0x140D07BB4 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, *(_QWORD *)&DesiredAccess);
}
