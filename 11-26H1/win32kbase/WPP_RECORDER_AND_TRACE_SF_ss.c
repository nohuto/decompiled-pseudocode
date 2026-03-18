/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ss @ 0x14020E2CC
 * Callers:
 *     rimObsCheckForRegistrationConflicts @ 0x14020DE84 (rimObsCheckForRegistrationConflicts.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_ss(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const char *a9,
        const char *a10)
{
  _UNKNOWN **result; // rax
  const char *v11; // rbx
  const char *v12; // rdi
  __int64 v13; // rsi
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r8
  const char *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  const char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  bool v26; // zf
  int v27; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

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
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a10;
    if ( !a10 )
      v20 = "NULL";
    if ( a9 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a9[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a9;
    if ( !a9 )
      v23 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
                            37LL,
                            v23,
                            v22,
                            v20,
                            v19,
                            0LL);
  }
  if ( a3 )
  {
    if ( a10 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a10[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    if ( !a10 )
      v11 = "NULL";
    v26 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v13;
      while ( a9[v13] );
      v17 = v13 + 1;
      v26 = a9 == 0LL;
    }
    if ( v26 )
      v12 = "NULL";
    LOWORD(v27) = 37;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          3LL,
                          1LL,
                          &WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
                          v27,
                          v12,
                          v17,
                          v11,
                          v25,
                          0LL);
  }
  return result;
}
