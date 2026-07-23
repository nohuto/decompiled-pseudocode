/*
 * XREFs of ZwSetInformationFile @ 0x1407284A0
 * Callers:
 *     DifZwSetInformationFileWrapper @ 0x1406BDA00 (DifZwSetInformationFileWrapper.c)
 *     CmpDeleteCorruptedFile @ 0x1406E7E18 (CmpDeleteCorruptedFile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1407A6880 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1407B7400 (IopFileUtilClearAttributes.c)
 *     PopCreateHiberFile @ 0x1407D2BAC (PopCreateHiberFile.c)
 *     EtwpSavePersistedLogger @ 0x140834B24 (EtwpSavePersistedLogger.c)
 *     CmpCmdRenameHive @ 0x14085AD28 (CmpCmdRenameHive.c)
 *     CmpFlushBackupHive @ 0x140860750 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x140860DC0 (CmpWriteOffsetArrayToFile.c)
 *     MiGetPagingFileHandle @ 0x140871CE8 (MiGetPagingFileHandle.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     CmpCmdHiveClose @ 0x1408BE78C (CmpCmdHiveClose.c)
 *     EtwpUpdateFileHeader @ 0x140A15D84 (EtwpUpdateFileHeader.c)
 *     EtwpCreateLogFile @ 0x140A16128 (EtwpCreateLogFile.c)
 *     CmpDoFileSetSizeEx @ 0x140AA7F58 (CmpDoFileSetSizeEx.c)
 *     EtwpFinalizeHeader @ 0x140ABCAB0 (EtwpFinalizeHeader.c)
 *     PopResizeHiberFile @ 0x140B0316C (PopResizeHiberFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x140B4652C (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeSaveState @ 0x140B60190 (EtwpRealtimeSaveState.c)
 *     IopFileUtilRename @ 0x140CCDA20 (IopFileUtilRename.c)
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
