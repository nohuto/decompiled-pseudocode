/*
 * XREFs of WPP_RECORDER_SF_Lqs @ 0x14005A088
 * Callers:
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1400585D0 (ACPIBuildProcessPowerResourcePhasePep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Lqs(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8)
{
  __int64 v8; // rdi
  const char *v9; // rbx
  unsigned int v12; // ebp
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  const char *v16; // rcx
  bool v17; // zf
  int v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+60h] [rbp-18h]
  __int64 v21; // [rsp+68h] [rbp-10h]

  v8 = -1LL;
  v9 = a8;
  v12 = a2;
  v13 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a8 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a8[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a8;
    if ( !a8 )
      v16 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      8LL,
      v16,
      v15,
      0LL);
  }
  v17 = v9 == 0LL;
  if ( v9 )
  {
    do
      ++v8;
    while ( v9[v8] );
    v13 = v8 + 1;
    v17 = v9 == 0LL;
  }
  if ( v17 )
    v9 = "NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(
           a1,
           v12,
           1LL,
           &WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
           v19,
           &a6,
           4LL,
           &a7,
           8LL,
           v9,
           v13,
           0LL,
           v20,
           v21);
}
