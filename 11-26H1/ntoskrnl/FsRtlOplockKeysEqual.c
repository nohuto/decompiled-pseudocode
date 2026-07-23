/*
 * XREFs of FsRtlOplockKeysEqual @ 0x1403F7C40
 * Callers:
 *     FsRtlpBreakRHOplocksForNonCachedIo @ 0x140B717F0 (FsRtlpBreakRHOplocksForNonCachedIo.c)
 * Callees:
 *     FsRtlpOplockKeysEqual @ 0x1403F7C60 (FsRtlpOplockKeysEqual.c)
 */

BOOLEAN __stdcall FsRtlOplockKeysEqual(PFILE_OBJECT Fo1, PFILE_OBJECT Fo2)
{
  return FsRtlpOplockKeysEqual(Fo1, Fo2, 0LL);
}
