/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sscc @ 0x140224EA8
 * Callers:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x140089AA0 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_sscc(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9,
        const char *a10,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v11; // rbx
  const char *v12; // rsi
  __int64 v13; // rdi
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // zf
  int v24; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  va_list va; // [rsp+E0h] [rbp+58h] BYREF

  va_start(va, a10);
  result = &retaddr;
  v11 = a10;
  v12 = a9;
  v13 = -1LL;
  v17 = 5LL;
  if ( a2 )
  {
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a10[v18] );
    }
    if ( a9 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a9[v19] );
    }
    WORD1(v20) = WORD1(a9);
    if ( !a9 )
      v20 = "NULL";
    HIWORD(v24) = WORD1(v20);
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_b5af1d68772133993d2785280b719723_Traceguids);
  }
  if ( a3 )
  {
    if ( a10 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a10[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    if ( !a10 )
      v11 = "NULL";
    v23 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v13;
      while ( a9[v13] );
      v17 = v13 + 1;
      v23 = a9 == 0LL;
    }
    if ( v23 )
      v12 = "NULL";
    LOWORD(v24) = 11;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          6LL,
                          &WPP_b5af1d68772133993d2785280b719723_Traceguids,
                          v24,
                          v12,
                          v17,
                          v11,
                          v22,
                          va);
  }
  return result;
}
