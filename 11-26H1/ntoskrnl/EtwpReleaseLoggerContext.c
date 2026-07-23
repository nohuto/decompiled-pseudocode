/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1409194B8
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140482450 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpTransitionToRealtime @ 0x1405311FC (EtwpTransitionToRealtime.c)
 *     EtwpGetPmcSessions @ 0x1406C7840 (EtwpGetPmcSessions.c)
 *     EtwpGetCompressionSettings @ 0x1406CC1E4 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1406CC3F4 (EtwpSetCompressionSettings.c)
 *     EtwpSetSoftRestartInformation @ 0x14077ABB8 (EtwpSetSoftRestartInformation.c)
 *     EtwpIncrementTraceFile @ 0x14077E0A0 (EtwpIncrementTraceFile.c)
 *     EtwpTrackProviderBinaryKm @ 0x14082EBE8 (EtwpTrackProviderBinaryKm.c)
 *     EtwpTrackProviderBinaryOld @ 0x14082EEAC (EtwpTrackProviderBinaryOld.c)
 *     EtwpQueryReferenceTime @ 0x14082F230 (EtwpQueryReferenceTime.c)
 *     WmipQueryTraceInformation @ 0x14082F2A4 (WmipQueryTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x140832B90 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140833450 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x140833730 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetSoftRestartInformation @ 0x1408343E8 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1408345B0 (EtwpKsrCallback.c)
 *     EtwpTrackProviderRegistration @ 0x140912B20 (EtwpTrackProviderRegistration.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpSetProviderBinaryTracking @ 0x140917AE8 (EtwpSetProviderBinaryTracking.c)
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1409797A0 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x140AB2034 (EtwpLookupLoggerIdByName.c)
 *     EtwpStopTrace @ 0x140AB2D10 (EtwpStopTrace.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 *     EtwShutdown @ 0x140B384BC (EtwShutdown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x140B4E130 (EtwpTracingProvEnableCallback.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140CE803C (EtwpEnableBootLoggerRegistryProviders.c)
 *     EtwpFixBootLoggers @ 0x140CE814C (EtwpFixBootLoggers.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 170) + 704LL) + 8LL * *a1),
    1u);
}
