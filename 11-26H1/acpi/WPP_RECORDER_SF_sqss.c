/*
 * XREFs of WPP_RECORDER_SF_sqss @ 0x140040DCC
 * Callers:
 *     ACPIBuildProcessSynchronizationList @ 0x140029460 (ACPIBuildProcessSynchronizationList.c)
 *     ACPIBuildDevicePowerNodes @ 0x14003666C (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1400576DC (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x140059AB8 (ACPIBuildWakeEventDeviceContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v9; // rsi
  const char *v10; // r15
  __int64 v11; // rdi
  unsigned __int64 v12; // r14
  unsigned int v13; // r13d
  const char *v14; // rbx
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // zf
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // r14
  const char *v26; // r9
  __int64 v27; // rax
  __int64 v28; // r11
  const char *v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  const char *v32; // rcx
  int v33; // [rsp+20h] [rbp-88h]
  unsigned int v35; // [rsp+C0h] [rbp+18h]
  unsigned __int16 v36; // [rsp+C8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v9 = a8;
  v10 = a6;
  v11 = -1LL;
  v12 = (unsigned __int64)(unsigned int)a3 >> 16;
  v13 = a2;
  v14 = a9;
  v15 = 5LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v12 + (((unsigned int)(a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v23 = 10 * v12;
    if ( *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v12 + 1) >= a2 )
    {
      if ( a9 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( a9[v24] );
        v25 = v24 + 1;
      }
      else
      {
        v25 = 5LL;
      }
      v26 = a9;
      if ( !a9 )
        v26 = "NULL";
      if ( a8 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( a8[v27] );
        v28 = v27 + 1;
      }
      else
      {
        v28 = 5LL;
      }
      v29 = a8;
      if ( !a8 )
        v29 = "NULL";
      if ( a6 )
      {
        v30 = -1LL;
        do
          ++v30;
        while ( a6[v30] );
        v31 = v30 + 1;
      }
      else
      {
        v31 = 5LL;
      }
      v32 = a6;
      if ( !a6 )
        v32 = "NULL";
      pfnWppTraceMessage(
        *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + v23),
        43LL,
        &WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
        v36,
        v32,
        v31,
        &a7,
        8LL,
        v29,
        v28,
        v26,
        v25,
        0LL);
      a3 = v35;
      a4 = v36;
    }
  }
  if ( v14 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v14[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !v14 )
    v14 = "NULL";
  if ( v9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v9[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5LL;
  }
  if ( !v9 )
    v9 = "NULL";
  v21 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v11;
    while ( a6[v11] );
    v15 = v11 + 1;
    v21 = a6 == 0LL;
  }
  if ( v21 )
    v10 = "NULL";
  LOWORD(v33) = a4;
  return WppAutoLogTrace(
           a1,
           v13,
           a3,
           &WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
           v33,
           v10,
           v15,
           &a7,
           8LL,
           v9,
           v20,
           v14,
           v18,
           0LL);
}
