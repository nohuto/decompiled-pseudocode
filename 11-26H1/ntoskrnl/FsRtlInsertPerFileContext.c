/*
 * XREFs of FsRtlInsertPerFileContext @ 0x1405B80A0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlInsertPerFileContextWithReserve @ 0x140488BE0 (FsRtlInsertPerFileContextWithReserve.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileContext(PVOID *PerFileContextPointer, PFSRTL_PER_FILE_CONTEXT Ptr)
{
  return FsRtlInsertPerFileContextWithReserve((volatile signed __int64 *)PerFileContextPointer, &Ptr->Links, 0);
}
