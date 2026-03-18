/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dddddddddddd @ 0x140140B40
 * Callers:
 *     ?BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x140217B84 (-BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_dddddddddddd(
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
  int v11; // [rsp+28h] [rbp-C9h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+148h] [rbp+57h] BYREF
  va_list va; // [rsp+148h] [rbp+57h]
  __int64 v15; // [rsp+150h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+150h] [rbp+5Fh]
  __int64 v17; // [rsp+158h] [rbp+67h] BYREF
  va_list va2; // [rsp+158h] [rbp+67h]
  __int64 v19; // [rsp+160h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+160h] [rbp+6Fh]
  __int64 v21; // [rsp+168h] [rbp+77h] BYREF
  va_list va4; // [rsp+168h] [rbp+77h]
  __int64 v23; // [rsp+170h] [rbp+7Fh] BYREF
  va_list va5; // [rsp+170h] [rbp+7Fh]
  __int64 v25; // [rsp+178h] [rbp+87h] BYREF
  va_list va6; // [rsp+178h] [rbp+87h]
  __int64 v27; // [rsp+180h] [rbp+8Fh] BYREF
  va_list va7; // [rsp+180h] [rbp+8Fh]
  __int64 v29; // [rsp+188h] [rbp+97h] BYREF
  va_list va8; // [rsp+188h] [rbp+97h]
  __int64 v31; // [rsp+190h] [rbp+9Fh] BYREF
  va_list va9; // [rsp+190h] [rbp+9Fh]
  __int64 v33; // [rsp+198h] [rbp+A7h] BYREF
  va_list va10; // [rsp+198h] [rbp+A7h]
  va_list va11; // [rsp+1A0h] [rbp+AFh] BYREF

  va_start(va11, a8);
  va_start(va10, a8);
  va_start(va9, a8);
  va_start(va8, a8);
  va_start(va7, a8);
  va_start(va6, a8);
  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v19 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v21 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v23 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v25 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v27 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v29 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v31 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v33 = va_arg(va11, _QWORD);
  result = &retaddr;
  if ( a2 )
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_42eafe5add7139a3cfd2c65c7ccd3327_Traceguids,
                            10LL,
                            (__int64 *)va,
                            4LL,
                            (__int64 *)va1,
                            4LL,
                            (__int64 *)va2,
                            4LL,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            4LL,
                            (__int64 *)va5,
                            4LL,
                            (__int64 *)va6,
                            4LL,
                            (__int64 *)va7,
                            4LL,
                            (__int64 *)va8,
                            4LL,
                            (__int64 *)va9,
                            4LL,
                            (__int64 *)va10,
                            4LL,
                            va11,
                            4LL,
                            0LL);
  if ( a3 )
  {
    LOWORD(v11) = 10;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          2LL,
                          &WPP_42eafe5add7139a3cfd2c65c7ccd3327_Traceguids,
                          v11,
                          (__int64 *)va,
                          4LL,
                          (__int64 *)va1,
                          4LL,
                          (__int64 *)va2);
  }
  return result;
}
