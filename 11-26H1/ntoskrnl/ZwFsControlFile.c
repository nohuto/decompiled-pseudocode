/*
 * XREFs of ZwFsControlFile @ 0x140723B10
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140404DD0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     DifZwFsControlFileWrapper @ 0x1406A6FB0 (DifZwFsControlFileWrapper.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14078E338 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x1407C589C (PfpQueryFileExtentsRequest.c)
 *     PopCreateHiberFile @ 0x1407CFB0C (PopCreateHiberFile.c)
 *     CmpHiveCacheAcknowledgeOplockBreak @ 0x140861AA0 (CmpHiveCacheAcknowledgeOplockBreak.c)
 *     CmpRequestOplockOnHiveFile @ 0x140862648 (CmpRequestOplockOnHiveFile.c)
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x140ACBD70 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x140B018A0 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x140B1AEA0 (PopClearHiberFileSignature.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFsControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, Event);
}
