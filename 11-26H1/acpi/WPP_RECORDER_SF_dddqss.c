/*
 * XREFs of WPP_RECORDER_SF_dddqss @ 0x140060C38
 * Callers:
 *     ACPIFanValidateImpactZoneSupport @ 0x1400B0BC0 (ACPIFanValidateImpactZoneSupport.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dddqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  __int64 v11; // rdi
  __int64 v12; // rbx
  const char *v14; // rsi
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // r8
  const char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  const char *v22; // rax
  __int64 v23; // rax
  bool v24; // zf
  int v26; // [rsp+20h] [rbp-88h]

  v11 = -1LL;
  v12 = (__int64)a11;
  v14 = a10;
  v16 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a11 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a11[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a11;
    if ( !a11 )
      v19 = "NULL";
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a10;
    if ( !a10 )
      v22 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
      8LL,
      v22,
      v21,
      v19,
      v18,
      0LL);
  }
  if ( v12 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_BYTE *)(v12 + v23) );
  }
  v24 = v14 == 0LL;
  if ( v14 )
  {
    do
      ++v11;
    while ( v14[v11] );
    v24 = v14 == 0LL;
  }
  if ( v24 )
    v14 = "NULL";
  LOWORD(v26) = a4;
  return WppAutoLogTrace(
           a1,
           v16,
           16LL,
           &WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
           v26,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           4LL,
           &a9,
           8LL,
           v14);
}
