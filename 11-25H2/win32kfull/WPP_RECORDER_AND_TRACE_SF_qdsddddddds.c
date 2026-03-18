/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdsddddddds @ 0x140026464
 * Callers:
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x140025B6C (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qdsddddddds(
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
        const char *a11,
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
  const char *v20; // rsi
  __int64 v21; // rbx
  const char *v22; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rax
  char *v30; // [rsp+28h] [rbp-B9h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+1Fh] BYREF

  result = &retaddr;
  v20 = a11;
  v21 = -1LL;
  v22 = a19;
  if ( a2 )
  {
    if ( a19 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( a19[v28] );
    }
    if ( a11 )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( a11[v29] );
    }
    v30 = &a9;
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_5203336677413a97442e065d09735669_Traceguids);
  }
  if ( a3 )
  {
    if ( v22 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( v22[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    if ( !v22 )
      v22 = "NULL";
    if ( v20 )
    {
      do
        ++v21;
      while ( v20[v21] );
      v27 = v21 + 1;
    }
    else
    {
      v27 = 5LL;
    }
    if ( !v20 )
      v20 = "NULL";
    LOWORD(v30) = 12;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          7LL,
                          &WPP_5203336677413a97442e065d09735669_Traceguids,
                          v30,
                          &a9,
                          8LL,
                          &a10,
                          4LL,
                          v20,
                          v27,
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
                          v22,
                          v26,
                          0LL);
  }
  return result;
}
