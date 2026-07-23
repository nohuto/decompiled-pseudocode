/*
 * XREFs of RtlSetUserMemory @ 0x140782108
 * Callers:
 *     ExpWorkerFactoryFinishDeferredWork @ 0x14037F25C (ExpWorkerFactoryFinishDeferredWork.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepInternalFillNoAttribs @ 0x1403B1FBC (SepInternalFillNoAttribs.c)
 *     KiInitializeUserApc @ 0x14043ED48 (KiInitializeUserApc.c)
 *     KeWriteExceptionRecordToUser @ 0x1404B1A90 (KeWriteExceptionRecordToUser.c)
 *     PspQueryInformationProcessAvailableCpus @ 0x14052F1C8 (PspQueryInformationProcessAvailableCpus.c)
 *     KeQuerySecureSpeculationInformation @ 0x140531AB0 (KeQuerySecureSpeculationInformation.c)
 *     SeSecurityModelQueryInformation @ 0x14077D87C (SeSecurityModelQueryInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x1407BD6B8 (KeQuerySpeculationControlInformation.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     AlpcpExposeAttributes @ 0x1409B93B0 (AlpcpExposeAttributes.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1409C5DB8 (ExpWnfDeliverThreadNotifications.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 *     NtAdjustPrivilegesToken @ 0x1409E1580 (NtAdjustPrivilegesToken.c)
 *     EtwpCoverageSamplerQuery @ 0x140A32D00 (EtwpCoverageSamplerQuery.c)
 *     PfGetCompletedTrace @ 0x140A5CBD4 (PfGetCompletedTrace.c)
 *     NtGetMUIRegistryInfo @ 0x140AE2DD0 (NtGetMUIRegistryInfo.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140B137D8 (SeAssignWorldSecurityDescriptor.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     PopEtEnergyTrackerQuery @ 0x140B69ED8 (PopEtEnergyTrackerQuery.c)
 *     KeQueryCpuSetInformation @ 0x140B6DAC4 (KeQueryCpuSetInformation.c)
 *     VfGetVerifierInformationEx @ 0x140C26100 (VfGetVerifierInformationEx.c)
 *     RtlSetUserMemory$thunk$13760698665666989659 @ 0x140C670B0 (RtlSetUserMemory$thunk$13760698665666989659.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

void *__fastcall RtlSetUserMemory(void *a1, unsigned __int8 a2, SIZE_T a3)
{
  int v4; // esi

  v4 = a2;
  ProbeForRead(a1, a3, 1u);
  return RtlSetVolatileMemory(a1, v4, a3);
}
