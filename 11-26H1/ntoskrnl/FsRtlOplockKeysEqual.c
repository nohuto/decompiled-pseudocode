/*
 * XREFs of FsRtlOplockKeysEqual @ 0x1403FB450
 * Callers:
 *     FsRtlpBreakRHOplocksForNonCachedIo @ 0x140B6E340 (FsRtlpBreakRHOplocksForNonCachedIo.c)
 * Callees:
 *     FsRtlpOplockKeysEqual @ 0x1403FB470 (FsRtlpOplockKeysEqual.c)
 */

BOOLEAN __stdcall FsRtlOplockKeysEqual(PFILE_OBJECT Fo1, PFILE_OBJECT Fo2)
{
  return FsRtlpOplockKeysEqual(Fo1, Fo2, 0LL);
}
