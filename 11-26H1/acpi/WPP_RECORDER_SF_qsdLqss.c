/*
 * XREFs of WPP_RECORDER_SF_qsdLqss @ 0x140040ADC
 * Callers:
 *     ACPIDockIrpQueryID @ 0x1400ABDF0 (ACPIDockIrpQueryID.c)
 *     ACPIBusIrpQueryId @ 0x1400CBDB0 (ACPIBusIrpQueryId.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsdLqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12)
{
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  const char *v16; // rbp
  unsigned int v17; // r14d
  unsigned int v18; // r15d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v23; // rax
  __int64 v24; // r11
  const char *v25; // r9
  __int64 v26; // rax
  __int64 v27; // r10
  const char *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  const char *v31; // rcx
  int v32; // [rsp+20h] [rbp-98h]

  v12 = (__int64)a12;
  v13 = -1LL;
  v14 = (__int64)a11;
  v16 = a7;
  v17 = a2;
  v18 = a4;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a12 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a12[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a12;
    if ( !a12 )
      v25 = "NULL";
    if ( a11 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( a11[v26] );
      v27 = v26 + 1;
    }
    else
    {
      v27 = 5LL;
    }
    v28 = a11;
    if ( !a11 )
      v28 = "NULL";
    if ( a7 )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( a7[v29] );
      v30 = v29 + 1;
    }
    else
    {
      v30 = 5LL;
    }
    v31 = a7;
    if ( !a7 )
      v31 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      v18,
      &a6,
      8LL,
      v31,
      v30,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v28,
      v27,
      v25,
      v24,
      0LL);
  }
  if ( v12 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v12 + v19) );
  }
  if ( v14 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v14 + v20) );
  }
  if ( v16 )
  {
    do
      ++v13;
    while ( v16[v13] );
    v21 = v13 + 1;
  }
  else
  {
    v21 = 5LL;
  }
  if ( !v16 )
    v16 = "NULL";
  LOWORD(v32) = v18;
  return WppAutoLogTrace(a1, v17, 5LL, a5, v32, &a6, 8LL, v16, v21, &a8, 4LL, &a9, 4LL, &a10);
}
