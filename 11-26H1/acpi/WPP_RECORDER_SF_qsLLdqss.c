/*
 * XREFs of WPP_RECORDER_SF_qsLLdqss @ 0x14001A85C
 * Callers:
 *     ACPIIsPowerRequestBlocked @ 0x14001A394 (ACPIIsPowerRequestBlocked.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsLLdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        __int64 a10,
        char a11,
        const char *a12,
        const char *a13)
{
  const char *v13; // rbx
  __int64 v14; // rdi
  const char *v15; // rsi
  const char *v17; // r15
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // zf
  __int64 v23; // rax
  __int64 v24; // r11
  const char *v25; // r9
  __int64 v26; // rax
  __int64 v27; // r10
  const char *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  const char *v31; // rcx
  int v32; // [rsp+28h] [rbp-99h]
  _DWORD v33[4]; // [rsp+B8h] [rbp-9h] BYREF

  v13 = a13;
  v14 = -1LL;
  v15 = a12;
  v17 = a7;
  v33[0] = AcpiPowerCurrentPagingPathTransitions;
  v18 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a13 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a13[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a13;
    if ( !a13 )
      v25 = "NULL";
    if ( a12 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( a12[v26] );
      v27 = v26 + 1;
    }
    else
    {
      v27 = 5LL;
    }
    v28 = a12;
    if ( !a12 )
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
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, _DWORD *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      48LL,
      &a6,
      8LL,
      v31,
      v30,
      &a8,
      4LL,
      &a9,
      4LL,
      v33,
      4LL,
      &a11,
      8LL,
      v28,
      v27,
      v25,
      v24,
      0LL);
  }
  if ( v13 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v13[v19] );
  }
  if ( v15 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v15[v20] );
  }
  v21 = v17 == 0LL;
  if ( v17 )
  {
    do
      ++v14;
    while ( v17[v14] );
    v18 = v14 + 1;
    v21 = v17 == 0LL;
  }
  if ( v21 )
    v17 = "NULL";
  LOWORD(v32) = 48;
  return WppAutoLogTrace(
           a1,
           4LL,
           10LL,
           &WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
           v32,
           &a6,
           8LL,
           v17,
           v18,
           &a8,
           4LL,
           &a9,
           4LL,
           v33);
}
