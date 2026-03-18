/*
 * XREFs of VidSchiInitGlobals @ 0x1400C461C
 * Callers:
 *     DriverEntry @ 0x14012F078 (DriverEntry.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 VidSchiInitGlobals()
{
  NTSTATUS v0; // eax
  __int64 v1; // rdi
  __int64 v2; // rcx
  int LiveDumpWithWdLogs; // eax
  __int64 v4; // rcx
  struct _PCW_REGISTRATION_INFORMATION v6; // [rsp+50h] [rbp-48h] BYREF
  __int64 v7; // [rsp+80h] [rbp-18h]

  *(_QWORD *)&v6.Version = 512LL;
  qword_14008A9B0 = (__int64)&gAdapterListHead;
  gAdapterListHead = &gAdapterListHead;
  *(_QWORD *)&v6.CounterCount = 2LL;
  v7 = 0LL;
  v6.Name = (PCUNICODE_STRING)&`InitRegistrationInformationGpuPerformanceCounterSetEngine'::`2'::Name;
  v6.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetEngine'::`2'::Descriptors;
  v6.Callback = 0LL;
  v6.CallbackContext = 0LL;
  v0 = PcwRegister(&GpuPerformanceCounterSetEngine, &v6);
  v1 = v0;
  if ( v0 >= 0 )
  {
    PerfCounterSetEngineRegistered = 1;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, v0);
    WdLogGlobalForLineNumber = 185;
    DxgkLogInternalTriageEvent(v2, 0x40000LL);
    LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(403LL, 2065LL, v1, 0LL, 0LL, 0);
    if ( LiveDumpWithWdLogs < 0 )
    {
      WdLogSingleEntry1(1LL, LiveDumpWithWdLogs);
      WdLogGlobalForLineNumber = 206;
      DxgkLogInternalTriageEvent(v4, 0x40000LL);
    }
    return (unsigned int)v1;
  }
}
