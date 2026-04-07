/*
 * XREFs of ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x18001E7F4
 * Callers:
 *     ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18001C830 (-CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z @ 0x18001E86C (-EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?TopLevelNode@CVisualProxy@@QEAAJPEAUHWND__@@_N@Z @ 0x18001EA74 (-TopLevelNode@CVisualProxy@@QEAAJPEAUHWND__@@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::SendTopLevelWindowCommand(CVisualProxy **this, HWND a2, struct CWindowData *a3)
{
  int v5; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 && (v5 = CVisualProxy::TopLevelNode(this[2], a2, (bool)a3), v5 < 0) )
  {
    v7 = 573LL;
  }
  else
  {
    v5 = CTopLevelWindow::EnsureRemoteAppTarget((CTopLevelWindow *)this, a3);
    if ( v5 >= 0 )
      return 0LL;
    v7 = 578LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v5,
    v8);
  return (unsigned int)v5;
}
