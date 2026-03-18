/*
 * XREFs of WPP_RECORDER_SF_LLqss @ 0x140035D8C
 * Callers:
 *     ACPIBuildProcessDeviceGenericEval @ 0x1400348C0 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x140035C00 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDeviceFailure @ 0x1400582C0 (ACPIBuildProcessDeviceFailure.c)
 *     ACPIBuildProcessThermalZoneFailure @ 0x140058FA0 (ACPIBuildProcessThermalZoneFailure.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LLqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  __int64 v10; // rdi
  const char *v11; // rbx
  const char *v13; // rsi
  __int64 v15; // rbp
  unsigned int v16; // r14d
  __int64 v17; // rax
  bool v18; // zf
  __int64 v20; // rax
  __int64 v21; // r8
  const char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  const char *v25; // rax
  int v26; // [rsp+20h] [rbp-78h]

  v10 = -1LL;
  v11 = a10;
  v13 = a9;
  v15 = 5LL;
  v16 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
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
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v25,
      v24,
      v22,
      v21,
      0LL);
  }
  if ( v11 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v11[v17] );
  }
  if ( !v11 )
    v11 = "NULL";
  v18 = v13 == 0LL;
  if ( v13 )
  {
    do
      ++v10;
    while ( v13[v10] );
    v15 = v10 + 1;
    v18 = v13 == 0LL;
  }
  if ( v18 )
    v13 = "NULL";
  LOWORD(v26) = a4;
  return WppAutoLogTrace(
           a1,
           v16,
           6LL,
           &WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
           v26,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           8LL,
           v13,
           v15,
           v11);
}
