/*
 * XREFs of AnFwFadeCompletion @ 0x140C58980
 * Callers:
 *     BgpConsoleDisplayCharacter @ 0x140C55E00 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140C561C0 (BgpConsoleDisplayString.c)
 *     BgpFwLibraryDisable @ 0x140C56AAC (BgpFwLibraryDisable.c)
 *     ResFwFreeContext @ 0x140C588B8 (ResFwFreeContext.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404F1AFC (BgpFwQueryPerformanceCounter.c)
 *     BgpGxRectangleDestroy @ 0x140C59414 (BgpGxRectangleDestroy.c)
 */

void AnFwFadeCompletion()
{
  if ( (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xC00) != 0xC00 )
  {
    *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorSummary = BgpFwQueryPerformanceCounter(0LL);
    WheapPfaLock.OtherTransferCount = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E651C8;
    WheapPfaLock.SchedulerSharedSystemSlot = (void *)WheapPfaLock.OtherTransferCount;
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140E65170, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140E0F018 )
    {
      BgpGxRectangleDestroy(qword_140E0F018);
      qword_140E0F018 = 0LL;
    }
    if ( qword_140E0F048 )
    {
      BgpGxRectangleDestroy(qword_140E0F048);
      qword_140E0F048 = 0LL;
    }
    if ( qword_140E0F050 )
    {
      BgpGxRectangleDestroy(qword_140E0F050);
      qword_140E0F050 = 0LL;
    }
    if ( qword_140E0F058 )
    {
      BgpGxRectangleDestroy(qword_140E0F058);
      qword_140E0F058 = 0LL;
    }
    if ( qword_140E0F088 )
    {
      BgpGxRectangleDestroy(qword_140E0F088);
      qword_140E0F088 = 0LL;
    }
    if ( qword_140E0F090 )
    {
      BgpGxRectangleDestroy(qword_140E0F090);
      qword_140E0F090 = 0LL;
    }
  }
}
