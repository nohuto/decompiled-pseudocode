/*
 * XREFs of ZwWriteFile @ 0x14069B240
 * Callers:
 *     IopLiveDumpWriteBuffer @ 0x14049AE5C (IopLiveDumpWriteBuffer.c)
 *     DifZwWriteFileWrapper @ 0x14063DF30 (DifZwWriteFileWrapper.c)
 *     DbgkpWerWriteSecondaryData @ 0x1406FD11C (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x1406FD280 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140705934 (IopBootLogToFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x140773C28 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x14078C220 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x1407A0A90 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x1407A1280 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1407A1450 (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x1407B39A0 (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x14081FBFC (LkmdTelpWriteDumpFile.c)
 *     CmpDoFileWrite @ 0x14091083C (CmpDoFileWrite.c)
 *     EtwpFlushBufferToLogfile @ 0x1409912C0 (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveBuffer @ 0x1409915A8 (EtwpRealtimeSaveBuffer.c)
 *     EtwpUpdateFileHeader @ 0x140991CA0 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x140992E74 (EtwpFinalizeHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140A1CCD4 (RtlpGetSetBootStatusData.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A5D6D0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     SshpSessionManagerWriteBytes @ 0x140A5DABC (SshpSessionManagerWriteBytes.c)
 *     EtwpRealtimeSaveState @ 0x140AA5500 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeRestoreState @ 0x140AA9764 (EtwpRealtimeRestoreState.c)
 *     KdpWriteFileCallback @ 0x140B66EC0 (KdpWriteFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C2DF80 (BapdpProcessVsmKeyBlobs.c)
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
