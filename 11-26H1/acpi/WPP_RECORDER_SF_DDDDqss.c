/*
 * XREFs of WPP_RECORDER_SF_DDDDqss @ 0x1400691EC
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x140041748 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DDDDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12)
{
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v16; // rax
  __int64 v17; // r8
  const char *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  const char *v21; // rax
  __int64 v22; // rax
  int v24; // [rsp+20h] [rbp-98h]

  v12 = (__int64)a12;
  v13 = -1LL;
  v14 = (__int64)a11;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a12 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a12[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a12;
    if ( !a12 )
      v18 = "NULL";
    if ( a11 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a11[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a11;
    if ( !a11 )
      v21 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
      12LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v21,
      v20,
      v18,
      v17,
      0LL);
  }
  if ( v12 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v12 + v22) );
  }
  if ( v14 )
  {
    do
      ++v13;
    while ( *(_BYTE *)(v14 + v13) );
  }
  LOWORD(v24) = 12;
  return WppAutoLogTrace(
           a1,
           4LL,
           15LL,
           &WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
           v24,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           4LL,
           &a9,
           4LL,
           &a10);
}
