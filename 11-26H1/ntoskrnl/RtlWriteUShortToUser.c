/*
 * XREFs of RtlWriteUShortToUser @ 0x14077F7E4
 * Callers:
 *     CmpDoQueryKeyName @ 0x140261160 (CmpDoQueryKeyName.c)
 *     SepInternalFillNoAttribs @ 0x1403CBB54 (SepInternalFillNoAttribs.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     KiEmulateAtlThunk @ 0x1403D2630 (KiEmulateAtlThunk.c)
 *     PsQueryProcessCommandLine @ 0x1404B54B0 (PsQueryProcessCommandLine.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1404CCA9C (ExpGetSystemEmulationProcessorInformation.c)
 *     PspQueryInformationProcessAvailableCpus @ 0x14052CCA8 (PspQueryInformationProcessAvailableCpus.c)
 *     ExpQueryNumaProximityNode @ 0x140777644 (ExpQueryNumaProximityNode.c)
 *     AlpcpPortQueryServerInfo @ 0x1407C0EF8 (AlpcpPortQueryServerInfo.c)
 *     NtGetCurrentProcessorNumberEx @ 0x1407F0B60 (NtGetCurrentProcessorNumberEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x14083DE30 (NtQuerySystemEnvironmentValue.c)
 *     NtAddAtomEx @ 0x140841670 (NtAddAtomEx.c)
 *     NtFindAtom @ 0x1408417F0 (NtFindAtom.c)
 *     EtwpCoverageSamplerQuery @ 0x14093FBF0 (EtwpCoverageSamplerQuery.c)
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     IopQueryNameInternal @ 0x1409FC134 (IopQueryNameInternal.c)
 *     ObQueryNameStringMode @ 0x1409FDA40 (ObQueryNameStringMode.c)
 *     ObQueryTypeInfo @ 0x1409FE660 (ObQueryTypeInfo.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 *     PspQueryLastCallThread @ 0x140A21A18 (PspQueryLastCallThread.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     PfGetCompletedTrace @ 0x140A538E4 (PfGetCompletedTrace.c)
 *     NtQuerySymbolicLinkObject @ 0x140A907B0 (NtQuerySymbolicLinkObject.c)
 *     VrpPreQueryKeyName @ 0x140AA9B60 (VrpPreQueryKeyName.c)
 *     ExpQueryModuleInformationImageEx @ 0x140AB8C40 (ExpQueryModuleInformationImageEx.c)
 *     PspUpdateCreateInfo @ 0x140AE09B4 (PspUpdateCreateInfo.c)
 *     SeSecureBootQueryInformation @ 0x140B0299C (SeSecureBootQueryInformation.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140B11A58 (SeAssignWorldSecurityDescriptor.c)
 *     MmGetPageFileInformation @ 0x140B13430 (MmGetPageFileInformation.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     NtQueryInstallUILanguage @ 0x140B27B70 (NtQueryInstallUILanguage.c)
 *     ExpQueryModuleInformationEx @ 0x140B3C7B8 (ExpQueryModuleInformationEx.c)
 *     PopEtEnergyTrackerQuery @ 0x140B66F4C (PopEtEnergyTrackerQuery.c)
 *     RtlWriteUShortToUser$thunk$4279219291461662417 @ 0x140C61110 (RtlWriteUShortToUser$thunk$4279219291461662417.c)
 * Callees:
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

void __fastcall RtlWriteUShortToUser(_WORD *a1, __int16 a2)
{
  ProbeForRead(a1, 2uLL, 1u);
  *a1 = a2;
}
