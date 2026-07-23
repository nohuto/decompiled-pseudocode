/*
 * XREFs of ZwQueryVirtualMemory @ 0x14069B5A0
 * Callers:
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14020AA10 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1402622DC (KiVerifyContextXStateCetUEnabled.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14044EB38 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     SepGetStackTraceHash @ 0x14048CD74 (SepGetStackTraceHash.c)
 *     RtlpCreateHeap @ 0x1404D8494 (RtlpCreateHeap.c)
 *     RtlpHpFixedHeapCreate @ 0x1405F9290 (RtlpHpFixedHeapCreate.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x14079C4D4 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x14079D050 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     PspGetScpCfgFunctions @ 0x14083B000 (PspGetScpCfgFunctions.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1408F65EC (PspFreeCurrentThreadUserShadowStack.c)
 *     EtwTiLogProtectExecVm @ 0x1408F8258 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1409C4FE0 (EtwTiLogReadWriteVm.c)
 *     sub_1409E1F40 @ 0x1409E1F40 (sub_1409E1F40.c)
 *     EtwpTiQueryVad @ 0x1409FEB00 (EtwpTiQueryVad.c)
 *     PspFreeUserFiberShadowStack @ 0x140A537E8 (PspFreeUserFiberShadowStack.c)
 *     LdrpResGetMappingSize @ 0x140A54258 (LdrpResGetMappingSize.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140A9CEE8 (EtwTimLogRedirectionTrustPolicy.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140B8E200 (VfMiscMmUnmapLockedPages_Entry.c)
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
  return KiServiceInternal(ProcessHandle);
}
