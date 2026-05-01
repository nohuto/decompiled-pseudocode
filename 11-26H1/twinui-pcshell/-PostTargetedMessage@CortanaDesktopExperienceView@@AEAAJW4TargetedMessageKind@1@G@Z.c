/*
 * XREFs of ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803D634C
 * Callers:
 *     ?AboveLockAppActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1803D0CE0 (-AboveLockAppActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 *     ?LockScreenActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1803D3BE0 (-LockScreenActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 *     ?ShellModeChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1803D7130 (-ShellModeChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 *     ?ShellReadyChanged@CortanaDesktopExperienceView@@EEAAJXZ @ 0x1803D7160 (-ShellReadyChanged@CortanaDesktopExperienceView@@EEAAJXZ.c)
 *     ?WindowsHelloActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1803D7A90 (-WindowsHelloActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800B678C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::PostTargetedMessage(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(
         *(__int64 (__fastcall ****)(ExperienceManagerUtils *, GUID *, LPVOID *))(a1 + 120),
         (struct IUnknown *)a1,
         (void *)0x401,
         a2 | (unsigned __int64)(a3 << 16));
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A5,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
