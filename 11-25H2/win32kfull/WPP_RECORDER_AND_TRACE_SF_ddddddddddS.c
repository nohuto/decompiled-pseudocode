/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddddddddddS @ 0x1401E1200
 * Callers:
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x140211020 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_ddddddddddS(
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
        char a18,
        const char *a19)
{
  _UNKNOWN **result; // rax
  const char *v20; // rbx
  __int64 v21; // rdi
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rcx
  const char *v28; // rax
  __int64 v29; // [rsp+28h] [rbp-B9h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+2Fh] BYREF

  result = &retaddr;
  v20 = a19;
  v21 = -1LL;
  if ( a2 )
  {
    if ( a19 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( *(_WORD *)&a19[2 * v26] );
      v27 = 2 * v26 + 2;
    }
    else
    {
      v27 = 10LL;
    }
    v28 = a19;
    if ( !a19 )
      v28 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
                            18LL,
                            &a9,
                            4LL,
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
                            &a17,
                            4LL,
                            &a18,
                            4LL,
                            v28,
                            v27,
                            0LL);
  }
  if ( a3 )
  {
    v25 = v20 == 0LL;
    if ( v20 )
    {
      do
        ++v21;
      while ( *(_WORD *)&v20[2 * v21] );
      v25 = v20 == 0LL;
    }
    if ( v25 )
      v20 = L"NULL";
    LOWORD(v29) = 18;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          7LL,
                          &WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
                          v29,
                          &a9,
                          4LL,
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
                          &a17,
                          4LL,
                          &a18,
                          4LL,
                          v20);
  }
  return result;
}
