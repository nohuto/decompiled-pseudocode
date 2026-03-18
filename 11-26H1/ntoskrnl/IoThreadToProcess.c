/*
 * XREFs of IoThreadToProcess @ 0x1404703A0
 * Callers:
 *     DbgkQueueUserExceptionReport @ 0x14078AA1C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x14078AC30 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x14078B088 (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407C0410 (NtAlpcImpersonateClientContainerOfPort.c)
 *     PspCatchCriticalBreak @ 0x1407FA818 (PspCatchCriticalBreak.c)
 *     PspCriticalProcessDeathBlamedThreadTryGet @ 0x1407FAA68 (PspCriticalProcessDeathBlamedThreadTryGet.c)
 *     PsForceCrashForInvalidAccess @ 0x1407FD140 (PsForceCrashForInvalidAccess.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     AlpcpCreateSecurityContext @ 0x1409BC550 (AlpcpCreateSecurityContext.c)
 *     PspSetContextThreadInternal @ 0x1409EC360 (PspSetContextThreadInternal.c)
 *     PsLookupThreadByThreadId @ 0x140A10B70 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A191C0 (PspThreadFromTicket.c)
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A33250 (NtAlertThreadByThreadIdEx.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140A59C70 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtAlertThreadByThreadId @ 0x140A5D8F0 (NtAlertThreadByThreadId.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     NtSetContextThread @ 0x140AF7E80 (NtSetContextThread.c)
 *     NtGetCurrentProcessorNumber @ 0x140B1C500 (NtGetCurrentProcessorNumber.c)
 *     PsSyscallProviderDispatch @ 0x140B43670 (PsSyscallProviderDispatch.c)
 *     PspWow64SetContextThread @ 0x140B796B0 (PspWow64SetContextThread.c)
 *     PopFlushVolumeBlameResolverCallback @ 0x140BFD280 (PopFlushVolumeBlameResolverCallback.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
