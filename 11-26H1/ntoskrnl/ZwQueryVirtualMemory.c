/*
 * XREFs of ZwQueryVirtualMemory @ 0x140728420
 * Callers:
 *     SepGetStackTraceHash @ 0x140260450 (SepGetStackTraceHash.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140393390 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140393844 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1403DA154 (KiVerifyContextXStateCetUEnabled.c)
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 *     RtlpHpFixedHeapCreate @ 0x1404DD190 (RtlpHpFixedHeapCreate.c)
 *     DifZwQueryVirtualMemoryWrapper @ 0x1406B8890 (DifZwQueryVirtualMemoryWrapper.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x140830A20 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140831560 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1408320EC (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     PspGetScpCfgFunctions @ 0x1409E5264 (PspGetScpCfgFunctions.c)
 *     LdrpResGetMappingSize @ 0x1409E6340 (LdrpResGetMappingSize.c)
 *     sub_1409ED2C4 @ 0x1409ED2C4 (sub_1409ED2C4.c)
 *     PspFreeUserFiberShadowStack @ 0x140A045EC (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x140A0481C (PspFreeCurrentThreadUserShadowStack.c)
 *     EtwTiLogReadWriteVm @ 0x140A2B640 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogProtectExecVm @ 0x140A81C70 (EtwTiLogProtectExecVm.c)
 *     EtwpTiQueryVad @ 0x140A88C30 (EtwpTiQueryVad.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140C431E0 (VfMiscMmUnmapLockedPages_Entry.c)
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
