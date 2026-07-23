/*
 * XREFs of ResFwpDestroyBackground @ 0x140C56EEC
 * Callers:
 *     ResFwBackgroundTransition @ 0x140C5AF20 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void ResFwpDestroyBackground()
{
  struct _LIST_ENTRY *Blink; // rcx
  void *v1; // rbx

  if ( (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xC00) != 0xC00 )
  {
    Blink = gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink;
    if ( gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink )
    {
      _InterlockedExchange64((volatile __int64 *)&gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink, 0LL);
      BgpFwFreeMemory((__int64)Blink);
    }
    v1 = *(void **)&gLoadedDiffHivesLock.WaitBlockFill11[160];
    if ( *(_QWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[160] )
    {
      _InterlockedExchange64((volatile __int64 *)&gLoadedDiffHivesLock.WaitBlockFill11[160], 0LL);
      BgpFwReleaseLock();
      ExFreePoolWithTag(v1, 0x4B494742u);
      BgpFwAcquireLock();
    }
    *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[168] = 0;
  }
}
