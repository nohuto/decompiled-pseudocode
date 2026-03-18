/*
 * XREFs of HalpGetCpuVendor @ 0x140453A00
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x1404529E4 (HalpMcaPopulateErrorData.c)
 *     HalpWheaReadMsrMisc @ 0x1404530AC (HalpWheaReadMsrMisc.c)
 *     HalpWheaReadMsrAddress @ 0x1404530F8 (HalpWheaReadMsrAddress.c)
 *     HalpWheaWriteMsrControl @ 0x140453144 (HalpWheaWriteMsrControl.c)
 *     HalpWheaWriteMsrStatus @ 0x14045318C (HalpWheaWriteMsrStatus.c)
 *     HalpCmciInitProcessor @ 0x140453268 (HalpCmciInitProcessor.c)
 *     HaliWheaInitProcessorGenericSection @ 0x140453418 (HaliWheaInitProcessorGenericSection.c)
 *     HalpCmcPollProcessor @ 0x140453548 (HalpCmcPollProcessor.c)
 *     HalpMcaReadErrorPresence @ 0x1404537F4 (HalpMcaReadErrorPresence.c)
 *     HalpWheaGetBankFromMciStatusIndex @ 0x140453964 (HalpWheaGetBankFromMciStatusIndex.c)
 *     HalpWheaReadMsrStatus @ 0x1404539B8 (HalpWheaReadMsrStatus.c)
 *     HalpCmciSetProcessorConfig @ 0x140453A20 (HalpCmciSetProcessorConfig.c)
 *     HalpCmciPollProcessor @ 0x140453AE4 (HalpCmciPollProcessor.c)
 *     HalpMcaReadError @ 0x140453B40 (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x140453F00 (HalpMcaReportError.c)
 *     HalpMcaProcessorBankClear @ 0x1404541BC (HalpMcaProcessorBankClear.c)
 *     HalpCreateMcaMemoryErrorRecord @ 0x140454498 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpMcaProcessorBankConfig @ 0x140454AF8 (HalpMcaProcessorBankConfig.c)
 *     HalpCmciHandler @ 0x14052080C (HalpCmciHandler.c)
 *     HalpIsLmceSupported @ 0x14052F944 (HalpIsLmceSupported.c)
 *     HalpGetMcaMaxVendorSpecificSectionLength @ 0x14057E6E4 (HalpGetMcaMaxVendorSpecificSectionLength.c)
 *     HalpGetMcaVendorSpecificSections @ 0x14057E714 (HalpGetMcaVendorSpecificSections.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140584FB0 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpIsCmciImplemented @ 0x140BEA724 (HalpIsCmciImplemented.c)
 *     HalpMcaSetFeatureFlags @ 0x140BEA844 (HalpMcaSetFeatureFlags.c)
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
