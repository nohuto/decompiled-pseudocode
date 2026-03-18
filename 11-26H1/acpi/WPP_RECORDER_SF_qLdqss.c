/*
 * XREFs of WPP_RECORDER_SF_qLdqss @ 0x140038FA8
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1400258B0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x140026900 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x140027750 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qLdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  __int64 v11; // rdi
  const char *v12; // rbx
  const char *v13; // rsi
  __int64 v16; // rax
  bool v17; // zf
  __int64 v19; // rax
  __int64 v20; // r8
  const char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  const char *v24; // rax
  int v25; // [rsp+20h] [rbp-88h]

  v11 = -1LL;
  v12 = a11;
  v13 = a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
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
    if ( a10 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a10[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a10;
    if ( !a10 )
      v24 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a4,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
      8LL,
      v24,
      v23,
      v21,
      v20,
      0LL);
  }
  if ( v12 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v12[v16] );
  }
  v17 = v13 == 0LL;
  if ( v13 )
  {
    do
      ++v11;
    while ( v13[v11] );
    v17 = v13 == 0LL;
  }
  if ( v17 )
    v13 = "NULL";
  LOWORD(v25) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           10LL,
           &WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
           v25,
           &a6,
           8LL,
           &a7,
           4LL,
           &a8,
           4LL,
           &a9,
           8LL,
           v13);
}
