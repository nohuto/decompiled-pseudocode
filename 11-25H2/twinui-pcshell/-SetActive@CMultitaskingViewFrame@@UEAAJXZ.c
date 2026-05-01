/*
 * XREFs of ?SetActive@CMultitaskingViewFrame@@UEAAJXZ @ 0x1804A9C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrame::SetActive(HWND *this)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( SetForegroundWindow(this[6]) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x234,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
    (const char *)0x80070005LL);
  return 2147942405LL;
}
