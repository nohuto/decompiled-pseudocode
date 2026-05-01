/*
 * XREFs of ?UpdateScale@VirtualDesktopGestureWindow@@QEAAXM@Z @ 0x1805636F0
 * Callers:
 *     ?UpdateScale@VirtualDesktopGestureContext@@QEAAXM@Z @ 0x180563640 (-UpdateScale@VirtualDesktopGestureContext@@QEAAXM@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VirtualDesktopGestureWindow::UpdateScale(VirtualDesktopGestureWindow *this, float a2)
{
  __int64 v2; // rdx
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 21) + 184LL))(
         *((_QWORD *)this + 21),
         v2,
         33LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1BF,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v4);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 22) + 184LL))(
         *((_QWORD *)this + 22),
         v5,
         34LL);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C0,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v6);
}
