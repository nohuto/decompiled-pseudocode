/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddddqdddds @ 0x140186398
 * Callers:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_ddddqdddds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        const char *a18)
{
  _UNKNOWN **result; // rax
  const char *v19; // rdi
  __int64 v20; // rbx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  const char *v27; // rax
  __int64 v28; // [rsp+28h] [rbp-A9h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+1Fh] BYREF

  result = &retaddr;
  v19 = a18;
  v20 = -1LL;
  if ( a2 )
  {
    if ( a18 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a18[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = a18;
    if ( !a18 )
      v27 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
                            29LL,
                            &a9,
                            4LL,
                            &a10,
                            4LL,
                            &a11,
                            4LL,
                            &a12,
                            4LL,
                            &a13,
                            8LL,
                            &a14,
                            4LL,
                            &a15,
                            4LL,
                            &a16,
                            4LL,
                            &a17,
                            4LL,
                            v27,
                            v26,
                            0LL);
  }
  if ( a3 )
  {
    if ( v19 )
    {
      do
        ++v20;
      while ( v19[v20] );
      v24 = v20 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    if ( !v19 )
      v19 = "NULL";
    LOWORD(v28) = 29;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          21LL,
                          &WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
                          v28,
                          &a9,
                          4LL,
                          &a10,
                          4LL,
                          &a11,
                          4LL,
                          &a12,
                          4LL,
                          &a13,
                          8LL,
                          &a14,
                          4LL,
                          &a15,
                          4LL,
                          &a16,
                          4LL,
                          &a17,
                          4LL,
                          v19,
                          v24,
                          0LL);
  }
  return result;
}
