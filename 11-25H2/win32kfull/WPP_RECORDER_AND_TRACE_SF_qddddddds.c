/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qddddddds @ 0x1402723E0
 * Callers:
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x140233760 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qddddddds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        const char *a17)
{
  _UNKNOWN **result; // rax
  const char *v18; // rdi
  __int64 v19; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  const char *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // [rsp+28h] [rbp-99h]
  __int64 v28; // [rsp+C8h] [rbp+7h]
  __int64 v29; // [rsp+D0h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+1Fh] BYREF

  result = &retaddr;
  v18 = a17;
  v19 = -1LL;
  if ( a2 )
  {
    if ( a17 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a17[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a17;
    if ( !a17 )
      v25 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
                            13LL,
                            &a9,
                            8LL,
                            &a10,
                            4LL,
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
                            v25,
                            v24,
                            0LL);
  }
  if ( a3 )
  {
    if ( v18 )
    {
      do
        ++v19;
      while ( v18[v19] );
      v26 = v19 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    if ( !v18 )
      v18 = "NULL";
    LOWORD(v27) = 13;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          4LL,
                          &WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
                          v27,
                          &a9,
                          8LL,
                          &a10,
                          4LL,
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
                          v18,
                          v26,
                          0LL,
                          v28,
                          v29);
  }
  return result;
}
