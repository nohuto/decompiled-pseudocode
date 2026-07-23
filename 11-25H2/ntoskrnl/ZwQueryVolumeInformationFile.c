/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x14069BA60
 * Callers:
 *     DifZwQueryVolumeInformationFileWrapper @ 0x14063AC30 (DifZwQueryVolumeInformationFileWrapper.c)
 *     PfpQueryFileExtentsRequest @ 0x140739C28 (PfpQueryFileExtentsRequest.c)
 *     SmKmIsVolumeIoPossible @ 0x14078A928 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14078B380 (SmKmStoreFileCreate.c)
 *     CmpGetVolumeClusterSize @ 0x1409105D0 (CmpGetVolumeClusterSize.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x140910C88 (CmpGetVolumeLogFileSizeCap.c)
 *     EtwpCreateLogFile @ 0x140991804 (EtwpCreateLogFile.c)
 *     EtwpFinalizeHeader @ 0x140992E74 (EtwpFinalizeHeader.c)
 *     PopValidateHiberFileSize @ 0x140A764E8 (PopValidateHiberFileSize.c)
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
  return KiServiceInternal(FileHandle);
}
