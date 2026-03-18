/*
 * XREFs of WPP_RECORDER_SF_qDss @ 0x140071D98
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1400BCCF0 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qDss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v9; // rbx
  __int64 v10; // rdi
  const char *v11; // rsi
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r9
  const char *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  const char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  bool v22; // zf
  int v24; // [rsp+20h] [rbp-68h]

  v9 = a9;
  v10 = -1LL;
  v11 = a8;
  v13 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a9 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a9[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a9;
    if ( !a9 )
      v16 = "NULL";
    if ( a8 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a8[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a8;
    if ( !a8 )
      v19 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8369cd7954993692efaf1a45fbdc6aeb_Traceguids,
      12LL,
      &a6,
      8LL,
      &a7,
      4LL,
      v19,
      v18,
      v16,
      v15,
      0LL);
  }
  if ( v9 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v9[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5LL;
  }
  if ( !v9 )
    v9 = "NULL";
  v22 = v11 == 0LL;
  if ( v11 )
  {
    do
      ++v10;
    while ( v11[v10] );
    v13 = v10 + 1;
    v22 = v11 == 0LL;
  }
  if ( v22 )
    v11 = "NULL";
  LOWORD(v24) = 12;
  return WppAutoLogTrace(
           a1,
           2LL,
           20LL,
           &WPP_8369cd7954993692efaf1a45fbdc6aeb_Traceguids,
           v24,
           &a6,
           8LL,
           &a7,
           4LL,
           v11,
           v13,
           v9,
           v21,
           0LL);
}
