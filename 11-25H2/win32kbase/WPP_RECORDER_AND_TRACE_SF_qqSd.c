/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqSd @ 0x1401DC718
 * Callers:
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qqSd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        ...)
{
  _UNKNOWN **result; // rax
  const wchar_t *v9; // rbx
  __int64 v10; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  const wchar_t *v17; // rcx
  bool v18; // zf
  int v19; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  __int64 v23; // [rsp+D8h] [rbp+50h] BYREF
  va_list va1; // [rsp+D8h] [rbp+50h]
  const wchar_t *v25; // [rsp+E0h] [rbp+58h]
  va_list va2; // [rsp+E8h] [rbp+60h] BYREF

  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  v25 = va_arg(va2, const wchar_t *);
  result = &retaddr;
  v9 = v25;
  v10 = -1LL;
  v14 = 10LL;
  if ( a2 )
  {
    if ( v25 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v25[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = v25;
    if ( !v25 )
      v17 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
                            69LL,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            8LL,
                            v17,
                            v16,
                            va2,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    v18 = v9 == 0LL;
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
      v14 = 2 * v10 + 2;
      v18 = v9 == 0LL;
    }
    if ( v18 )
      v9 = L"NULL";
    LOWORD(v19) = 69;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          1LL,
                          &WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
                          v19,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1,
                          8LL,
                          v9,
                          v14,
                          va2);
  }
  return result;
}
