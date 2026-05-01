/*
 * XREFs of ?UpdateScale@VirtualDesktopGestureContext@@QEAAXM@Z @ 0x180563640
 * Callers:
 *     ?StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x180562FF0 (-StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x18055E5D0 (-CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z.c)
 *     ?UpdateScale@VirtualDesktopGestureWindow@@QEAAXM@Z @ 0x1805636F0 (-UpdateScale@VirtualDesktopGestureWindow@@QEAAXM@Z.c)
 */

void __fastcall VirtualDesktopGestureContext::UpdateScale(VirtualDesktopGestureContext *this, float a2)
{
  int AdjacentDesktop; // eax
  int v4; // eax
  VirtualDesktopGestureWindow **v5; // rbx
  VirtualDesktopGestureWindow **v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  AdjacentDesktop = VirtualDesktopGestureContext::CreateAdjacentDesktop(this, (bool *)this + 62, 3u, -1);
  if ( AdjacentDesktop < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x616,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)AdjacentDesktop);
  v4 = VirtualDesktopGestureContext::CreateAdjacentDesktop(this, (bool *)this + 63, 4u, 1);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x617,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v4);
  v5 = (VirtualDesktopGestureWindow **)*((_QWORD *)this + 9);
  v6 = &v5[*((_QWORD *)this + 10)];
  while ( v5 != v6 )
    VirtualDesktopGestureWindow::UpdateScale(*v5++, a2);
}
