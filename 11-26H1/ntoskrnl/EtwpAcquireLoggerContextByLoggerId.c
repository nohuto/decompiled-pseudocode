/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140488910 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x1406C3C00 (EtwpGetPmcSessions.c)
 *     EtwpGetCompressionSettings @ 0x1406C8204 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1406C8414 (EtwpSetCompressionSettings.c)
 *     EtwpSetSoftRestartInformation @ 0x140777D18 (EtwpSetSoftRestartInformation.c)
 *     EtwpTrackProviderBinaryKm @ 0x1408289A8 (EtwpTrackProviderBinaryKm.c)
 *     EtwpTrackProviderBinaryOld @ 0x140828C6C (EtwpTrackProviderBinaryOld.c)
 *     EtwpQueryReferenceTime @ 0x140828FF0 (EtwpQueryReferenceTime.c)
 *     WmipQueryTraceInformation @ 0x140829064 (WmipQueryTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x14082C950 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14082D210 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpGetSoftRestartInformation @ 0x14082E1A8 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x14082E370 (EtwpKsrCallback.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14091ED40 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContext @ 0x14091EE28 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateEnableNotification @ 0x14091F4CC (EtwpValidateEnableNotification.c)
 *     EtwpGetTraceGuidInfo @ 0x140935E90 (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderRegistration @ 0x140936F80 (EtwpTrackProviderRegistration.c)
 *     EtwpAddRegEntryToGroup @ 0x14093B720 (EtwpAddRegEntryToGroup.c)
 *     EtwpSetProviderBinaryTracking @ 0x14093BF48 (EtwpSetProviderBinaryTracking.c)
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093E008 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A693C0 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A6F5B8 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpLookupLoggerIdByName @ 0x140A7099C (EtwpLookupLoggerIdByName.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140A71974 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpUpdateDisallowList @ 0x140AE392C (EtwpUpdateDisallowList.c)
 *     AddDecodeGuidToSessions @ 0x140AFD670 (AddDecodeGuidToSessions.c)
 *     EtwpGetDisallowList @ 0x140AFDB14 (EtwpGetDisallowList.c)
 *     EtwpRealtimeConnect @ 0x140B294B0 (EtwpRealtimeConnect.c)
 *     EtwShutdown @ 0x140B362AC (EtwShutdown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x140B4C3A0 (EtwpTracingProvEnableCallback.c)
 *     EtwpFixBootLoggers @ 0x140CE1DAC (EtwpFixBootLoggers.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218100 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
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
