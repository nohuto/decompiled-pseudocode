/*
 * XREFs of FsRtlFastUnlockAll @ 0x1403B5AA0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlPrivateFastUnlockAll @ 0x1403B5AC4 (FsRtlPrivateFastUnlockAll.c)
 */

NTSTATUS __stdcall FsRtlFastUnlockAll(PFILE_LOCK FileLock, PFILE_OBJECT FileObject, PEPROCESS ProcessId, PVOID Context)
{
  return FsRtlPrivateFastUnlockAll((_DWORD)FileLock, (_DWORD)FileObject, (_DWORD)ProcessId, 0, 0, (__int64)Context);
}
