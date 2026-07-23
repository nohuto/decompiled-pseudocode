/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x140C571F4
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x140C55930 (BgDisplayBackgroundUpdate.c)
 *     BgpFwLibraryDisable @ 0x140C56AAC (BgpFwLibraryDisable.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
 *     BgpClearScreen @ 0x14071A834 (BgpClearScreen.c)
 *     xHalGetInterruptTranslator @ 0x140B25D20 (xHalGetInterruptTranslator.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140C553CC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140C57AD0 (BgpGxDrawBitmapImage.c)
 */

NTSTATUS __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  NTSTATUS result; // eax
  ULONGLONG v2; // rax
  ULONGLONG v3; // rsi
  ULONGLONG v4; // rdi
  ULONGLONG pullResult; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v6; // [rsp+50h] [rbp+18h]

  pullResult = 0LL;
  v6 = 0LL;
  if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x4000000) == 0 )
    return 0;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0;
  }
  if ( WheapPfaLock.SchedulerApc.ApcMode )
    return -1073741823;
  v2 = off_140E00A50();
  result = RtlULongLongMult(v2, 0x3E8uLL, &pullResult);
  if ( result >= 0 )
  {
    v3 = pullResult / v6 + *(_QWORD *)&gLoadedDiffHivesLock.UserAffinityPrimaryGroup;
    v4 = pullResult / v6;
    if ( v3 < pullResult / v6 )
      return -1073741675;
    DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v4);
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v3);
    if ( *(_QWORD *)&gLoadedDiffHivesLock.UserAffinityPrimaryGroup < 0x64uLL )
    {
      BgpClearScreen(HIDWORD(gLoadedDiffHivesLock.MutantListHead.Blink));
      DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v4);
      result = BgpGxDrawBitmapImage(
                 gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink,
                 &gLoadedDiffHivesLock.WaitBlockFill11[172]);
      if ( result >= 0 )
        return result;
      return BgpClearScreen(HIDWORD(gLoadedDiffHivesLock.MutantListHead.Blink));
    }
    *(_QWORD *)&gLoadedDiffHivesLock.UserAffinityPrimaryGroup = v3;
    KeInitializeTimer(&stru_140E65070);
    KeInitializeDpc(&stru_140E65130, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_140E65070, 0LL, 0x64u, 0, &stru_140E65130) )
    {
      KeCancelTimer(&stru_140E65070);
      WheapPfaLock.SchedulerApc.ApcMode = 0;
      return BgpClearScreen(HIDWORD(gLoadedDiffHivesLock.MutantListHead.Blink));
    }
    WheapPfaLock.SchedulerApc.ApcMode = 1;
    return 0;
  }
  return result;
}
