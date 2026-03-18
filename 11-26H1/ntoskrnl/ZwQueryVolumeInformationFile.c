/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x140723D10
 * Callers:
 *     DifZwQueryVolumeInformationFileWrapper @ 0x1406B4E60 (DifZwQueryVolumeInformationFileWrapper.c)
 *     PfpQueryFileExtentsRequest @ 0x1407C589C (PfpQueryFileExtentsRequest.c)
 *     CmpGetVolumeClusterSize @ 0x1408B685C (CmpGetVolumeClusterSize.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1408B6BA0 (CmpGetVolumeLogFileSizeCap.c)
 *     EtwpCreateLogFile @ 0x140A15DA4 (EtwpCreateLogFile.c)
 *     EtwpFinalizeHeader @ 0x140A16CB0 (EtwpFinalizeHeader.c)
 *     PopValidateHiberFileSize @ 0x140B01614 (PopValidateHiberFileSize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
