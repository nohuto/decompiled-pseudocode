/*
 * XREFs of FsRtlInsertPerFileContext @ 0x1405B5890
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlInsertPerFileContextWithReserve @ 0x14048F0A0 (FsRtlInsertPerFileContextWithReserve.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileContext(PVOID *PerFileContextPointer, PFSRTL_PER_FILE_CONTEXT Ptr)
{
  struct _KLOCK_ENTRIES *v2; // r9

  return FsRtlInsertPerFileContextWithReserve((volatile signed __int64 *)PerFileContextPointer, &Ptr->Links, 0LL, v2);
}
