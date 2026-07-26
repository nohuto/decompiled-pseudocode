/*
 * XREFs of WPP_RECORDER_SF_qsDDs @ 0x1400A3A38
 * Callers:
 *     ndisRssPmObjectHeaderFixup @ 0x140066740 (ndisRssPmObjectHeaderFixup.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsDDs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10)
{
  const char *v10; // rbx
  __int64 v11; // rdi
  const char *v12; // rsi
  __int64 v15; // rax
  __int64 v16; // r8
  const char *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  const char *v20; // rax
  __int64 v21; // rax
  bool v22; // zf
  int v24; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a7;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
  {
    if ( a10 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a10[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a10;
    if ( !a10 )
      v17 = "NULL";
    if ( a7 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a7[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a7;
    if ( !a7 )
      v20 = "NULL";
    ndisWppFastTraceMessage(
      &WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      a4,
      &a6,
      8LL,
      v20,
      v19,
      &a8,
      4LL,
      &a9,
      4LL,
      v17,
      v16,
      0LL);
  }
  if ( v10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v10[v21] );
  }
  v22 = v12 == 0LL;
  if ( v12 )
  {
    do
      ++v11;
    while ( v12[v11] );
    v22 = v12 == 0LL;
  }
  if ( v22 )
    v12 = "NULL";
  LOWORD(v24) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_aa77392295b13b3ad77210343ba6186d_Traceguids, v24, &a6, 8LL, v12);
}
