/*
 * XREFs of AnFwFadeCompletion @ 0x140C52980
 * Callers:
 *     BgpConsoleDisplayCharacter @ 0x140C4FE00 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140C501C0 (BgpConsoleDisplayString.c)
 *     BgpFwLibraryDisable @ 0x140C50AAC (BgpFwLibraryDisable.c)
 *     ResFwFreeContext @ 0x140C528B8 (ResFwFreeContext.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404F84EC (BgpFwQueryPerformanceCounter.c)
 *     BgpGxRectangleDestroy @ 0x140C53414 (BgpGxRectangleDestroy.c)
 */

void AnFwFadeCompletion()
{
  if ( (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xC00) != 0xC00 )
  {
    WheapPfaLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)BgpFwQueryPerformanceCounter(0LL).QuadPart;
    *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[24] = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E64FC8;
    WheapPfaLock.SchedulerApc.SystemArgument1 = *(PVOID *)&WheapPfaLock.PriorityFloorCounts[24];
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140E64F70, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140E0EF88 )
    {
      BgpGxRectangleDestroy(qword_140E0EF88);
      qword_140E0EF88 = 0LL;
    }
    if ( qword_140E0EFB8 )
    {
      BgpGxRectangleDestroy(qword_140E0EFB8);
      qword_140E0EFB8 = 0LL;
    }
    if ( qword_140E0EFC0 )
    {
      BgpGxRectangleDestroy(qword_140E0EFC0);
      qword_140E0EFC0 = 0LL;
    }
    if ( qword_140E0EFC8 )
    {
      BgpGxRectangleDestroy(qword_140E0EFC8);
      qword_140E0EFC8 = 0LL;
    }
    if ( qword_140E0EFF8 )
    {
      BgpGxRectangleDestroy(qword_140E0EFF8);
      qword_140E0EFF8 = 0LL;
    }
    if ( qword_140E0F000 )
    {
      BgpGxRectangleDestroy(qword_140E0F000);
      qword_140E0F000 = 0LL;
    }
  }
}
