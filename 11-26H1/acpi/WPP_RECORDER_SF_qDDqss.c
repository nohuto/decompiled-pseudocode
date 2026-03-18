/*
 * XREFs of WPP_RECORDER_SF_qddqss @ 0x14006B5C0
 * Callers:
 *     ACPIWakeWaitIrp @ 0x14003CD70 (ACPIWakeWaitIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qddqss(
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
  __int64 v17; // r8
  const char *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  const char *v21; // rax
  __int64 v22; // rax
  bool v23; // zf
  int v25; // [rsp+20h] [rbp-88h]

  v11 = -1LL;
  v12 = a11;
  v13 = a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a11 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a11[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a11;
    if ( !a11 )
      v18 = "NULL";
    if ( a10 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a10[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a10;
    if ( !a10 )
      v21 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
      a4,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
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
    while ( v12[v22] );
  }
  v23 = v13 == 0LL;
  if ( v13 )
  {
    do
      ++v11;
    while ( v13[v11] );
    v23 = v13 == 0LL;
  }
  if ( v23 )
    v13 = "NULL";
  LOWORD(v25) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           17LL,
           &WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
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
