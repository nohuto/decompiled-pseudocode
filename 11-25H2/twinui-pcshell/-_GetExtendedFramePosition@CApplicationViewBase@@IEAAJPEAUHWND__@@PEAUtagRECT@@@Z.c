/*
 * XREFs of ?_GetExtendedFramePosition@CApplicationViewBase@@IEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1801AD620
 * Callers:
 *     ?GetExtendedFramePosition@CWinRTApplicationView@@UEAAJPEAUtagRECT@@@Z @ 0x1801AD4D0 (-GetExtendedFramePosition@CWinRTApplicationView@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall CApplicationViewBase::_GetExtendedFramePosition(
        CApplicationViewBase *this,
        HWND a2,
        struct tagRECT *a3)
{
  HRESULT WindowAttribute; // eax
  unsigned int v6; // ebx
  __int64 result; // rax
  struct tagRECT pvAttribute; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  SetRectEmpty(a3);
  pvAttribute = 0LL;
  WindowAttribute = DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u);
  v6 = WindowAttribute;
  if ( WindowAttribute < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x144,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)WindowAttribute);
    return v6;
  }
  else
  {
    result = 0LL;
    *a3 = pvAttribute;
  }
  return result;
}
