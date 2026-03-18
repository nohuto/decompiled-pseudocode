/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x140C51380
 * Callers:
 *     BgDisplayProgressIndicator @ 0x140C4F96C (BgDisplayProgressIndicator.c)
 *     BgpFwLibraryDisable @ 0x140C50AAC (BgpFwLibraryDisable.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219B40 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x140483D00 (KeInitializeTimer.c)
 *     BgpTxtDisplayCharacter @ 0x1404AD084 (BgpTxtDisplayCharacter.c)
 *     AnFwpProgressAnimationManual @ 0x140C51650 (AnFwpProgressAnimationManual.c)
 *     BgpTxtCacheDestroy @ 0x140C52AAC (BgpTxtCacheDestroy.c)
 *     AnFwpDisableProgressTimer @ 0x140C5332C (AnFwpDisableProgressTimer.c)
 *     LogFwStat @ 0x140C54040 (LogFwStat.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(char a1, __int64 a2)
{
  bool v2; // al
  unsigned __int16 i; // ax
  __int64 v5; // rdx

  LOBYTE(a2) = WheapPfaLock.SchedulerApc.SpareByte0;
  if ( !a1 && !WheapPfaLock.SchedulerApc.SpareByte0 )
    return 0LL;
  v2 = 0;
  if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x100000) != 0 )
    v2 = (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x1000) != 0;
  if ( !a1 )
  {
    if ( (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xC00) != 0xC00 && !v2 )
      AnFwpDisableProgressTimer();
    word_140E0F008 = -7989;
    BgpTxtDisplayCharacter(gLoadedDiffHivesLock.NpxState, 57547LL, 0, 0LL, 0LL);
    BgpTxtCacheDestroy();
    return 0LL;
  }
  if ( WheapPfaLock.SchedulerApc.SpareByte0 )
  {
    if ( !v2 )
      return 3221225659LL;
  }
  else
  {
    if ( !gLoadedDiffHivesLock.NpxState )
      return 3221225626LL;
    if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x40000) != 0 )
      return 3221225473LL;
    WheapPfaLock.SchedulerApc.SpareByte0 = 1;
    if ( !v2 )
    {
      word_140E0F008 = word_140E0F014;
      LogFwStat(1LL, 2LL);
      for ( i = word_140E0F008; i <= (unsigned __int16)word_140E0F010; i = ++word_140E0F008 )
        BgpTxtDisplayCharacter(gLoadedDiffHivesLock.NpxState, i, 1, 0LL, 0LL);
      v5 = 57718LL;
      if ( gLoadedDiffHivesLock.SecureThreadCookie != 1 )
        v5 = 57547LL;
      word_140E0F008 = v5;
      BgpTxtDisplayCharacter(gLoadedDiffHivesLock.NpxState, v5, 0, 0LL, 0LL);
      *(_QWORD *)&WheapPfaLock.SavedApcStateFill[40] = LogFwStat(0LL, 2LL);
      KeInitializeTimer(&stru_140E64EB0);
      KeInitializeDpc(&stru_140E64DF0, AnFwpProgressIndicatorTimer, 0LL);
      KeSetCoalescableTimer(&stru_140E64EB0, 0LL, 0x1Eu, 0, &stru_140E64DF0);
      return 0LL;
    }
    *(_QWORD *)&WheapPfaLock.SavedApcStateFill[40] = 0LL;
    word_140E0F008 = word_140E0F014 - 1;
  }
  AnFwpProgressAnimationManual(*(unsigned int *)&gLoadedDiffHivesLock.WaitBlockFill11[80], a2);
  return 0LL;
}
