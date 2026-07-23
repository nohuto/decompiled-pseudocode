/*
 * XREFs of ZwFsControlFile @ 0x1407286E0
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403FDED0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     DifZwFsControlFileWrapper @ 0x1406AAB90 (DifZwFsControlFileWrapper.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140790E68 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x1407C88FC (PfpQueryFileExtentsRequest.c)
 *     PopCreateHiberFile @ 0x1407D2BAC (PopCreateHiberFile.c)
 *     CmpHiveCacheAcknowledgeOplockBreak @ 0x140867E80 (CmpHiveCacheAcknowledgeOplockBreak.c)
 *     CmpRequestOplockOnHiveFile @ 0x140868A28 (CmpRequestOplockOnHiveFile.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x140ACDFB0 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x140B035D0 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x140B1D150 (PopClearHiberFileSignature.c)
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
