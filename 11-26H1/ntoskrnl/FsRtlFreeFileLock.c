/*
 * XREFs of FsRtlFreeFileLock @ 0x1403BE880
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlUninitializeFileLock @ 0x1403BE8B0 (FsRtlUninitializeFileLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 */

void __stdcall FsRtlFreeFileLock(PFILE_LOCK FileLock)
{
  FsRtlUninitializeFileLock(FileLock);
  ExFreeToNPagedLookasideList(&FsRtlFileLockLookasideList, FileLock);
}
