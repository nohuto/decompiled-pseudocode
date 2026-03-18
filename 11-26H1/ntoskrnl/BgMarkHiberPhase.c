/*
 * XREFs of BgMarkHiberPhase @ 0x140C4FB00
 * Callers:
 *     BgkResumePrepare @ 0x140BF144C (BgkResumePrepare.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 */

__int64 BgMarkHiberPhase()
{
  unsigned int v0; // ebx
  struct _LIST_ENTRY *i; // rbx

  BgpFwAcquireLock();
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 1) != 0 )
  {
    for ( i = gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Blink;
          i != (struct _LIST_ENTRY *)&gLoadedDiffHivesLock.SavedApcStateFill[8];
          i = i->Flink )
    {
      PoSetHiberRange(0LL, 0x10000u, &i[-1].Blink, (ULONG_PTR)i[1].Blink, 0x4B424742u);
    }
    v0 = 0;
  }
  else
  {
    v0 = -1073741823;
  }
  BgpFwReleaseLock();
  return v0;
}
