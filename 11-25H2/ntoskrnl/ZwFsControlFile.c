/*
 * XREFs of ZwFsControlFile @ 0x14069B860
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403DB700 (MiTrimUnusedPageFileRegionsWorker.c)
 *     DifZwFsControlFileWrapper @ 0x1406346B0 (DifZwFsControlFileWrapper.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1406FEDF4 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x140739C28 (PfpQueryFileExtentsRequest.c)
 *     PopClearHiberFileSignature @ 0x140745B84 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140745C64 (PopCreateHiberFile.c)
 *     SmKmStoreFileGetExtents @ 0x14078BB88 (SmKmStoreFileGetExtents.c)
 *     CmpHiveCacheAcknowledgeOplockBreak @ 0x1407D538C (CmpHiveCacheAcknowledgeOplockBreak.c)
 *     CmpRequestOplockOnHiveFile @ 0x1407D5F04 (CmpRequestOplockOnHiveFile.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x140A1CA60 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x140A766B0 (PopSanityCheckHiberFile.c)
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
  return KiServiceInternal(FileHandle);
}
