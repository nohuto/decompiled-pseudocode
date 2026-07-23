/*
 * XREFs of PsGetSessionId @ 0x14043FD70
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x14043FA30 (IopCheckSessionDeviceAccess.c)
 *     PfpLogApplicationEvent @ 0x14043FAA0 (PfpLogApplicationEvent.c)
 *     IoGetRequestorSessionId @ 0x14043FD30 (IoGetRequestorSessionId.c)
 *     IoRaiseHardError @ 0x1405CD930 (IoRaiseHardError.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1407CF534 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x1407D4188 (PopSendSuspendResumeApplicationNotification.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1407F5658 (PspTerminateSiloSubsystemProcesses.c)
 *     PspEstablishJobHierarchy @ 0x1407FDE6C (PspEstablishJobHierarchy.c)
 *     SeExchangePrimaryToken @ 0x14081AC68 (SeExchangePrimaryToken.c)
 *     MiLogCommitRequestFailed @ 0x140881BEC (MiLogCommitRequestFailed.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1409C8634 (ExpWnfGetCurrentScopeInstance.c)
 *     EtwpPsProvTraceProcess @ 0x1409CE5FC (EtwpPsProvTraceProcess.c)
 *     EtwpInitStateChangeInfo @ 0x1409D0CD8 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x1409D0E30 (EtwpWriteProcessStarted.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     EtwTiLogSyscallUsage @ 0x140A5C578 (EtwTiLogSyscallUsage.c)
 *     PsGetThreadSessionId @ 0x140A86D10 (PsGetThreadSessionId.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     PopInvokeWin32Callout @ 0x140ABE89C (PopInvokeWin32Callout.c)
 *     MmCreatePeb @ 0x140ACC600 (MmCreatePeb.c)
 *     PspBindProcessSessionToJob @ 0x140AEFF08 (PspBindProcessSessionToJob.c)
 *     MiLogReserveVaFailed @ 0x140B3F7A0 (MiLogReserveVaFailed.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     PspInitializeProcessSecurity @ 0x140B80FF8 (PspInitializeProcessSecurity.c)
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
