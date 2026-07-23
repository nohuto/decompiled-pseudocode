/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x140979A20
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140482450 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x1406C7840 (EtwpGetPmcSessions.c)
 *     EtwpGetCompressionSettings @ 0x1406CC1E4 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1406CC3F4 (EtwpSetCompressionSettings.c)
 *     EtwpSetSoftRestartInformation @ 0x14077ABB8 (EtwpSetSoftRestartInformation.c)
 *     EtwpTrackProviderBinaryKm @ 0x14082EBE8 (EtwpTrackProviderBinaryKm.c)
 *     EtwpTrackProviderBinaryOld @ 0x14082EEAC (EtwpTrackProviderBinaryOld.c)
 *     EtwpQueryReferenceTime @ 0x14082F230 (EtwpQueryReferenceTime.c)
 *     WmipQueryTraceInformation @ 0x14082F2A4 (WmipQueryTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x140832B90 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140833450 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpGetSoftRestartInformation @ 0x1408343E8 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1408345B0 (EtwpKsrCallback.c)
 *     EtwpGetTraceGuidInfo @ 0x140911A40 (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderRegistration @ 0x140912B20 (EtwpTrackProviderRegistration.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpSetProviderBinaryTracking @ 0x140917AE8 (EtwpSetProviderBinaryTracking.c)
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1409797A0 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContext @ 0x140979888 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateEnableNotification @ 0x140979F2C (EtwpValidateEnableNotification.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A76390 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A99C44 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x140AB2034 (EtwpLookupLoggerIdByName.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140AB2BB4 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpRealtimeConnect @ 0x140AB34A8 (EtwpRealtimeConnect.c)
 *     EtwpUpdateDisallowList @ 0x140AE1434 (EtwpUpdateDisallowList.c)
 *     AddDecodeGuidToSessions @ 0x140AFF1E0 (AddDecodeGuidToSessions.c)
 *     EtwpGetDisallowList @ 0x140AFFB84 (EtwpGetDisallowList.c)
 *     EtwShutdown @ 0x140B384BC (EtwShutdown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x140B4E130 (EtwpTracingProvEnableCallback.c)
 *     EtwpFixBootLoggers @ 0x140CE814C (EtwpFixBootLoggers.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218430 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, char a3)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v7; // rcx
  __int64 v8; // r14
  unsigned int *v9; // rbx

  if ( a2 >= *(_DWORD *)(a1 + 16) || (*(_BYTE *)(*(_QWORD *)(a1 + 712) + 8LL * a2) & 1) != 0 )
    return 0LL;
  v8 = 8LL * a2;
  if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + *(_QWORD *)(a1 + 704)), 1u) )
  {
    if ( a2 >= *(_DWORD *)(a1 + 16)
      || (_mm_lfence(), v9 = *(unsigned int **)(v8 + *(_QWORD *)(a1 + 712)), ((unsigned __int8)v9 & 1) != 0) )
    {
      v7 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(a1 + 704) + v8);
    }
    else
    {
      if ( a3 )
        KeWaitForSingleObject(v9 + 158, Executive, 0, 0, 0LL);
      if ( v9[80] )
        return v9;
      if ( a3 )
        KeReleaseMutex((PRKMUTEX)(v9 + 158), 0);
      v7 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(*((_QWORD *)v9 + 170) + 704LL) + 8LL * *v9);
    }
    ExReleaseRundownProtectionCacheAwareEx(v7, 1u);
  }
  return 0LL;
}
