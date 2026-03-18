/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sd @ 0x14021ADC0
 * Callers:
 *     InitializeSensorExplicitly @ 0x140110F40 (InitializeSensorExplicitly.c)
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x140111118 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1401BAF54 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     InitializeInputSensorsOnSharedThread @ 0x14021B944 (InitializeInputSensorsOnSharedThread.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void WPP_RECORDER_AND_TRACE_SF_sd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        const char *a9,
        ...)
{
  const char *v9; // rbx
  __int64 v10; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  bool v18; // zf
  int v19; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+B8h] [rbp+50h] BYREF

  va_start(va, a9);
  v9 = a9;
  v10 = -1LL;
  v14 = 5LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a9[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a9;
    if ( !a9 )
      v17 = "NULL";
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, const char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      a8,
      a7,
      v17,
      v16,
      va,
      4LL,
      0LL);
  }
  if ( a3 )
  {
    v18 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v10;
      while ( a9[v10] );
      v14 = v10 + 1;
      v18 = a9 == 0LL;
    }
    if ( v18 )
      v9 = "NULL";
    LOWORD(v19) = a7;
    WppAutoLogTrace(a4, a5, a6, a8, v19, v9, v14, va, 4LL, 0LL);
  }
}
