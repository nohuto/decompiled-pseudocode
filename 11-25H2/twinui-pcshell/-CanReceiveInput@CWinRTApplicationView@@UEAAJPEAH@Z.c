/*
 * XREFs of ?CanReceiveInput@CWinRTApplicationView@@UEAAJPEAH@Z @ 0x1803107A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?v_GetNativeWindow@CWinRTApplicationView@@EEAAJPEAPEAUHWND__@@@Z @ 0x1801D8470 (-v_GetNativeWindow@CWinRTApplicationView@@EEAAJPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWinRTApplicationView::CanReceiveInput(CWinRTApplicationView *this, int *a2)
{
  int NativeWindow; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND hWnd; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0;
  hWnd = 0LL;
  NativeWindow = CWinRTApplicationView::v_GetNativeWindow(this, &hWnd);
  v4 = NativeWindow;
  if ( NativeWindow >= 0 )
  {
    *a2 = IsWindowEnabled(hWnd);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16B,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)NativeWindow);
    return v4;
  }
}
