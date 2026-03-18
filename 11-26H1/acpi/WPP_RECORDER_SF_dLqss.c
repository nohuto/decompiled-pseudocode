/*
 * XREFs of WPP_RECORDER_SF_DLqss @ 0x14006945C
 * Callers:
 *     ACPISystemPowerProcessRootMapping @ 0x1400BA7F0 (ACPISystemPowerProcessRootMapping.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r8
  const char *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  const char *v20; // rax
  __int64 v21; // rax
  bool v22; // zf
  int v24; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  v14 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a10 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a10[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a10;
    if ( !a10 )
      v17 = "NULL";
    if ( a9 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a9[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a9;
    if ( !a9 )
      v20 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
      16LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v20,
      v19,
      v17,
      v16,
      0LL);
  }
  if ( v10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v10[v21] );
  }
  if ( !v10 )
    v10 = "NULL";
  v22 = v12 == 0LL;
  if ( v12 )
  {
    do
      ++v11;
    while ( v12[v11] );
    v14 = v11 + 1;
    v22 = v12 == 0LL;
  }
  if ( v22 )
    v12 = "NULL";
  LOWORD(v24) = 16;
  return WppAutoLogTrace(
           a1,
           2LL,
           15LL,
           &WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
           v24,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           8LL,
           v12,
           v14,
           v10);
}
