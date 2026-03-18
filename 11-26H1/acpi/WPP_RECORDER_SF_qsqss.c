/*
 * XREFs of WPP_RECORDER_SF_qsqss @ 0x140037B84
 * Callers:
 *     OSNotifyDeviceWake @ 0x14001EBC8 (OSNotifyDeviceWake.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rbx
  __int64 v11; // rdi
  const char *v12; // rsi
  const char *v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  bool v19; // zf
  __int64 v21; // rax
  const char *v22; // r9
  __int64 v23; // rax
  __int64 v24; // r10
  const char *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r8
  const char *v28; // rcx
  int v29; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  v14 = a7;
  v15 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a10[v21] );
    }
    v22 = a10;
    if ( !a10 )
      v22 = "NULL";
    if ( a9 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a9[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a9;
    if ( !a9 )
      v25 = "NULL";
    if ( a7 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( a7[v26] );
      v27 = v26 + 1;
    }
    else
    {
      v27 = 5LL;
    }
    v28 = a7;
    if ( !a7 )
      v28 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
      26LL,
      &a6,
      8LL,
      v28,
      v27,
      &a8,
      8LL,
      v25,
      v24,
      v22);
  }
  if ( v10 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v10[v16] );
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v12 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v12[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  v19 = v14 == 0LL;
  if ( v14 )
  {
    do
      ++v11;
    while ( v14[v11] );
    v15 = v11 + 1;
    v19 = v14 == 0LL;
  }
  if ( v19 )
    v14 = "NULL";
  LOWORD(v29) = 26;
  return WppAutoLogTrace(
           a1,
           4LL,
           17LL,
           &WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
           v29,
           &a6,
           8LL,
           v14,
           v15,
           &a8,
           8LL,
           v12,
           v18,
           v10);
}
