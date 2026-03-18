/*
 * XREFs of WPP_RECORDER_SF_dqss @ 0x140033F50
 * Callers:
 *     ACPIFanFSTCallback @ 0x140016F90 (ACPIFanFSTCallback.c)
 *     ACPIWakeEnableDisableAsync @ 0x140032F20 (ACPIWakeEnableDisableAsync.c)
 *     ACPIInitStartDevice @ 0x1400420EC (ACPIInitStartDevice.c)
 *     ACPICMButtonNotify @ 0x14004819C (ACPICMButtonNotify.c)
 *     ACPIInitDosDeviceName @ 0x14004C538 (ACPIInitDosDeviceName.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1400559D8 (ACPICMExperienceButtonHandleEvent.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x1400B0460 (ACPIFanPrepareImpactZoneSupport.c)
 *     ACPIFanValidateImpactZoneSupport @ 0x1400B0BC0 (ACPIFanValidateImpactZoneSupport.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  __int64 v9; // rbp
  const char *v10; // rdi
  const char *v11; // rsi
  unsigned __int64 v13; // r14
  unsigned int v14; // r15d
  unsigned int v15; // r12d
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // r11
  char *v19; // r10
  __int64 v20; // rax
  __int64 v21; // r9
  const char *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  const char *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // zf
  int v30; // [rsp+20h] [rbp-78h]

  v9 = 5LL;
  v10 = a9;
  v11 = a8;
  v13 = (unsigned __int64)a3 >> 16;
  v14 = a2;
  v15 = a4;
  v16 = -1LL;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v13 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v18 = a5;
  if ( _bittest(&v17, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v19 = (char *)WPP_GLOBAL_Control + 80 * v13;
    if ( (unsigned __int8)v19[41] >= a2 )
    {
      if ( a9 )
      {
        v20 = -1LL;
        do
          v28 = a9[++v20] == 0;
        while ( !v28 );
        v21 = v20 + 1;
      }
      else
      {
        v21 = 5LL;
      }
      v22 = a9;
      if ( !a9 )
        v22 = "NULL";
      if ( a8 )
      {
        v23 = -1LL;
        do
          v28 = a8[++v23] == 0;
        while ( !v28 );
        v24 = v23 + 1;
      }
      else
      {
        v24 = 5LL;
      }
      v25 = a8;
      if ( !a8 )
        v25 = "NULL";
      pfnWppTraceMessage(*((_QWORD *)v19 + 3), 43LL, a5, v15, &a6, 4LL, &a7, 8LL, v25, v24, v22, v21, 0LL);
      v18 = a5;
    }
  }
  if ( v10 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v10[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  v28 = v11 == 0LL;
  if ( v11 )
  {
    do
      v28 = v11[++v16] == 0;
    while ( !v28 );
    v9 = v16 + 1;
    v28 = v11 == 0LL;
  }
  if ( v28 )
    v11 = "NULL";
  LOWORD(v30) = v15;
  return WppAutoLogTrace(a1, v14, a3, v18, v30, &a6, 4LL, &a7, 8LL, v11, v9, v10, v27, 0LL);
}
