/*
 * XREFs of ZwFlushBuffersFile @ 0x14069BAA0
 * Callers:
 *     CmpDoFileFlush @ 0x140491E3C (CmpDoFileFlush.c)
 *     DifZwFlushBuffersFileWrapper @ 0x140633F30 (DifZwFlushBuffersFileWrapper.c)
 *     PopCreateHiberFile @ 0x140745C64 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x1407CAB24 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x1407CD17C (CmpWriteOffsetArrayToFile.c)
 *     RtlpGetSetBootStatusData @ 0x140A1CCD4 (RtlpGetSetBootStatusData.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A5D6D0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     PopFlushVolumeWorker @ 0x140B5CB30 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
