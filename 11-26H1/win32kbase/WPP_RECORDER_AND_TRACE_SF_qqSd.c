/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqSd @ 0x1401A62D4
 * Callers:
 *     RIMOnPnpNotification @ 0x14005B7D0 (RIMOnPnpNotification.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
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
  __int64 v14; // rax
  __int64 v15; // rax
  const wchar_t *v16; // rcx
  bool v17; // zf
  int v18; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v20; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  __int64 v22; // [rsp+D8h] [rbp+50h] BYREF
  va_list va1; // [rsp+D8h] [rbp+50h]
  const wchar_t *v24; // [rsp+E0h] [rbp+58h]
  va_list va2; // [rsp+E8h] [rbp+60h] BYREF

  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  v24 = va_arg(va2, const wchar_t *);
  result = &retaddr;
  v9 = v24;
  v10 = -1LL;
  if ( a2 )
  {
    if ( v24 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v24[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = v24;
    if ( !v24 )
      v16 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
                            68LL,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            8LL,
                            v16,
                            v15,
                            va2,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    v17 = v9 == 0LL;
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
      v17 = v9 == 0LL;
    }
    if ( v17 )
      v9 = L"NULL";
    LOWORD(v18) = 68;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          1LL,
                          &WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
                          v18,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1,
                          8LL,
                          v9);
  }
  return result;
}
