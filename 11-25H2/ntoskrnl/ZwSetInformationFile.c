/*
 * XREFs of ZwSetInformationFile @ 0x14069B620
 * Callers:
 *     DifZwSetInformationFileWrapper @ 0x14063C320 (DifZwSetInformationFileWrapper.c)
 *     CmpDeleteCorruptedFile @ 0x14065D1D8 (CmpDeleteCorruptedFile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140716790 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14072953C (IopFileUtilClearAttributes.c)
 *     PopCreateHiberFile @ 0x140745C64 (PopCreateHiberFile.c)
 *     SmKmStoreFileCreate @ 0x14078B380 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14078BAEC (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x1407A0A90 (EtwpSavePersistedLogger.c)
 *     CmpCmdRenameHive @ 0x1407C61E4 (CmpCmdRenameHive.c)
 *     CmpFlushBackupHive @ 0x1407CCAF8 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x1407CD17C (CmpWriteOffsetArrayToFile.c)
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 *     CmpCmdHiveClose @ 0x140885694 (CmpCmdHiveClose.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x14098F964 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpCreateLogFile @ 0x140991804 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x140991CA0 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x140992E74 (EtwpFinalizeHeader.c)
 *     CmpDoFileSetSizeEx @ 0x1409F8288 (CmpDoFileSetSizeEx.c)
 *     PopResizeHiberFile @ 0x140A76280 (PopResizeHiberFile.c)
 *     EtwpRealtimeSaveState @ 0x140AA5500 (EtwpRealtimeSaveState.c)
 *     IopFileUtilRename @ 0x140C1537C (IopFileUtilRename.c)
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
  return KiServiceInternal(FileHandle);
}
