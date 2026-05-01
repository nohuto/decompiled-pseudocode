/*
 * XREFs of ?IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18030F9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x180082AA0 (-GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::IsMirrored(CWin32ApplicationView *this, unsigned int *a2)
{
  int Window; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND hWnd; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  hWnd = 0LL;
  Window = CWin32ApplicationView::GetWindow((CWin32ApplicationView *)((char *)this + 152), &hWnd);
  v4 = Window;
  if ( Window >= 0 )
  {
    *a2 = ((unsigned int)GetWindowLongW(hWnd, -20) >> 22) & 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x310,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)Window);
    return v4;
  }
}
