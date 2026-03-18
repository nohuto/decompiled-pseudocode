/*
 * XREFs of RtlSetUserMemory @ 0x14077F608
 * Callers:
 *     ExpWorkerFactoryFinishDeferredWork @ 0x14037D4AC (ExpWorkerFactoryFinishDeferredWork.c)
 *     SepInternalFillNoAttribs @ 0x1403CBB54 (SepInternalFillNoAttribs.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     KiInitializeUserApc @ 0x140446248 (KiInitializeUserApc.c)
 *     KeWriteExceptionRecordToUser @ 0x1404B8260 (KeWriteExceptionRecordToUser.c)
 *     PspQueryInformationProcessAvailableCpus @ 0x14052CCA8 (PspQueryInformationProcessAvailableCpus.c)
 *     KeQuerySecureSpeculationInformation @ 0x14052F590 (KeQuerySecureSpeculationInformation.c)
 *     SeSecurityModelQueryInformation @ 0x14077A94C (SeSecurityModelQueryInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x1407BA658 (KeQuerySpeculationControlInformation.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     EtwpCoverageSamplerQuery @ 0x14093FBF0 (EtwpCoverageSamplerQuery.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14094A448 (ExpWnfDeliverThreadNotifications.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14096F92C (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpExposeAttributes @ 0x140972B20 (AlpcpExposeAttributes.c)
 *     NtAdjustPrivilegesToken @ 0x140A42610 (NtAdjustPrivilegesToken.c)
 *     PfGetCompletedTrace @ 0x140A538E4 (PfGetCompletedTrace.c)
 *     NtGetMUIRegistryInfo @ 0x140AE5010 (NtGetMUIRegistryInfo.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140B11A58 (SeAssignWorldSecurityDescriptor.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     PopEtEnergyTrackerQuery @ 0x140B66F4C (PopEtEnergyTrackerQuery.c)
 *     KeQueryCpuSetInformation @ 0x140B6A8B4 (KeQueryCpuSetInformation.c)
 *     VfGetVerifierInformationEx @ 0x140C200F4 (VfGetVerifierInformationEx.c)
 *     RtlSetUserMemory$thunk$13760698665666989659 @ 0x140C610B0 (RtlSetUserMemory$thunk$13760698665666989659.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x1407330A0 (RtlSetVolatileMemory.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

void *__fastcall RtlSetUserMemory(void *a1, unsigned __int8 a2, SIZE_T a3)
{
  int v4; // esi

  v4 = a2;
  ProbeForRead(a1, a3, 1u);
  return RtlSetVolatileMemory(a1, v4, a3);
}
