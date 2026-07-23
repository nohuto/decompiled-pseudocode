/*
 * XREFs of IoThreadToProcess @ 0x140469B20
 * Callers:
 *     DbgkQueueUserExceptionReport @ 0x14078D54C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x14078D760 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x14078DBB8 (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407C3470 (NtAlpcImpersonateClientContainerOfPort.c)
 *     PspCatchCriticalBreak @ 0x140800248 (PspCatchCriticalBreak.c)
 *     PspCriticalProcessDeathBlamedThreadTryGet @ 0x140800498 (PspCriticalProcessDeathBlamedThreadTryGet.c)
 *     PsForceCrashForInvalidAccess @ 0x140802B70 (PsForceCrashForInvalidAccess.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     AlpcpCreateSecurityContext @ 0x14098D530 (AlpcpCreateSecurityContext.c)
 *     PspSetContextThreadInternal @ 0x1409E8B30 (PspSetContextThreadInternal.c)
 *     PsLookupThreadByThreadId @ 0x140A0FD60 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A227F0 (PspThreadFromTicket.c)
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A4E1B0 (NtAlertThreadByThreadIdEx.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140A66BE0 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtAlertThreadByThreadId @ 0x140A6A8B0 (NtAlertThreadByThreadId.c)
 *     NtSetContextThread @ 0x140AFA520 (NtSetContextThread.c)
 *     NtGetCurrentProcessorNumber @ 0x140B1E710 (NtGetCurrentProcessorNumber.c)
 *     PsSyscallProviderDispatch @ 0x140B45560 (PsSyscallProviderDispatch.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 *     PopFlushVolumeBlameResolverCallback @ 0x140C03280 (PopFlushVolumeBlameResolverCallback.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
