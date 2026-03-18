/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x140C51580
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     RtlULongLongMult @ 0x1404655A0 (RtlULongLongMult.c)
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     BgpClearScreen @ 0x140715B44 (BgpClearScreen.c)
 *     xHalGetInterruptTranslator @ 0x140B23920 (xHalGetInterruptTranslator.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140C4F3CC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140C51AD0 (BgpGxDrawBitmapImage.c)
 *     AnFwpDisableProgressTimer @ 0x140C5332C (AnFwpDisableProgressTimer.c)
 */

void __fastcall AnFwpBackgroundUpdateTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONGLONG v4; // rax
  ULONGLONG v5; // rbx
  ULONGLONG pullResult; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  pullResult = 0LL;
  v7 = 0LL;
  v4 = off_140E00A50();
  if ( RtlULongLongMult(v4, 0x3E8uLL, &pullResult) >= 0 )
  {
    v5 = pullResult / v7;
    BgpFwAcquireLock();
    if ( v5 >= *(_QWORD *)&gLoadedDiffHivesLock.UserAffinityPrimaryGroup )
    {
      if ( WheapPfaLock.SchedulerApc.Type )
      {
        AnFwpDisableProgressTimer();
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v5);
        if ( gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink )
        {
          BgpClearScreen(HIDWORD(gLoadedDiffHivesLock.MutantListHead.Blink));
          if ( (int)BgpGxDrawBitmapImage(
                      gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink,
                      &gLoadedDiffHivesLock.WaitBlockFill11[172]) < 0 )
            BgpClearScreen(HIDWORD(gLoadedDiffHivesLock.MutantListHead.Blink));
        }
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock();
  }
}
