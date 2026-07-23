/*
 * XREFs of HalpGetCpuInfo @ 0x1404BEF80
 * Callers:
 *     HalpInterruptIsMsiSupported @ 0x14050FAA4 (HalpInterruptIsMsiSupported.c)
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x14057B2F0 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x14057FA0C (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpTscReserveResources @ 0x140586310 (HalpTscReserveResources.c)
 *     HalpTimerConfigureQpcBypass @ 0x1405871F8 (HalpTimerConfigureQpcBypass.c)
 *     HalpProcGetFeatureBits @ 0x140589A50 (HalpProcGetFeatureBits.c)
 *     HalpIommuDomainGetSupportedPageTableDepths @ 0x14058FF98 (HalpIommuDomainGetSupportedPageTableDepths.c)
 *     HalpIommuGetPageTableType @ 0x140590198 (HalpIommuGetPageTableType.c)
 *     HalpIommuReportIommuFault @ 0x1405A2AB0 (HalpIommuReportIommuFault.c)
 *     HalpSetSystemInformation @ 0x140B12AD0 (HalpSetSystemInformation.c)
 *     HalpDpPostReplaceInitialization @ 0x140BF40F0 (HalpDpPostReplaceInitialization.c)
 *     HalpLbrInitialize @ 0x140BF5224 (HalpLbrInitialize.c)
 *     HalpPiix4Detect @ 0x140C10AEC (HalpPiix4Detect.c)
 *     HalpErrataApplyPerProcessor @ 0x140C12DD0 (HalpErrataApplyPerProcessor.c)
 *     HalpProcIsSmtDisabled @ 0x140CB5508 (HalpProcIsSmtDisabled.c)
 *     HalpMiscGetParameters @ 0x140CB5644 (HalpMiscGetParameters.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpGetCpuInfo(char *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  struct _KPRCB *CurrentPrcb; // r10

  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->CpuID )
    return 0;
  if ( a1 )
    *a1 = CurrentPrcb->CpuType;
  if ( a2 )
    *a2 = CurrentPrcb->CpuStepping;
  if ( a3 )
    *a3 = CurrentPrcb->CpuModel;
  if ( a4 )
    *a4 = CurrentPrcb->CpuVendor;
  return 1;
}
