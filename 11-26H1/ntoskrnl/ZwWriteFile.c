/*
 * XREFs of ZwWriteFile @ 0x1407234F0
 * Callers:
 *     IopLiveDumpWriteBuffer @ 0x140344094 (IopLiveDumpWriteBuffer.c)
 *     DifZwWriteFileWrapper @ 0x1406BFD00 (DifZwWriteFileWrapper.c)
 *     DbgkpWerWriteSecondaryData @ 0x14078C5A4 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x14078C718 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x1407941C4 (IopBootLogToFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x140805A88 (RtlRestoreBootStatusDefaults.c)
 *     EtwpSavePersistedLogger @ 0x14082E8E4 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x14082F0E4 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x14082F2A0 (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x1408434C8 (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x1408AB97C (LkmdTelpWriteDumpFile.c)
 *     EtwpFlushBufferToLogfile @ 0x140A15524 (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveBuffer @ 0x140A15B24 (EtwpRealtimeSaveBuffer.c)
 *     EtwpUpdateFileHeader @ 0x140A16280 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x140A16CB0 (EtwpFinalizeHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140ACBB20 (RtlpGetSetBootStatusData.c)
 *     CmpDoFileWrite @ 0x140AE6B08 (CmpDoFileWrite.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140AFC980 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     SshpSessionManagerWriteBytes @ 0x140AFCDBC (SshpSessionManagerWriteBytes.c)
 *     EtwpRealtimeRestoreState @ 0x140B5391C (EtwpRealtimeRestoreState.c)
 *     EtwpRealtimeSaveState @ 0x140B5D010 (EtwpRealtimeSaveState.c)
 *     KdpWriteFileCallback @ 0x140C13C80 (KdpWriteFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE2A38 (BapdpProcessVsmKeyBlobs.c)
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
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
