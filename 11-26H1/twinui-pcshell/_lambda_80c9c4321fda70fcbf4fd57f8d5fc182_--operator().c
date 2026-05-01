/*
 * XREFs of _lambda_80c9c4321fda70fcbf4fd57f8d5fc182_::operator() @ 0x1806853BC
 * Callers:
 *     _lambda_80c9c4321fda70fcbf4fd57f8d5fc182_::_lambda_invoker_cdecl_ @ 0x180685290 (_lambda_80c9c4321fda70fcbf4fd57f8d5fc182_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1802D373C (wcscmp_0.c)
 */

__int64 __fastcall lambda_80c9c4321fda70fcbf4fd57f8d5fc182_::operator()(__int64 a1, HWND a2, _QWORD *a3)
{
  DWORD WindowThreadProcessId; // edi
  void *v6; // rcx
  HRESULT v7; // eax
  HRESULT v8; // eax
  DWORD dwProcessId; // [rsp+30h] [rbp-828h] BYREF
  COLORREF pvAttribute; // [rsp+34h] [rbp-824h] BYREF
  int v12; // [rsp+38h] [rbp-820h] BYREF
  WCHAR ClassName[1024]; // [rsp+40h] [rbp-818h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+858h] [rbp+0h]

  dwProcessId = 0;
  WindowThreadProcessId = GetWindowThreadProcessId(a2, &dwProcessId);
  if ( dwProcessId != GetCurrentProcessId() )
    return 1LL;
  if ( WindowThreadProcessId != GetCurrentThreadId() )
    return 1LL;
  GetClassNameW(a2, ClassName, 1024);
  if ( wcscmp_0(ClassName, L"#32768") || *a3 != SendMessageW(a2, 0x1E1u, 0LL, 0LL) )
    return 1LL;
  if ( !(unsigned int)GetPropW(a2, L"IsZachMenuDWMAttributeSet") )
  {
    v6 = (void *)a3[1];
    pvAttribute = 0;
    if ( GetThemeColor(v6, 10, 0, 3821, &pvAttribute) >= 0 )
    {
      v7 = DwmSetWindowAttribute(a2, 0x22u, &pvAttribute, 4u);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x74,
          (int)"shell\\lib\\immersivecontextmenu\\immersivecontextmenuownerdrawhelper.cpp",
          (const char *)(unsigned int)v7);
    }
    v12 = 3;
    v8 = DwmSetWindowAttribute(a2, 0x21u, &v12, 4u);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x78,
        (int)"shell\\lib\\immersivecontextmenu\\immersivecontextmenuownerdrawhelper.cpp",
        (const char *)(unsigned int)v8);
    SetPropW(a2, L"IsZachMenuDWMAttributeSet", HANDLE_FLAG_INHERIT);
  }
  return 0LL;
}
