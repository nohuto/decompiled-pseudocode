/*
 * XREFs of PpmEventTracePerfCheckStop @ 0x140258628
 * Callers:
 *     PpmCheckRun @ 0x140258540 (PpmCheckRun.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN PpmEventTracePerfCheckStop()
{
  BOOLEAN result; // al
  int v1; // [rsp+40h] [rbp-61h] BYREF
  int v2; // [rsp+48h] [rbp-59h] BYREF
  int v3; // [rsp+50h] [rbp-51h] BYREF
  int v4; // [rsp+58h] [rbp-49h] BYREF
  __int64 v5; // [rsp+60h] [rbp-41h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-31h] BYREF
  int *v8; // [rsp+80h] [rbp-21h]
  __int64 v9; // [rsp+88h] [rbp-19h]
  int *v10; // [rsp+90h] [rbp-11h]
  __int64 v11; // [rsp+98h] [rbp-9h]
  __int64 *v12; // [rsp+A0h] [rbp-1h]
  __int64 v13; // [rsp+A8h] [rbp+7h]
  int *v14; // [rsp+B0h] [rbp+Fh]
  __int64 v15; // [rsp+B8h] [rbp+17h]
  int *v16; // [rsp+C0h] [rbp+1Fh]
  __int64 v17; // [rsp+C8h] [rbp+27h]
  void *v18; // [rsp+D0h] [rbp+2Fh]
  int v19; // [rsp+D8h] [rbp+37h]
  int v20; // [rsp+DCh] [rbp+3Bh]

  v1 = PpmCheckPipelineIndex;
  v4 = PpmCheckStartupTime;
  v3 = PpmCheckIterations;
  result = PpmCheckCurrentPipelineId;
  v2 = PpmCheckCurrentPipelineId;
  if ( PpmEtwRegistered )
  {
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP);
    if ( result )
    {
      v5 = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter) - PpmCheckTime;
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v8 = &v2;
      v10 = &v3;
      v12 = &v5;
      v14 = &v4;
      v16 = &v1;
      v18 = &PpmCheckPhaseStatistics;
      v19 = 8 * v1;
      v9 = 4LL;
      v11 = 4LL;
      v13 = 8LL;
      v15 = 4LL;
      v17 = 4LL;
      v20 = 0;
      return EtwWriteEx(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
  return result;
}
