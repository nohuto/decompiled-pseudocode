/*
 * XREFs of ResFwpPageInBackground @ 0x140C56F60
 * Callers:
 *     ResFwBackgroundTransition @ 0x140C5AF20 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx

  if ( (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xC00) != 0xC00
    && (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x100000) == 0 )
  {
    if ( *(_QWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[160] )
    {
      Memory = (void *)BgpFwAllocateMemory(*(unsigned int *)&gLoadedDiffHivesLock.WaitBlockFill11[168]);
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(
          Memory,
          *(const void **)&gLoadedDiffHivesLock.WaitBlockFill11[160],
          *(unsigned int *)&gLoadedDiffHivesLock.WaitBlockFill11[168]);
        BgpFwAcquireLock();
        if ( gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64(
            (volatile __int64 *)&gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink,
            (__int64)Memory);
      }
    }
  }
}
