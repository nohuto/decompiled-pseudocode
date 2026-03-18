/*
 * XREFs of WPP_RECORDER_SF_dDqss @ 0x140060A28
 * Callers:
 *     ACPIFanPrepareImpactZoneSupport @ 0x1400B0460 (ACPIFanPrepareImpactZoneSupport.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rbx
  __int64 v11; // rdi
  const char *v12; // rsi
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r8
  const char *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  const char *v21; // rax
  __int64 v22; // rax
  bool v23; // zf
  int v25; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  v15 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a10 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a10[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a10;
    if ( !a10 )
      v18 = "NULL";
    if ( a9 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a9[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a9;
    if ( !a9 )
      v21 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v21,
      v20,
      v18,
      v17,
      0LL);
  }
  if ( v10 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v10[v22] );
  }
  if ( !v10 )
    v10 = "NULL";
  v23 = v12 == 0LL;
  if ( v12 )
  {
    do
      ++v11;
    while ( v12[v11] );
    v15 = v11 + 1;
    v23 = v12 == 0LL;
  }
  if ( v23 )
    v12 = "NULL";
  LOWORD(v25) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           16LL,
           &WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
           v25,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           8LL,
           v12,
           v15,
           v10);
}
