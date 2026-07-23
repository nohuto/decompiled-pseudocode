/*
 * XREFs of BgpFwAcquireLock @ 0x1404E11C4
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x1404FB4C4 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x1405E9FA0 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x1405EA964 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x14071A6C0 (BgDisplaySafeToPowerOffScreen.c)
 *     BgLibraryEnable @ 0x14071A6F8 (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x14071A770 (BgQueryBootGraphicsInformation.c)
 *     BgSetBootGraphicsInformation @ 0x14071A7DC (BgSetBootGraphicsInformation.c)
 *     BgkDrawText @ 0x140C5564C (BgkDrawText.c)
 *     BgAcquireSpinLock @ 0x140C558F8 (BgAcquireSpinLock.c)
 *     BgDisplayBackgroundUpdate @ 0x140C55930 (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140C5596C (BgDisplayProgressIndicator.c)
 *     BgFreeContext @ 0x140C559A8 (BgFreeContext.c)
 *     BgGetContext @ 0x140C559EC (BgGetContext.c)
 *     BgLibraryDestroy @ 0x140C55A68 (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x140C55B00 (BgMarkHiberPhase.c)
 *     BgConsoleDestroyInterface @ 0x140C55C94 (BgConsoleDestroyInterface.c)
 *     BgConsoleGetInterface @ 0x140C55CF4 (BgConsoleGetInterface.c)
 *     BgpConsoleClearScreen @ 0x140C55D40 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140C55E00 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140C561C0 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x140C56340 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x140C563B0 (BgpConsoleGetState.c)
 *     BgpConsoleInitialize @ 0x140C56420 (BgpConsoleInitialize.c)
 *     BgpConsoleSetCursor @ 0x140C56890 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140C56940 (BgpConsoleSetTextColor.c)
 *     ResFwpDestroyBackground @ 0x140C56EEC (ResFwpDestroyBackground.c)
 *     ResFwpPageInBackground @ 0x140C56F60 (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x140C56FE4 (ResFwpPageOutBackground.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140C57580 (AnFwpBackgroundUpdateTimer.c)
 *     AnFwpFadeAnimationTimer @ 0x140C58350 (AnFwpFadeAnimationTimer.c)
 *     AnFwFadeCompletion @ 0x140C58980 (AnFwFadeCompletion.c)
 *     BgDisplayFade @ 0x140C58B58 (BgDisplayFade.c)
 *     AnFwpProgressIndicatorTimer @ 0x140C5A340 (AnFwpProgressIndicatorTimer.c)
 *     BgpFwLibraryInitialize @ 0x140C5A5B8 (BgpFwLibraryInitialize.c)
 *     BgLibraryDisable @ 0x140C5AEE4 (BgLibraryDisable.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void BgpFwAcquireLock()
{
  __int64 v0; // rcx
  unsigned __int8 CurrentIrql; // bl

  v0 = 3072LL;
  if ( (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xC00) != 0xC00 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      while ( qword_140E64FD0 )
        _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v0) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v0, 2LL);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E64FD0, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140E64FD0);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&qword_140E64FD0);
    }
    stru_140E3EAA8.WaitBlockFill7[146] = CurrentIrql;
  }
}
