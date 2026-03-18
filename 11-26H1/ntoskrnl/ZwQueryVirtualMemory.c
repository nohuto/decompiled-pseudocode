/*
 * XREFs of ZwQueryVirtualMemory @ 0x140723850
 * Callers:
 *     SepGetStackTraceHash @ 0x140260EE8 (SepGetStackTraceHash.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140391600 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140391AB4 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1403D7184 (KiVerifyContextXStateCetUEnabled.c)
 *     RtlpCreateHeap @ 0x1404E3978 (RtlpCreateHeap.c)
 *     RtlpHpFixedHeapCreate @ 0x1404E3BF0 (RtlpHpFixedHeapCreate.c)
 *     DifZwQueryVirtualMemoryWrapper @ 0x1406B4CB0 (DifZwQueryVirtualMemoryWrapper.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x14082A7E0 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x14082B320 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x14082BEAC (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     PspFreeUserFiberShadowStack @ 0x14095ED2C (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x14095EF5C (PspFreeCurrentThreadUserShadowStack.c)
 *     sub_1409F0AF4 @ 0x1409F0AF4 (sub_1409F0AF4.c)
 *     EtwTiLogReadWriteVm @ 0x140A22020 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogProtectExecVm @ 0x140A79D30 (EtwTiLogProtectExecVm.c)
 *     EtwpTiQueryVad @ 0x140A82DC0 (EtwpTiQueryVad.c)
 *     LdrpResGetMappingSize @ 0x140A9B310 (LdrpResGetMappingSize.c)
 *     PspGetScpCfgFunctions @ 0x140A9B720 (PspGetScpCfgFunctions.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140C3D1D0 (VfMiscMmUnmapLockedPages_Entry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
