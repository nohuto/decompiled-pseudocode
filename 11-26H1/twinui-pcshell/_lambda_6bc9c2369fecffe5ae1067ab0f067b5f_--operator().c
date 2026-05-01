/*
 * XREFs of _lambda_6bc9c2369fecffe5ae1067ab0f067b5f_::operator() @ 0x1804F807C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6bc9c2369fecffe5ae1067ab0f067b5f__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call @ 0x180504490 (std--_Func_impl_no_alloc__lambda_6bc9c2369fecffe5ae1067ab0f067b5f__void_HWND_____un_ea_180504490.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_6bc9c2369fecffe5ae1067ab0f067b5f_::operator()(
        __int64 a1,
        HWND a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v9; // rcx
  __int64 result; // rax
  const char *v11; // r9
  int v12; // [rsp+40h] [rbp-78h] BYREF
  __int64 v13; // [rsp+48h] [rbp-70h] BYREF
  __int64 v14; // [rsp+50h] [rbp-68h] BYREF
  HWND v15; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v16; // [rsp+60h] [rbp-58h] BYREF
  struct tagRECT Rect; // [rsp+70h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  Rect = 0LL;
  GetWindowRect(a2, &Rect);
  try
  {
    v16 = Rect;
    v12 = a5;
    v13 = a4;
    v14 = a3;
    v15 = a2;
    v9 = *(_QWORD *)(a1 + 56);
    if ( !v9 )
      std::_Xbad_function_call();
    result = (*(__int64 (__fastcall **)(__int64, HWND *, __int64 *, __int64 *, int *, struct tagRECT *))(*(_QWORD *)v9 + 16LL))(
               v9,
               &v15,
               &v14,
               &v13,
               &v12,
               &v16);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0xF3E,
             (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
             v11);
  }
  return result;
}
