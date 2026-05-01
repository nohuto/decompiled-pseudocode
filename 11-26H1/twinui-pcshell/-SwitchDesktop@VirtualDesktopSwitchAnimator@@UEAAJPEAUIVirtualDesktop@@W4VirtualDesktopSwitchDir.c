/*
 * XREFs of ?SwitchDesktop@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@@Z @ 0x180568400
 * Callers:
 *     ?SwitchDesktop@VirtualDesktopSwitchAnimator@@WBA@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@@Z @ 0x180568460 (-SwitchDesktop@VirtualDesktopSwitchAnimator@@WBA@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitch.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AnimateOperation@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUIVirtualDesktop@@@Z0W4VirtualDesktopSwitchDirection@@0@Z @ 0x180567000 (--$AnimateOperation@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopMa.c)
 */

__int64 __fastcall VirtualDesktopSwitchAnimator::SwitchDesktop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a1 - 8;
  if ( *(_BYTE *)(v4 + 192) )
    return 0LL;
  v6 = VirtualDesktopSwitchAnimator::AnimateOperation<IVirtualDesktop *>(
         v4,
         (__int64 (__fastcall *)(_QWORD, __int64)) IVirtualDesktopManagerPrivate::`vcall'{392,{flat}},
         a3,
         a4,
         a2);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15B,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
      (const char *)(unsigned int)v6);
  return v7;
}
