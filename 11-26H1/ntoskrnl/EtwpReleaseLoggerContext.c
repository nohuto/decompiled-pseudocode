/*
 * XREFs of EtwpReleaseLoggerContext @ 0x14093D918
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140488910 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpTransitionToRealtime @ 0x14052ECDC (EtwpTransitionToRealtime.c)
 *     EtwpGetPmcSessions @ 0x1406C3C00 (EtwpGetPmcSessions.c)
 *     EtwpGetCompressionSettings @ 0x1406C8204 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1406C8414 (EtwpSetCompressionSettings.c)
 *     EtwpSetSoftRestartInformation @ 0x140777D18 (EtwpSetSoftRestartInformation.c)
 *     EtwpIncrementTraceFile @ 0x14077B460 (EtwpIncrementTraceFile.c)
 *     EtwpTrackProviderBinaryKm @ 0x1408289A8 (EtwpTrackProviderBinaryKm.c)
 *     EtwpTrackProviderBinaryOld @ 0x140828C6C (EtwpTrackProviderBinaryOld.c)
 *     EtwpQueryReferenceTime @ 0x140828FF0 (EtwpQueryReferenceTime.c)
 *     WmipQueryTraceInformation @ 0x140829064 (WmipQueryTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x14082C950 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14082D210 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x14082D4F0 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetSoftRestartInformation @ 0x14082E1A8 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x14082E370 (EtwpKsrCallback.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14091ED40 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpTrackProviderRegistration @ 0x140936F80 (EtwpTrackProviderRegistration.c)
 *     EtwpAddRegEntryToGroup @ 0x14093B720 (EtwpAddRegEntryToGroup.c)
 *     EtwpSetProviderBinaryTracking @ 0x14093BF48 (EtwpSetProviderBinaryTracking.c)
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093E008 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x140A6F2F8 (EtwpStopTrace.c)
 *     EtwpLookupLoggerIdByName @ 0x140A7099C (EtwpLookupLoggerIdByName.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 *     EtwShutdown @ 0x140B362AC (EtwShutdown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x140B4C3A0 (EtwpTracingProvEnableCallback.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140CE1C9C (EtwpEnableBootLoggerRegistryProviders.c)
 *     EtwpFixBootLoggers @ 0x140CE1DAC (EtwpFixBootLoggers.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 170) + 704LL) + 8LL * *a1),
    1u);
}
