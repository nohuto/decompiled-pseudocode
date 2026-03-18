/*
 * XREFs of ZwFlushBuffersFile @ 0x140723D50
 * Callers:
 *     CmpDoFileFlush @ 0x1404CF9CC (CmpDoFileFlush.c)
 *     DifZwFlushBuffersFileWrapper @ 0x1406A6540 (DifZwFlushBuffersFileWrapper.c)
 *     PopCreateHiberFile @ 0x1407CFB0C (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x140858C90 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x14085AACC (CmpWriteOffsetArrayToFile.c)
 *     RtlpGetSetBootStatusData @ 0x140ACBB20 (RtlpGetSetBootStatusData.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140AFC980 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     PopFlushVolumeWorker @ 0x140C06A60 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
