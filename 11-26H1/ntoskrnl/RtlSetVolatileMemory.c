/*
 * XREFs of RtlSetVolatileMemory @ 0x1407330A0
 * Callers:
 *     RtlClearBitsEx @ 0x14024EFA0 (RtlClearBitsEx.c)
 *     MiFlushDeferredAgingBucket @ 0x14029CF90 (MiFlushDeferredAgingBucket.c)
 *     MiGetUltraHugeAlreadyActive @ 0x140358430 (MiGetUltraHugeAlreadyActive.c)
 *     RtlFindClearBitsAndSet @ 0x1403586A0 (RtlFindClearBitsAndSet.c)
 *     RtlSetBits @ 0x140358D10 (RtlSetBits.c)
 *     RtlClearBits @ 0x1403591A0 (RtlClearBits.c)
 *     RtlSetBitsEx @ 0x14036F510 (RtlSetBitsEx.c)
 *     SepInternalFillNoAttribs @ 0x1403CBB54 (SepInternalFillNoAttribs.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     MiClearVadCellBits @ 0x140442760 (MiClearVadCellBits.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140448570 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     MiDecayNodeNowEmpty @ 0x140462438 (MiDecayNodeNowEmpty.c)
 *     SmEvictComplete @ 0x14046F594 (SmEvictComplete.c)
 *     PspQueryInformationProcessAvailableCpus @ 0x14052CCA8 (PspQueryInformationProcessAvailableCpus.c)
 *     KeQuerySecureSpeculationInformation @ 0x14052F590 (KeQuerySecureSpeculationInformation.c)
 *     SeSecurityModelQueryInformation @ 0x14077A94C (SeSecurityModelQueryInformation.c)
 *     RtlSetUserMemory @ 0x14077F608 (RtlSetUserMemory.c)
 *     KeQuerySpeculationControlInformation @ 0x1407BA658 (KeQuerySpeculationControlInformation.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14096F92C (EtwQueryProcessTelemetryInfo.c)
 *     NtAdjustPrivilegesToken @ 0x140A42610 (NtAdjustPrivilegesToken.c)
 *     PfGetCompletedTrace @ 0x140A538E4 (PfGetCompletedTrace.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140B11A58 (SeAssignWorldSecurityDescriptor.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     KeQueryCpuSetInformation @ 0x140B6A8B4 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlSetVolatileMemory(void *a1, int Val, size_t Size)
{
  return memset_0(a1, Val, Size);
}
