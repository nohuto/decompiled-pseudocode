/*
 * XREFs of ZwCreateFile @ 0x14069BBE0
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x1404C9B8C (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x1405DB9FC (LdrpMapResourceFile.c)
 *     DifZwCreateFileWrapper @ 0x140631970 (DifZwCreateFileWrapper.c)
 *     CmpDeleteCorruptedFile @ 0x14065D1D8 (CmpDeleteCorruptedFile.c)
 *     FsRtlpOpenDev @ 0x1406FED2C (FsRtlpOpenDev.c)
 *     IopBootLogToFile @ 0x140705934 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x1407132DC (PiCreateDirectoryPath.c)
 *     PopGetPolicyDeviceObject @ 0x14074DFB0 (PopGetPolicyDeviceObject.c)
 *     SmKmStoreFileOpenVolume @ 0x14078C080 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14078F050 (SmpUtilsGetControlDevice.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407A53D8 (ExpGetSystemWriteConstraintInformation.c)
 *     CmpVolumeContextStart @ 0x1407C91D0 (CmpVolumeContextStart.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407C9398 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpInitBackupHive @ 0x1407CCEE4 (CmpInitBackupHive.c)
 *     CmpIsFileInSystemConfig @ 0x1407D2330 (CmpIsFileInSystemConfig.c)
 *     SdbpGetFileTimestamp @ 0x1407F139C (SdbpGetFileTimestamp.c)
 *     VhdiMountVhdFile @ 0x14081A2D0 (VhdiMountVhdFile.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     EtwpDelayCreate @ 0x1409927F8 (EtwpDelayCreate.c)
 *     PspIoRateEntryActivate @ 0x140A3B3A4 (PspIoRateEntryActivate.c)
 *     EtwpCreateDirectoryFile @ 0x140A55A04 (EtwpCreateDirectoryFile.c)
 *     PopFlushVolumeWorker @ 0x140B5CB30 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x140B66830 (KdpCreateFileCallback.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140C116BC (PiCreateDriverDataDirectoryRoot.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C2DF80 (BapdpProcessVsmKeyBlobs.c)
 *     EmInitSystem @ 0x140C4F21C (EmInitSystem.c)
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
