/*
 * XREFs of RtlWriteUCharToUser @ 0x140782210
 * Callers:
 *     NtAssociateWaitCompletionPacket @ 0x140515EB0 (NtAssociateWaitCompletionPacket.c)
 *     ExpSetTimerObject @ 0x1406D2DD8 (ExpSetTimerObject.c)
 *     NtCancelTimer @ 0x1406D37B0 (NtCancelTimer.c)
 *     DbgkpMarkProcessPeb @ 0x14077895C (DbgkpMarkProcessPeb.c)
 *     AhcCacheQueryHwId @ 0x1407791E0 (AhcCacheQueryHwId.c)
 *     AlpcpPortQueryServerInfo @ 0x1407C448C (AlpcpPortQueryServerInfo.c)
 *     NtGetCurrentProcessorNumberEx @ 0x1407F66C0 (NtGetCurrentProcessorNumberEx.c)
 *     NtGetCachedSigningLevel @ 0x140815170 (NtGetCachedSigningLevel.c)
 *     EtwpGetSoftRestartInformation @ 0x1408343E8 (EtwpGetSoftRestartInformation.c)
 *     EtwpCoverageSamplerQueryStatusInformation @ 0x140837518 (EtwpCoverageSamplerQueryStatusInformation.c)
 *     NtSystemDebugControl @ 0x14084A9E0 (NtSystemDebugControl.c)
 *     AslpFileQueryExportName @ 0x140895368 (AslpFileQueryExportName.c)
 *     NtQueryObject @ 0x140921430 (NtQueryObject.c)
 *     KeUserModeCallback @ 0x140923D90 (KeUserModeCallback.c)
 *     MiQueryValidateParameters @ 0x1409247B0 (MiQueryValidateParameters.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     NtQuerySecurityAttributesToken @ 0x140925540 (NtQuerySecurityAttributesToken.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140925A30 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProbeMessageAttributes @ 0x140925AE0 (AlpcpProbeMessageAttributes.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     IopValidateQueryInformationParameters @ 0x14098667C (IopValidateQueryInformationParameters.c)
 *     NtQueryAttributesFile @ 0x140986B10 (NtQueryAttributesFile.c)
 *     MiMapViewOfSectionCommon @ 0x140993EA0 (MiMapViewOfSectionCommon.c)
 *     NtPrivilegeCheck @ 0x1409E1EF0 (NtPrivilegeCheck.c)
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 *     NtCompareTokens @ 0x140A3D530 (NtCompareTokens.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140A60090 (NtOpenObjectAuditAlarm.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 *     NtRemoveIoCompletionEx @ 0x140A6AAB0 (NtRemoveIoCompletionEx.c)
 *     NtQueryEvent @ 0x140A6C830 (NtQueryEvent.c)
 *     NtQueryLicenseValue @ 0x140A76CE0 (NtQueryLicenseValue.c)
 *     NtAlpcQueryInformation @ 0x140A7D210 (NtAlpcQueryInformation.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140B137D8 (SeAssignWorldSecurityDescriptor.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     NtQueryMutant @ 0x140B1F520 (NtQueryMutant.c)
 *     RtlWriteUCharToUser$thunk$17166446407143655193 @ 0x140C670E0 (RtlWriteUCharToUser$thunk$17166446407143655193.c)
 * Callees:
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

void __fastcall RtlWriteUCharToUser(_BYTE *a1, char a2)
{
  ProbeForRead(a1, 1uLL, 1u);
  *a1 = a2;
}
