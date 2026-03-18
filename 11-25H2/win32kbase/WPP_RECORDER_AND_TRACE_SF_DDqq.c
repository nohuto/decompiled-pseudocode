/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DDqq @ 0x14010D1CC
 * Callers:
 *     EtwTraceUIPIHandleValidationError @ 0x14010D040 (EtwTraceUIPIHandleValidationError.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_DDqq(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  int v11; // [rsp+20h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+48h] BYREF
  va_list va; // [rsp+C0h] [rbp+48h]
  __int64 v15; // [rsp+C8h] [rbp+50h] BYREF
  va_list va1; // [rsp+C8h] [rbp+50h]
  __int64 v17; // [rsp+D0h] [rbp+58h] BYREF
  va_list va2; // [rsp+D0h] [rbp+58h]
  va_list va3; // [rsp+D8h] [rbp+60h] BYREF

  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  result = &retaddr;
  if ( a2 )
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_51aa2c2178953e50c8a4c421e3b79a93_Traceguids,
                            13LL,
                            (__int64 *)va,
                            4LL,
                            (__int64 *)va1,
                            4LL,
                            (__int64 *)va2,
                            8LL,
                            va3,
                            8LL,
                            0LL);
  if ( a3 )
  {
    LOWORD(v11) = 13;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          14LL,
                          &WPP_51aa2c2178953e50c8a4c421e3b79a93_Traceguids,
                          v11,
                          (__int64 *)va,
                          4LL,
                          (__int64 *)va1,
                          4LL,
                          (__int64 *)va2,
                          8LL,
                          va3,
                          8LL,
                          0LL);
  }
  return result;
}
