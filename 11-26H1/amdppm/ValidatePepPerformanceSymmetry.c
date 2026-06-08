/*
 * XREFs of ValidatePepPerformanceSymmetry @ 0x140031720
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x140031908 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_SS @ 0x1400092D4 (WPP_RECORDER_SF_SS.c)
 *     WPP_RECORDER_SF_SSd @ 0x140009A90 (WPP_RECORDER_SF_SSd.c)
 *     WPP_RECORDER_SF_SSs @ 0x14000A248 (WPP_RECORDER_SF_SSs.c)
 */

__int64 __fastcall ValidatePepPerformanceSymmetry(const wchar_t *a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  const char **v4; // rsi
  __int64 v5; // rbx
  __int64 v7; // r13
  unsigned int v10; // edi
  char v11; // al
  __int64 v12; // r8
  __int64 v13; // rdx
  int v15; // [rsp+28h] [rbp-59h]
  int v16; // [rsp+48h] [rbp-39h]
  const char *v17; // [rsp+50h] [rbp-31h] BYREF
  int v18; // [rsp+58h] [rbp-29h]
  const char *v19; // [rsp+60h] [rbp-21h]
  int v20; // [rsp+68h] [rbp-19h]
  const char *v21; // [rsp+70h] [rbp-11h]
  int v22; // [rsp+78h] [rbp-9h]
  const char *v23; // [rsp+80h] [rbp-1h]
  int v24; // [rsp+88h] [rbp+7h]
  const char *v25; // [rsp+90h] [rbp+Fh]
  int v26; // [rsp+98h] [rbp+17h]
  const char *v27; // [rsp+A0h] [rbp+1Fh]
  int v28; // [rsp+A8h] [rbp+27h]
  const char *v29; // [rsp+B0h] [rbp+2Fh]
  __int64 v30; // [rsp+100h] [rbp+7Fh]

  v30 = a4;
  v16 = 4;
  v17 = "HighestPerformance";
  v4 = &v17;
  v18 = 8;
  v19 = "NominalPerformance";
  v20 = 12;
  v21 = "LowestNonlinearPerformance";
  v5 = 0LL;
  v22 = 16;
  v23 = "LowestPerformance";
  v24 = 20;
  v25 = "NominalFrequency";
  v7 = 7LL;
  v26 = 48;
  v27 = "FrequencyCounterIndex";
  v28 = 52;
  v29 = "PerformanceCounterIndex";
  v10 = 0;
  do
  {
    if ( *(_DWORD *)(*((unsigned int *)v4 - 2) + a2) != *(_DWORD *)(*((unsigned int *)v4 - 2) + a4) )
    {
      v10 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_SSs((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, (__int64)a3, 0x4Fu, v15, a1, a3, *v4);
        a4 = v30;
      }
    }
    v4 += 2;
    --v7;
  }
  while ( v7 );
  v11 = *(_BYTE *)(a2 + 37);
  if ( v11 == *(_BYTE *)(a4 + 37) )
  {
    if ( v11 )
    {
      do
      {
        v12 = *(_QWORD *)(a4 + 40);
        v13 = *(_QWORD *)(a2 + 40);
        if ( *(_DWORD *)(v13 + 24 * v5) != *(_DWORD *)(v12 + 24 * v5)
          || *(_DWORD *)(v13 + 24 * v5 + 4) != *(_DWORD *)(v12 + 24 * v5 + 4) )
        {
          v10 = -1073741823;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_SSd((__int64)WPP_GLOBAL_Control->DeviceExtension, v13, v12, a4, v15, a1, a3);
            a4 = v30;
          }
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *(unsigned __int8 *)(a2 + 37) );
    }
  }
  else
  {
    v10 = -1073741823;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_SS((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, (__int64)a3, 0x50u, v15, a1, a3);
  }
  return v10;
}
