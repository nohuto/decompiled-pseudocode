/*
 * XREFs of BgpFwReleaseLock @ 0x1404E81BC
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x140501CD4 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x1405E7630 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x1405E7FF4 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x1407159D0 (BgDisplaySafeToPowerOffScreen.c)
 *     BgLibraryEnable @ 0x140715A08 (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x140715A80 (BgQueryBootGraphicsInformation.c)
 *     BgSetBootGraphicsInformation @ 0x140715AEC (BgSetBootGraphicsInformation.c)
 *     BgkDrawText @ 0x140C4F64C (BgkDrawText.c)
 *     BgDisplayBackgroundUpdate @ 0x140C4F930 (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140C4F96C (BgDisplayProgressIndicator.c)
 *     BgFreeContext @ 0x140C4F9A8 (BgFreeContext.c)
 *     BgGetContext @ 0x140C4F9EC (BgGetContext.c)
 *     BgLibraryDestroy @ 0x140C4FA68 (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x140C4FB00 (BgMarkHiberPhase.c)
 *     BgReleaseSpinLock @ 0x140C4FB70 (BgReleaseSpinLock.c)
 *     BgConsoleDestroyInterface @ 0x140C4FC94 (BgConsoleDestroyInterface.c)
 *     BgConsoleGetInterface @ 0x140C4FCF4 (BgConsoleGetInterface.c)
 *     BgpConsoleClearScreen @ 0x140C4FD40 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140C4FE00 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140C501C0 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x140C50340 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x140C503B0 (BgpConsoleGetState.c)
 *     BgpConsoleInitialize @ 0x140C50420 (BgpConsoleInitialize.c)
 *     BgpConsoleSetCursor @ 0x140C50890 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140C50940 (BgpConsoleSetTextColor.c)
 *     ResFwpDestroyBackground @ 0x140C50EEC (ResFwpDestroyBackground.c)
 *     ResFwpPageInBackground @ 0x140C50F60 (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x140C50FE4 (ResFwpPageOutBackground.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140C51580 (AnFwpBackgroundUpdateTimer.c)
 *     AnFwpFadeAnimationTimer @ 0x140C52350 (AnFwpFadeAnimationTimer.c)
 *     AnFwFadeCompletion @ 0x140C52980 (AnFwFadeCompletion.c)
 *     BgDisplayFade @ 0x140C52B58 (BgDisplayFade.c)
 *     AnFwpProgressIndicatorTimer @ 0x140C54340 (AnFwpProgressIndicatorTimer.c)
 *     BgpFwLibraryInitialize @ 0x140C545B8 (BgpFwLibraryInitialize.c)
 *     BgLibraryDisable @ 0x140C54EE4 (BgLibraryDisable.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 */

__int64 BgpFwReleaseLock()
{
  __int64 result; // rax
  unsigned __int64 v1; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  result = *(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xC00;
  if ( (_DWORD)result != 3072 )
  {
    v1 = stru_140E3E928.WaitBlockFill7[146];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = LODWORD(stru_140F11D08.WaitStatus), LODWORD(stru_140F11D08.WaitStatus)) )
    {
      _InterlockedAnd64(&qword_140E64DD8, 0LL);
    }
    else
    {
      result = KiReleaseSpinLockInstrumented(&qword_140E64DD8, retaddr);
    }
    if ( (unsigned __int8)v1 <= 2u )
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v1);
      __writecr8(v1);
    }
  }
  return result;
}
