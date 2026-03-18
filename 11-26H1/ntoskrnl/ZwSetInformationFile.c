/*
 * XREFs of ZwSetInformationFile @ 0x1407238D0
 * Callers:
 *     DifZwSetInformationFileWrapper @ 0x1406B9E20 (DifZwSetInformationFileWrapper.c)
 *     CmpDeleteCorruptedFile @ 0x1406E316C (CmpDeleteCorruptedFile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1407A3D40 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1407B43A0 (IopFileUtilClearAttributes.c)
 *     PopCreateHiberFile @ 0x1407CFB0C (PopCreateHiberFile.c)
 *     EtwpSavePersistedLogger @ 0x14082E8E4 (EtwpSavePersistedLogger.c)
 *     CmpCmdRenameHive @ 0x140854A18 (CmpCmdRenameHive.c)
 *     CmpFlushBackupHive @ 0x14085A45C (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x14085AACC (CmpWriteOffsetArrayToFile.c)
 *     MiGetPagingFileHandle @ 0x14086B908 (MiGetPagingFileHandle.c)
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 *     CmpCmdHiveClose @ 0x1408B81BC (CmpCmdHiveClose.c)
 *     EtwpCreateLogFile @ 0x140A15DA4 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x140A16280 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x140A16CB0 (EtwpFinalizeHeader.c)
 *     CmpDoFileSetSizeEx @ 0x140AAA978 (CmpDoFileSetSizeEx.c)
 *     PopResizeHiberFile @ 0x140B0143C (PopResizeHiberFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x140B4476C (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeSaveState @ 0x140B5D010 (EtwpRealtimeSaveState.c)
 *     IopFileUtilRename @ 0x140CC7930 (IopFileUtilRename.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
