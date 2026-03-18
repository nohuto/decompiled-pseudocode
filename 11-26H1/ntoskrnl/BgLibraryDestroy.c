/*
 * XREFs of BgLibraryDestroy @ 0x140C4FA68
 * Callers:
 *     BgkDestroy @ 0x140C4F454 (BgkDestroy.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     BgpFwLibraryDestroy @ 0x140C509EC (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  __int16 v1; // bx
  unsigned int v2; // edi

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  v1 = *(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80];
  v2 = 0;
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 1) == 0
    || (gLoadedDiffHivesLock.SuspendEvent.Header.WaitListHead.Blink = 0LL,
        *(_OWORD *)&gLoadedDiffHivesLock.ThreadListEntry.Blink = 0LL,
        v2 = BgpFwLibraryDestroy(),
        (v1 & 0xC00) != 0xC00) )
  {
    BgpFwReleaseLock();
  }
  return v2;
}
