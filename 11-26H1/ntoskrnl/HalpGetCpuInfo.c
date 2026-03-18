/*
 * XREFs of HalpGetCpuInfo @ 0x1404C55D0
 * Callers:
 *     HalpInterruptIsMsiSupported @ 0x140516034 (HalpInterruptIsMsiSupported.c)
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x140578DC0 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x14057D4EC (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpTscReserveResources @ 0x140583DF0 (HalpTscReserveResources.c)
 *     HalpTimerConfigureQpcBypass @ 0x140584CD8 (HalpTimerConfigureQpcBypass.c)
 *     HalpProcGetFeatureBits @ 0x140587530 (HalpProcGetFeatureBits.c)
 *     HalpIommuDomainGetSupportedPageTableDepths @ 0x14058D818 (HalpIommuDomainGetSupportedPageTableDepths.c)
 *     HalpIommuGetPageTableType @ 0x14058DA18 (HalpIommuGetPageTableType.c)
 *     HalpIommuReportIommuFault @ 0x1405A02C0 (HalpIommuReportIommuFault.c)
 *     HalpSetSystemInformation @ 0x140B10D50 (HalpSetSystemInformation.c)
 *     HalpDpPostReplaceInitialization @ 0x140BEE0F0 (HalpDpPostReplaceInitialization.c)
 *     HalpLbrInitialize @ 0x140BEF224 (HalpLbrInitialize.c)
 *     HalpPiix4Detect @ 0x140C0A8DC (HalpPiix4Detect.c)
 *     HalpErrataApplyPerProcessor @ 0x140C0CBC0 (HalpErrataApplyPerProcessor.c)
 *     HalpProcIsSmtDisabled @ 0x140CAF4C8 (HalpProcIsSmtDisabled.c)
 *     HalpMiscGetParameters @ 0x140CAF604 (HalpMiscGetParameters.c)
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
