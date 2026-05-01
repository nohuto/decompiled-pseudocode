/*
 * XREFs of _lambda_7ad3d37a1216ab960a86f5745ba39ded_::operator() @ 0x180308258
 * Callers:
 *     _lambda_67a01f9610c8ee33e005e0a83cb8b51b_::operator() @ 0x180308140 (_lambda_67a01f9610c8ee33e005e0a83cb8b51b_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall lambda_7ad3d37a1216ab960a86f5745ba39ded_::operator()(LPCWSTR **a1, __int64 a2)
{
  LPCWSTR *v2; // rax
  HKEY v3; // rcx
  LSTATUS v4; // eax
  unsigned __int64 v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  v3 = *(HKEY *)(a2 + 40);
  if ( v3 )
  {
    v4 = RegDeleteKeyW(v3, *v2);
    v5 = (unsigned int)v4;
    if ( v4 > 0 )
      v5 = (unsigned __int16)v4 | 0x80070000;
    if ( (int)(v5 + 0x80000000) >= 0 && (_DWORD)v5 != -2147024894 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x49,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
        (const char *)v5);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
      (const char *)0x80270257LL);
  }
}
