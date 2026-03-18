/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL @ 0x1401018E4
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x14010136C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v9; // rbx
  __int64 v10; // rdi
  const char *v11; // rsi
  __int64 v15; // r14
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // r8
  const char *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  const char *v23; // rcx
  int v24; // [rsp+28h] [rbp-99h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+128h] [rbp+67h] BYREF
  va_list va; // [rsp+128h] [rbp+67h]
  const char *v28; // [rsp+130h] [rbp+6Fh]
  __int64 v29; // [rsp+138h] [rbp+77h] BYREF
  va_list va1; // [rsp+138h] [rbp+77h]
  __int64 v31; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+7Fh]
  const char *v33; // [rsp+148h] [rbp+87h]
  __int64 v34; // [rsp+150h] [rbp+8Fh] BYREF
  va_list va3; // [rsp+150h] [rbp+8Fh]
  __int64 v36; // [rsp+158h] [rbp+97h] BYREF
  va_list va4; // [rsp+158h] [rbp+97h]
  __int64 v38; // [rsp+160h] [rbp+9Fh] BYREF
  va_list va5; // [rsp+160h] [rbp+9Fh]
  va_list va6; // [rsp+168h] [rbp+A7h] BYREF

  va_start(va6, a8);
  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v26 = va_arg(va1, _QWORD);
  v28 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v29 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v31 = va_arg(va3, _QWORD);
  v33 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v34 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v36 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v38 = va_arg(va6, _QWORD);
  result = &retaddr;
  v9 = v33;
  v10 = -1LL;
  v11 = v28;
  v15 = 5LL;
  if ( a2 )
  {
    if ( v33 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( v33[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = v33;
    if ( !v33 )
      v20 = "NULL";
    if ( v28 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( v28[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = v28;
    if ( !v28 )
      v23 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
                            275LL,
                            (__int64 *)va,
                            4LL,
                            v23,
                            v22,
                            (__int64 *)va1,
                            2LL,
                            (__int64 *)va2,
                            2LL,
                            v20,
                            v19,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            4LL,
                            (__int64 *)va5,
                            4LL,
                            va6,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( v9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v9[v16] );
    }
    v17 = v11 == 0LL;
    if ( v11 )
    {
      do
        ++v10;
      while ( v11[v10] );
      v15 = v10 + 1;
      v17 = v11 == 0LL;
    }
    if ( v17 )
      v11 = "NULL";
    LOWORD(v24) = 275;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          4LL,
                          &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
                          v24,
                          (__int64 *)va,
                          4LL,
                          v11,
                          v15,
                          (__int64 *)va1);
  }
  return result;
}
