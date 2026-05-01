/*
 * XREFs of ?GetTitleBarDrawnByApp@CApplicationFrameWrapper@@UEAAJPEAH@Z @ 0x180226EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CApplicationFrameWrapper::GetTitleBarDrawnByApp(CApplicationFrameWrapper *this, int *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  if ( *((_BYTE *)this + 64) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    *a2 = *((_DWORD *)this + 24);
    return 0LL;
  }
}
