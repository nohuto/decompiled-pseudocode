/*
 * XREFs of ZwFlushBuffersFile @ 0x140728920
 * Callers:
 *     CmpDoFileFlush @ 0x1404C93FC (CmpDoFileFlush.c)
 *     DifZwFlushBuffersFileWrapper @ 0x1406AA120 (DifZwFlushBuffersFileWrapper.c)
 *     PopCreateHiberFile @ 0x1407D2BAC (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x14085F020 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x140860DC0 (CmpWriteOffsetArrayToFile.c)
 *     RtlpGetSetBootStatusData @ 0x140ACDD60 (RtlpGetSetBootStatusData.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140AFE4F0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     PopFlushVolumeWorker @ 0x140C0CC70 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
