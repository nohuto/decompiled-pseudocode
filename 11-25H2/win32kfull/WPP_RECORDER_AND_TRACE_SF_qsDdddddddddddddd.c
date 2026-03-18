/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qsDdddddddddddddd @ 0x1402E7418
 * Callers:
 *     ?xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E4590 (-xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qsDdddddddddddddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        const char *a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25)
{
  _UNKNOWN **result; // rax
  const char *v26; // rdi
  __int64 v27; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  const char *v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // [rsp+28h] [rbp-1A0h]
  _UNKNOWN *retaddr; // [rsp+160h] [rbp-68h] BYREF

  result = &retaddr;
  v26 = a10;
  v27 = -1LL;
  if ( a2 )
  {
    if ( a10 )
    {
      v31 = -1LL;
      do
        ++v31;
      while ( a10[v31] );
      v32 = v31 + 1;
    }
    else
    {
      v32 = 5LL;
    }
    v33 = a10;
    if ( !a10 )
      v33 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
                            47LL,
                            &a9,
                            8LL,
                            v33,
                            v32,
                            &a11,
                            4LL,
                            &a12,
                            4LL,
                            &a13,
                            4LL,
                            &a14,
                            4LL,
                            &a15,
                            4LL,
                            &a16,
                            4LL,
                            &a17,
                            4LL,
                            &a18,
                            4LL,
                            &a19,
                            4LL,
                            &a20,
                            4LL,
                            &a21,
                            4LL,
                            &a22,
                            4LL,
                            &a23,
                            4LL,
                            &a24,
                            4LL,
                            &a25,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( v26 )
    {
      do
        ++v27;
      while ( v26[v27] );
      v34 = v27 + 1;
    }
    else
    {
      v34 = 5LL;
    }
    if ( !v26 )
      v26 = "NULL";
    LOWORD(v35) = 47;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          9LL,
                          &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
                          v35,
                          &a9,
                          8LL,
                          v26,
                          v34,
                          &a11,
                          4LL,
                          &a12,
                          4LL,
                          &a13,
                          4LL,
                          &a14,
                          4LL,
                          &a15,
                          4LL,
                          &a16,
                          4LL,
                          &a17,
                          4LL,
                          &a18,
                          4LL,
                          &a19);
  }
  return result;
}
