/*
 * XREFs of HalpGetCpuVendor @ 0x14044BB30
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14044AB14 (HalpMcaPopulateErrorData.c)
 *     HalpWheaReadMsrMisc @ 0x14044B1DC (HalpWheaReadMsrMisc.c)
 *     HalpWheaReadMsrAddress @ 0x14044B228 (HalpWheaReadMsrAddress.c)
 *     HalpWheaWriteMsrControl @ 0x14044B274 (HalpWheaWriteMsrControl.c)
 *     HalpWheaWriteMsrStatus @ 0x14044B2BC (HalpWheaWriteMsrStatus.c)
 *     HalpCmciInitProcessor @ 0x14044B398 (HalpCmciInitProcessor.c)
 *     HaliWheaInitProcessorGenericSection @ 0x14044B548 (HaliWheaInitProcessorGenericSection.c)
 *     HalpCmcPollProcessor @ 0x14044B678 (HalpCmcPollProcessor.c)
 *     HalpMcaReadErrorPresence @ 0x14044B924 (HalpMcaReadErrorPresence.c)
 *     HalpWheaGetBankFromMciStatusIndex @ 0x14044BA94 (HalpWheaGetBankFromMciStatusIndex.c)
 *     HalpWheaReadMsrStatus @ 0x14044BAE8 (HalpWheaReadMsrStatus.c)
 *     HalpCmciSetProcessorConfig @ 0x14044BB50 (HalpCmciSetProcessorConfig.c)
 *     HalpCmciPollProcessor @ 0x14044BC14 (HalpCmciPollProcessor.c)
 *     HalpMcaReadError @ 0x14044BC70 (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x14044C030 (HalpMcaReportError.c)
 *     HalpMcaProcessorBankClear @ 0x14044C2EC (HalpMcaProcessorBankClear.c)
 *     HalpCreateMcaMemoryErrorRecord @ 0x14044C5C8 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpMcaProcessorBankConfig @ 0x14044CC28 (HalpMcaProcessorBankConfig.c)
 *     HalpCmciHandler @ 0x140522EB0 (HalpCmciHandler.c)
 *     HalpIsLmceSupported @ 0x140531E44 (HalpIsLmceSupported.c)
 *     HalpGetMcaMaxVendorSpecificSectionLength @ 0x140580C04 (HalpGetMcaMaxVendorSpecificSectionLength.c)
 *     HalpGetMcaVendorSpecificSections @ 0x140580C34 (HalpGetMcaVendorSpecificSections.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1405874D0 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpIsCmciImplemented @ 0x140BF0724 (HalpIsCmciImplemented.c)
 *     HalpMcaSetFeatureFlags @ 0x140BF0844 (HalpMcaSetFeatureFlags.c)
 * Callees:
 *     <none>
 */

unsigned __int8 HalpGetCpuVendor()
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 result; // al

  CurrentPrcb = KeGetCurrentPrcb();
  result = 0;
  if ( CurrentPrcb->CpuID )
    return CurrentPrcb->CpuVendor;
  return result;
}
