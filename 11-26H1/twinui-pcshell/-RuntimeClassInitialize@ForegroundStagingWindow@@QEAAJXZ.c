/*
 * XREFs of ?RuntimeClassInitialize@ForegroundStagingWindow@@QEAAJXZ @ 0x180134B48
 * Callers:
 *     ??$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundStagingWindow@@@Z @ 0x180134A80 (--$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Micros.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall ForegroundStagingWindow::RuntimeClassInitialize(ForegroundStagingWindow *this)
{
  HCURSOR CursorW; // rax
  const char *v2; // r9
  WNDCLASSEXW v4; // [rsp+70h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v4.cbSize = 80;
  memset_0(&v4.style, 0, 0x4CuLL);
  v4.lpfnWndProc = (WNDPROC)CWRLImpWndProc<ForegroundStagingWindow>::s_WndProcBase;
  v4.hInstance = &_ImageBase;
  CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  v4.cbWndExtra = 8;
  v4.hCursor = CursorW;
  v4.lpszClassName = L"ForegroundStaging";
  RegisterClassExW(&v4);
  if ( CreateWindowInBand(136315016LL, L"ForegroundStaging", 0LL, 0x80000000LL) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x3F,
             (unsigned int)"pcshell\\twinui\\MultitaskingView\\inc\\ForegroundStagingWindow.h",
             v2);
}
