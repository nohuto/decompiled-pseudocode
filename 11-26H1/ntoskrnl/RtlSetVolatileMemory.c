/*
 * XREFs of RtlSetVolatileMemory @ 0x140737C70
 * Callers:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     MiFlushDeferredAgingBucket @ 0x14029C4F0 (MiFlushDeferredAgingBucket.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14035A1D0 (MiGetUltraHugeAlreadyActive.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepInternalFillNoAttribs @ 0x1403B1FBC (SepInternalFillNoAttribs.c)
 *     MiClearVadCellBits @ 0x14043B270 (MiClearVadCellBits.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140441060 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     MiDecayNodeNowEmpty @ 0x14045B3F8 (MiDecayNodeNowEmpty.c)
 *     SmEvictComplete @ 0x140468D14 (SmEvictComplete.c)
 *     PspQueryInformationProcessAvailableCpus @ 0x14052F1C8 (PspQueryInformationProcessAvailableCpus.c)
 *     KeQuerySecureSpeculationInformation @ 0x140531AB0 (KeQuerySecureSpeculationInformation.c)
 *     SeSecurityModelQueryInformation @ 0x14077D87C (SeSecurityModelQueryInformation.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     KeQuerySpeculationControlInformation @ 0x1407BD6B8 (KeQuerySpeculationControlInformation.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 *     NtAdjustPrivilegesToken @ 0x1409E1580 (NtAdjustPrivilegesToken.c)
 *     PfGetCompletedTrace @ 0x140A5CBD4 (PfGetCompletedTrace.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140B137D8 (SeAssignWorldSecurityDescriptor.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     KeQueryCpuSetInformation @ 0x140B6DAC4 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlSetVolatileMemory(void *a1, int Val, size_t Size)
{
  return memset_0(a1, Val, Size);
}
