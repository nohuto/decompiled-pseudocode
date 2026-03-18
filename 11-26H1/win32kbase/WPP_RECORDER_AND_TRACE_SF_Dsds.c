/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Dsds @ 0x1401D50DC
 * Callers:
 *     IsPrivilegedEx @ 0x1401D4F70 (IsPrivilegedEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_Dsds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v9; // rbx
  __int64 v10; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  bool v18; // zf
  int v19; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  const char *v23; // [rsp+D8h] [rbp+50h]
  va_list va1; // [rsp+E0h] [rbp+58h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v21 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, const char *);
  result = &retaddr;
  v9 = v23;
  v10 = -1LL;
  v14 = 5LL;
  if ( a2 )
  {
    if ( v23 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v23[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = v23;
    if ( !v23 )
      v17 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, const char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_9351d8e1f6b833d433ffc9d53c5ae7a9_Traceguids,
                            10LL,
                            (__int64 *)va,
                            4LL,
                            v17,
                            v16,
                            va1,
                            4LL,
                            "privilege",
                            10LL,
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
      v14 = v10 + 1;
      v18 = v9 == 0LL;
    }
    if ( v18 )
      v9 = "NULL";
    LOWORD(v19) = 10;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          14LL,
                          &WPP_9351d8e1f6b833d433ffc9d53c5ae7a9_Traceguids,
                          v19,
                          (__int64 *)va,
                          4LL,
                          v9,
                          v14,
                          va1);
  }
  return result;
}
