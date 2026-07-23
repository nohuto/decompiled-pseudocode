/*
 * XREFs of ResFwpPageOutBackground @ 0x140C56FE4
 * Callers:
 *     ResFwFreeContext @ 0x140C588B8 (ResFwFreeContext.c)
 *     ResFwBackgroundTransition @ 0x140C5AF20 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void ResFwpPageOutBackground()
{
  struct _LIST_ENTRY *Blink; // rsi
  void *Pool2; // rax
  void *v2; // rdi

  if ( (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xC00) != 0xC00 )
  {
    Blink = gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink;
    if ( gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink )
    {
      if ( *(_QWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[160] )
      {
LABEL_7:
        _InterlockedExchange64((volatile __int64 *)&gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink, 0LL);
        BgpFwFreeMemory((__int64)Blink);
        return;
      }
      BgpFwReleaseLock();
      Pool2 = (void *)ExAllocatePool2(256LL, *(unsigned int *)&gLoadedDiffHivesLock.WaitBlockFill11[168], 0x4B494742u);
      v2 = Pool2;
      if ( Pool2 )
      {
        memmove(
          Pool2,
          gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink,
          *(unsigned int *)&gLoadedDiffHivesLock.WaitBlockFill11[168]);
        BgpFwAcquireLock();
        if ( !*(_QWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[160] )
        {
          _InterlockedExchange64((volatile __int64 *)&gLoadedDiffHivesLock.WaitBlockFill11[160], (__int64)v2);
          goto LABEL_7;
        }
        BgpFwReleaseLock();
        ExFreePoolWithTag(v2, 0x4B494742u);
      }
      BgpFwAcquireLock();
    }
  }
}
