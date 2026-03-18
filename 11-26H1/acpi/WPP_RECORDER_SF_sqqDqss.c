/*
 * XREFs of WPP_RECORDER_SF_sqqDqss @ 0x140053A08
 * Callers:
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1400537E0 (ACPIBuildDiscoverDeviceCompletion.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x140054B0C (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sqqDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
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
  const char *v16; // r14
  unsigned int v17; // r15d
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r11
  const char *v21; // r9
  __int64 v22; // rax
  __int64 v23; // r10
  const char *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  const char *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // zf
  int v32; // [rsp+20h] [rbp-98h]

  v12 = (__int64)a12;
  v13 = -1LL;
  v14 = (__int64)a11;
  v16 = a6;
  v17 = a4;
  v18 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a12 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a12[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a12;
    if ( !a12 )
      v21 = "NULL";
    if ( a11 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a11[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a11;
    if ( !a11 )
      v24 = "NULL";
    if ( a6 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a6[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = a6;
    if ( !a6 )
      v27 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, const char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      v17,
      v27,
      v26,
      &a7,
      8LL,
      &a8,
      8LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v24,
      v23,
      v21,
      v20,
      0LL);
  }
  if ( v12 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_BYTE *)(v12 + v28) );
  }
  if ( v14 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( *(_BYTE *)(v14 + v29) );
  }
  v30 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v13;
    while ( a6[v13] );
    v18 = v13 + 1;
    v30 = a6 == 0LL;
  }
  if ( v30 )
    v16 = "NULL";
  LOWORD(v32) = v17;
  return WppAutoLogTrace(a1, 4LL, 6LL, a5, v32, v16, v18, &a7, 8LL, &a8, 8LL, &a9, 4LL, &a10);
}
