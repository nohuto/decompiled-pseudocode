/*
 * XREFs of WPP_RECORDER_SF_LsLLqss @ 0x14006B308
 * Callers:
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140033570 (ACPIWakeEnableDisableAsyncCallBack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LsLLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  const char *v16; // r14
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  const char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  bool v25; // zf
  int v27; // [rsp+20h] [rbp-98h]

  v12 = a12;
  v13 = -1LL;
  v14 = a11;
  v16 = a7;
  v17 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a12 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_BYTE *)(a12 + v18) );
    }
    if ( a11 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( *(_BYTE *)(a11 + v19) );
    }
    if ( a7 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a7[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a7;
    if ( !a7 )
      v22 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
      21LL,
      &a6,
      4LL,
      v22,
      v21,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10);
  }
  if ( v12 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_BYTE *)(v12 + v23) );
  }
  if ( v14 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_BYTE *)(v14 + v24) );
  }
  v25 = v16 == 0LL;
  if ( v16 )
  {
    do
      ++v13;
    while ( v16[v13] );
    v17 = v13 + 1;
    v25 = v16 == 0LL;
  }
  if ( v25 )
    v16 = "NULL";
  LOWORD(v27) = 21;
  return WppAutoLogTrace(
           a1,
           2LL,
           17LL,
           &WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
           v27,
           &a6,
           4LL,
           v16,
           v17,
           &a8,
           4LL,
           &a9,
           4LL,
           &a10);
}
