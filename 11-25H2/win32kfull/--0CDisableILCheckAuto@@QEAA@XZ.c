/*
 * XREFs of ??0CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB78
 * Callers:
 *     NtUserMessageCall @ 0x14001B730 (NtUserMessageCall.c)
 *     ValidateHwndIAM @ 0x14015C6C4 (ValidateHwndIAM.c)
 *     ValidateHwndIAMComponetUIAware @ 0x14015C728 (ValidateHwndIAMComponetUIAware.c)
 *     _MapDesktopObject @ 0x1401AC150 (_MapDesktopObject.c)
 *     NtUserSetInteractiveControlFocus @ 0x14024DE20 (NtUserSetInteractiveControlFocus.c)
 *     UserRecreateRedirectionBitmap @ 0x140287A60 (UserRecreateRedirectionBitmap.c)
 *     NtUserApplyWindowAction @ 0x1402945A0 (NtUserApplyWindowAction.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CDFBC (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

CDisableILCheckAuto *__fastcall CDisableILCheckAuto::CDisableILCheckAuto(CDisableILCheckAuto *this)
{
  struct tagTHREADINFO *v2; // rax
  bool v3; // dl

  v2 = PtiCurrent();
  *(_QWORD *)this = v2;
  v3 = *((_BYTE *)v2 + 1708) == 1;
  *((_BYTE *)this + 8) = v3;
  if ( v3 )
    *((_BYTE *)v2 + 1708) = 0;
  return this;
}
