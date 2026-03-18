/*
 * XREFs of FsRtlFreeFileLock @ 0x1403B4980
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlUninitializeFileLock @ 0x1403B49B0 (FsRtlUninitializeFileLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 */

void __stdcall FsRtlFreeFileLock(PFILE_LOCK FileLock)
{
  FsRtlUninitializeFileLock(FileLock);
  ExFreeToNPagedLookasideList(&FsRtlFileLockLookasideList, FileLock);
}
