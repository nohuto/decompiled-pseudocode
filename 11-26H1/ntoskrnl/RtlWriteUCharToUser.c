/*
 * XREFs of RtlWriteUCharToUser @ 0x14077F710
 * Callers:
 *     NtAssociateWaitCompletionPacket @ 0x14051B900 (NtAssociateWaitCompletionPacket.c)
 *     ExpSetTimerObject @ 0x1406CEDA8 (ExpSetTimerObject.c)
 *     NtCancelTimer @ 0x1406CF780 (NtCancelTimer.c)
 *     DbgkpMarkProcessPeb @ 0x140775AB4 (DbgkpMarkProcessPeb.c)
 *     AhcCacheQueryHwId @ 0x140776338 (AhcCacheQueryHwId.c)
 *     AlpcpPortQueryServerInfo @ 0x1407C0EF8 (AlpcpPortQueryServerInfo.c)
 *     NtGetCurrentProcessorNumberEx @ 0x1407F0B60 (NtGetCurrentProcessorNumberEx.c)
 *     NtGetCachedSigningLevel @ 0x14080F6E0 (NtGetCachedSigningLevel.c)
 *     EtwpGetSoftRestartInformation @ 0x14082E1A8 (EtwpGetSoftRestartInformation.c)
 *     EtwpCoverageSamplerQueryStatusInformation @ 0x1408312D8 (EtwpCoverageSamplerQueryStatusInformation.c)
 *     NtSystemDebugControl @ 0x1408459A0 (NtSystemDebugControl.c)
 *     AslpFileQueryExportName @ 0x14088EF6C (AslpFileQueryExportName.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     NtQuerySecurityAttributesToken @ 0x1408F55B0 (NtQuerySecurityAttributesToken.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1408F5AA0 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProbeMessageAttributes @ 0x1408F5B50 (AlpcpProbeMessageAttributes.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     AlpcpProcessSynchronousRequest @ 0x1408F7730 (AlpcpProcessSynchronousRequest.c)
 *     MiQueryValidateParameters @ 0x14091FC40 (MiQueryValidateParameters.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 *     IopValidateQueryInformationParameters @ 0x1409B55BC (IopValidateQueryInformationParameters.c)
 *     NtQueryAttributesFile @ 0x1409B5A50 (NtQueryAttributesFile.c)
 *     MiMapViewOfSectionCommon @ 0x1409C2EC0 (MiMapViewOfSectionCommon.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1409F7550 (NtOpenObjectAuditAlarm.c)
 *     NtQueryObject @ 0x1409FC830 (NtQueryObject.c)
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 *     NtCompareTokens @ 0x140A2A4A0 (NtCompareTokens.c)
 *     NtPrivilegeCheck @ 0x140A42F40 (NtPrivilegeCheck.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     KeUserModeCallback @ 0x140A59280 (KeUserModeCallback.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     NtRemoveIoCompletionEx @ 0x140A5DAF0 (NtRemoveIoCompletionEx.c)
 *     NtQueryEvent @ 0x140A5F870 (NtQueryEvent.c)
 *     NtQueryLicenseValue @ 0x140A6A340 (NtQueryLicenseValue.c)
 *     NtAlpcQueryInformation @ 0x140A6BBE0 (NtAlpcQueryInformation.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140B11A58 (SeAssignWorldSecurityDescriptor.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     NtQueryMutant @ 0x140B1D3A0 (NtQueryMutant.c)
 *     RtlWriteUCharToUser$thunk$17166446407143655193 @ 0x140C610E0 (RtlWriteUCharToUser$thunk$17166446407143655193.c)
 * Callees:
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

void __fastcall RtlWriteUCharToUser(_BYTE *a1, char a2)
{
  ProbeForRead(a1, 1uLL, 1u);
  *a1 = a2;
}
