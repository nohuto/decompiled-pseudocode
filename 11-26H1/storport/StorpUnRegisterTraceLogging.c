/*
 * XREFs of StorpUnRegisterTraceLogging @ 0x140190464
 * Callers:
 *     RaDeleteDriver @ 0x140183DC0 (RaDeleteDriver.c)
 * Callees:
 *     StorpUninitializePerfTelemetry @ 0x1400C44E0 (StorpUninitializePerfTelemetry.c)
 */

void StorpUnRegisterTraceLogging()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx

  if ( NotificationProviderInitialized == 1 )
  {
    v0 = qword_140172208;
    qword_140172208 = 0LL;
    dword_1401721E8 = 0;
    EtwUnregister(v0);
    NotificationProviderInitialized = 0;
  }
  if ( OnDemandDataProviderInitialized == 1 )
  {
    v1 = qword_1401721D0;
    qword_1401721D0 = 0LL;
    dword_1401721B0 = 0;
    EtwUnregister(v1);
    OnDemandDataProviderInitialized = 0;
  }
  if ( TelemetryProviderInitialized == 1 )
  {
    KeCancelTimer(&g_StorpTraceLoggingHierarchicalResetTimer);
    KeCancelTimer(&g_StorpTraceLoggingDailyTimer);
    if ( g_StorpTraceLoggingPerformanceEnabled || g_StorpTraceLoggingErrorDataEnabled )
      KeCancelTimer(&g_StorpTraceLoggingPerformanceTimer);
    if ( g_StorpTraceLoggingDeviceHealthEnabled )
      KeCancelTimer(&g_StorpTraceLoggingDeviceHealthTimer);
    KeCancelTimer(&g_StorpTraceLoggingDeviceLogPagesTimer);
    v2 = RegHandle;
    RegHandle = 0LL;
    dword_140172178 = 0;
    EtwUnregister(v2);
    StorpUninitializePerfTelemetry();
    TelemetryProviderInitialized = 0;
    KeFlushQueuedDpcs();
  }
}
