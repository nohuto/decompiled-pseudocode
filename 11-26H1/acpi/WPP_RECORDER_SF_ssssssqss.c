/*
 * XREFs of WPP_RECORDER_SF_ssssssqss @ 0x14003DF00
 * Callers:
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1400CA9C0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ssssssqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        const char *a7,
        const char *a8,
        const char *a9,
        const char *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // r14
  __int64 v21; // rax
  const char *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdx
  const char *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  const char *v29; // r15
  const char *v30; // r15
  bool v31; // zf
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  const char *v42; // rcx
  int v43; // [rsp+20h] [rbp-F8h]
  const char *v45; // [rsp+150h] [rbp+38h]

  v14 = a14;
  v15 = -1LL;
  v16 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a14 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( *(_BYTE *)(a14 + v34) );
    }
    if ( a13 )
    {
      v35 = -1LL;
      do
        ++v35;
      while ( *(_BYTE *)(a13 + v35) );
    }
    if ( a11 )
    {
      v36 = -1LL;
      do
        ++v36;
      while ( *(_BYTE *)(a11 + v36) );
    }
    if ( a10 )
    {
      v37 = -1LL;
      do
        ++v37;
      while ( a10[v37] );
    }
    if ( a9 )
    {
      v38 = -1LL;
      do
        ++v38;
      while ( a9[v38] );
    }
    if ( a8 )
    {
      v39 = -1LL;
      do
        ++v39;
      while ( a8[v39] );
    }
    if ( a7 )
    {
      v40 = -1LL;
      do
        ++v40;
      while ( a7[v40] );
    }
    if ( a6 )
    {
      v41 = -1LL;
      do
        ++v41;
      while ( a6[v41] );
    }
    WORD1(v42) = WORD1(a6);
    if ( !a6 )
      v42 = "NULL";
    HIWORD(v43) = WORD1(v42);
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids);
    v14 = a14;
  }
  if ( v14 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v14 + v17) );
  }
  if ( a13 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(a13 + v18) );
  }
  if ( a11 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v19 + a11) );
  }
  v20 = a10;
  if ( a10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a10[v21] );
  }
  v22 = a9;
  if ( !a10 )
    v20 = "NULL";
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
  v25 = a8;
  if ( !a9 )
    v22 = "NULL";
  if ( a8 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a8[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  if ( !a8 )
    v25 = "NULL";
  if ( a7 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a7[v33] );
    v28 = v33 + 1;
  }
  else
  {
    v28 = 5LL;
  }
  v29 = a7;
  if ( !a7 )
    v29 = "NULL";
  v45 = v29;
  v30 = a6;
  v31 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v15;
    while ( a6[v15] );
    v16 = v15 + 1;
    v31 = a6 == 0LL;
  }
  if ( v31 )
    v30 = "NULL";
  LOWORD(v43) = 22;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
           v43,
           v30,
           v16,
           v45,
           v28,
           v25,
           v27,
           v22,
           v24,
           v20);
}
