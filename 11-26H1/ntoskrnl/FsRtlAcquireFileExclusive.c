/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x1409BB640
 * Callers:
 *     CcZeroEndOfLastPage @ 0x1402C6408 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindPostProcess @ 0x140384CD4 (CcWriteBehindPostProcess.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x1409BB670 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject, 0, 0LL);
}
