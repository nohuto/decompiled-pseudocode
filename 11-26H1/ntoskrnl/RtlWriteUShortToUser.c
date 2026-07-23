/*
 * XREFs of RtlWriteUShortToUser @ 0x1407822E4
 * Callers:
 *     CmpDoQueryKeyName @ 0x1402606D0 (CmpDoQueryKeyName.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepInternalFillNoAttribs @ 0x1403B1FBC (SepInternalFillNoAttribs.c)
 *     KiEmulateAtlThunk @ 0x1403D5600 (KiEmulateAtlThunk.c)
 *     PsQueryProcessCommandLine @ 0x1404AE810 (PsQueryProcessCommandLine.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1404C623C (ExpGetSystemEmulationProcessorInformation.c)
 *     PspQueryInformationProcessAvailableCpus @ 0x14052F1C8 (PspQueryInformationProcessAvailableCpus.c)
 *     ExpQueryNumaProximityNode @ 0x14077A4EC (ExpQueryNumaProximityNode.c)
 *     AlpcpPortQueryServerInfo @ 0x1407C448C (AlpcpPortQueryServerInfo.c)
 *     NtGetCurrentProcessorNumberEx @ 0x1407F66C0 (NtGetCurrentProcessorNumberEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x140844070 (NtQuerySystemEnvironmentValue.c)
 *     NtAddAtomEx @ 0x1408478B0 (NtAddAtomEx.c)
 *     NtFindAtom @ 0x140847A30 (NtFindAtom.c)
 *     IopQueryNameInternal @ 0x140920D34 (IopQueryNameInternal.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     ObQueryTypeInfo @ 0x140923260 (ObQueryTypeInfo.c)
 *     ExpQueryModuleInformationImageEx @ 0x14097E450 (ExpQueryModuleInformationImageEx.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 *     PspQueryLastCallThread @ 0x140A2B038 (PspQueryLastCallThread.c)
 *     EtwpCoverageSamplerQuery @ 0x140A32D00 (EtwpCoverageSamplerQuery.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     PfGetCompletedTrace @ 0x140A5CBD4 (PfGetCompletedTrace.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     NtQuerySymbolicLinkObject @ 0x140A95300 (NtQuerySymbolicLinkObject.c)
 *     VrpPreQueryKeyName @ 0x140AA5E64 (VrpPreQueryKeyName.c)
 *     PspUpdateCreateInfo @ 0x140ADDFE4 (PspUpdateCreateInfo.c)
 *     SeSecureBootQueryInformation @ 0x140B046CC (SeSecureBootQueryInformation.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140B137D8 (SeAssignWorldSecurityDescriptor.c)
 *     MmGetPageFileInformation @ 0x140B14EF4 (MmGetPageFileInformation.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     NtQueryInstallUILanguage @ 0x140B29800 (NtQueryInstallUILanguage.c)
 *     ExpQueryModuleInformationEx @ 0x140B3EA38 (ExpQueryModuleInformationEx.c)
 *     PopEtEnergyTrackerQuery @ 0x140B69ED8 (PopEtEnergyTrackerQuery.c)
 *     RtlWriteUShortToUser$thunk$4279219291461662417 @ 0x140C67110 (RtlWriteUShortToUser$thunk$4279219291461662417.c)
 * Callees:
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

void __fastcall RtlWriteUShortToUser(_WORD *a1, __int16 a2)
{
  ProbeForRead(a1, 2uLL, 1u);
  *a1 = a2;
}
