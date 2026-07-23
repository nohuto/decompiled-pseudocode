/*
 * XREFs of BgMarkHiberPhase @ 0x140C55B00
 * Callers:
 *     BgkResumePrepare @ 0x140BF744C (BgkResumePrepare.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
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
