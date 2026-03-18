/*
 * XREFs of PsGetSessionId @ 0x140447280
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x140446F40 (IopCheckSessionDeviceAccess.c)
 *     PfpLogApplicationEvent @ 0x140446FB0 (PfpLogApplicationEvent.c)
 *     IoGetRequestorSessionId @ 0x140447240 (IoGetRequestorSessionId.c)
 *     IoRaiseHardError @ 0x1405CB060 (IoRaiseHardError.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1407CC494 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x1407D10E8 (PopSendSuspendResumeApplicationNotification.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1407EFAF8 (PspTerminateSiloSubsystemProcesses.c)
 *     PspEstablishJobHierarchy @ 0x1407F836C (PspEstablishJobHierarchy.c)
 *     SeExchangePrimaryToken @ 0x140814B78 (SeExchangePrimaryToken.c)
 *     MiLogCommitRequestFailed @ 0x14087B7EC (MiLogCommitRequestFailed.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x14094CCC4 (ExpWnfGetCurrentScopeInstance.c)
 *     EtwpPsProvTraceProcess @ 0x140952CBC (EtwpPsProvTraceProcess.c)
 *     EtwpInitStateChangeInfo @ 0x140954454 (EtwpInitStateChangeInfo.c)
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14096F92C (EtwQueryProcessTelemetryInfo.c)
 *     PspInitializeProcessSecurity @ 0x140A2B070 (PspInitializeProcessSecurity.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     EtwTiLogSyscallUsage @ 0x140A53288 (EtwTiLogSyscallUsage.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     PsGetThreadSessionId @ 0x140A80EA0 (PsGetThreadSessionId.c)
 *     EtwpWriteProcessStarted @ 0x140AB66AC (EtwpWriteProcessStarted.c)
 *     PopInvokeWin32Callout @ 0x140ABCA7C (PopInvokeWin32Callout.c)
 *     MmCreatePeb @ 0x140ACA4F0 (MmCreatePeb.c)
 *     PspBindProcessSessionToJob @ 0x140AECEF8 (PspBindProcessSessionToJob.c)
 *     MiLogReserveVaFailed @ 0x140B3D6D0 (MiLogReserveVaFailed.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSessionId(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 744);
  if ( !v1 || (*(_DWORD *)(a1 + 1532) & 0x1000) != 0 )
    return 0LL;
  v3 = 0;
  if ( *(_DWORD *)(v1 + 8) != -1 )
    return *(unsigned int *)(v1 + 8);
  return v3;
}
