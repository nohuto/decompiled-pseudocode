/*
 * XREFs of WPP_RECORDER_SF_sLqss @ 0x14005A398
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x14003666C (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1400576DC (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x140059AB8 (ACPIBuildWakeEventDeviceContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rbx
  __int64 v11; // rdi
  const char *v12; // rsi
  const char *v14; // r14
  unsigned int v15; // r15d
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r11
  const char *v19; // r9
  __int64 v20; // rax
  __int64 v21; // r10
  const char *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  const char *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // zf
  int v31; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  v14 = a6;
  v15 = a4;
  v16 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a10 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a10[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a10;
    if ( !a10 )
      v19 = "NULL";
    if ( a9 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a9[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a9;
    if ( !a9 )
      v22 = "NULL";
    if ( a6 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a6[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a6;
    if ( !a6 )
      v25 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      v15,
      v25,
      v24,
      &a7,
      4LL,
      &a8,
      8LL,
      v22,
      v21,
      v19,
      v18,
      0LL);
  }
  if ( v10 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v10[v26] );
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v12 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v12[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  v29 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v11;
    while ( a6[v11] );
    v16 = v11 + 1;
    v29 = a6 == 0LL;
  }
  if ( v29 )
    v14 = "NULL";
  LOWORD(v31) = v15;
  return WppAutoLogTrace(
           a1,
           2LL,
           10LL,
           &WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
           v31,
           v14,
           v16,
           &a7,
           4LL,
           &a8,
           8LL,
           v12,
           v28,
           v10);
}
