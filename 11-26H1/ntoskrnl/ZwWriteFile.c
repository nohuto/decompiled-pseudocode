/*
 * XREFs of ZwWriteFile @ 0x1407280C0
 * Callers:
 *     IopLiveDumpWriteBuffer @ 0x140346114 (IopLiveDumpWriteBuffer.c)
 *     DifZwWriteFileWrapper @ 0x1406C38E0 (DifZwWriteFileWrapper.c)
 *     DbgkpWerWriteSecondaryData @ 0x14078F0D4 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x14078F248 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140796CF4 (IopBootLogToFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x14080B528 (RtlRestoreBootStatusDefaults.c)
 *     EtwpSavePersistedLogger @ 0x140834B24 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x140835324 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1408354E0 (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x140848958 (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x1408B1DC0 (LkmdTelpWriteDumpFile.c)
 *     EtwpFlushBufferToLogfile @ 0x140A14718 (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveBuffer @ 0x140A14D18 (EtwpRealtimeSaveBuffer.c)
 *     EtwpUpdateFileHeader @ 0x140A15D84 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x140ABCAB0 (EtwpFinalizeHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140ACDD60 (RtlpGetSetBootStatusData.c)
 *     CmpDoFileWrite @ 0x140AE48C8 (CmpDoFileWrite.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140AFE4F0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     SshpSessionManagerWriteBytes @ 0x140AFE92C (SshpSessionManagerWriteBytes.c)
 *     EtwpRealtimeRestoreState @ 0x140B561BC (EtwpRealtimeRestoreState.c)
 *     EtwpRealtimeSaveState @ 0x140B60190 (EtwpRealtimeSaveState.c)
 *     KdpWriteFileCallback @ 0x140C19C80 (KdpWriteFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE8DD8 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
