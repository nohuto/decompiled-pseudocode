/*
 * XREFs of ?GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z @ 0x18017EE20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CApplicationFrameWrapper::GetFrameWindow(CApplicationFrameWrapper *this, HWND *a2)
{
  HWND v2; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (HWND)*((_QWORD *)this + 9);
  if ( v2 )
  {
    *a2 = v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C,
      (int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)0x80070490LL);
    return 2147943568LL;
  }
}
