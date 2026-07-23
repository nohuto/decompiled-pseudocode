/*
 * XREFs of ZwCreateFile @ 0x140728A60
 * Callers:
 *     DifZwCreateFileWrapper @ 0x1404B9E70 (DifZwCreateFileWrapper.c)
 *     RtlFileMapInitializeByNtPath @ 0x1404FBA70 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x14061B4E0 (LdrpMapResourceFile.c)
 *     CmpDeleteCorruptedFile @ 0x1406E7E18 (CmpDeleteCorruptedFile.c)
 *     FsRtlpOpenDev @ 0x140790D90 (FsRtlpOpenDev.c)
 *     IopBootLogToFile @ 0x140796CF4 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x1407A35DC (PiCreateDirectoryPath.c)
 *     PopGetPolicyDeviceObject @ 0x1407DAC48 (PopGetPolicyDeviceObject.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x14085D8EC (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpInitBackupHive @ 0x140860B28 (CmpInitBackupHive.c)
 *     SdbpGetFileTimestamp @ 0x140887374 (SdbpGetFileTimestamp.c)
 *     VhdiMountVhdFile @ 0x1408AC820 (VhdiMountVhdFile.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     EtwpDelayCreate @ 0x140A15A94 (EtwpDelayCreate.c)
 *     CmpVolumeContextStart @ 0x140A2E678 (CmpVolumeContextStart.c)
 *     CmpIsFileInSystemConfig @ 0x140A80290 (CmpIsFileInSystemConfig.c)
 *     PspIoRateEntryActivate @ 0x140ABECE0 (PspIoRateEntryActivate.c)
 *     EtwpCreateDirectoryFile @ 0x140AF9AF8 (EtwpCreateDirectoryFile.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140B6780C (ExpGetSystemWriteConstraintInformation.c)
 *     PopFlushVolumeWorker @ 0x140C0CC70 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x140C195E0 (KdpCreateFileCallback.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140CC9C90 (PiCreateDriverDataDirectoryRoot.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE8DD8 (BapdpProcessVsmKeyBlobs.c)
 *     EmInitSystem @ 0x140D0DE84 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(FileHandle);
}
