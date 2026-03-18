/*
 * XREFs of HalpIsCmciImplemented @ 0x140BEA724
 * Callers:
 *     HalpCorrectErrSrc @ 0x140BE9AC0 (HalpCorrectErrSrc.c)
 *     HalpInitializeCmc @ 0x140BE9DA8 (HalpInitializeCmc.c)
 *     HalpMcaSetFeatureFlags @ 0x140BEA844 (HalpMcaSetFeatureFlags.c)
 *     HalpMcaResumeProcessorConfig @ 0x140C0A7E0 (HalpMcaResumeProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140453A00 (HalpGetCpuVendor.c)
 *     HalpInterruptIsCmciSupported @ 0x14057D4A4 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x14057D4EC (HalpInterruptIsDeferredErrorSupported.c)
 */

char HalpIsCmciImplemented()
{
  unsigned __int8 CpuVendor; // al
  bool IsCmciSupported; // bl
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !HalpCmciImplementationChecked )
  {
    CpuVendor = HalpGetCpuVendor();
    if ( CpuVendor == 2 )
    {
      IsCmciSupported = HalpInterruptIsCmciSupported();
    }
    else if ( CpuVendor == 1 )
    {
      IsCmciSupported = HalpInterruptIsCmciSupported();
      if ( IsCmciSupported )
        HalpDeferredErrorInterruptPresent = HalpInterruptIsDeferredErrorSupported();
    }
    else
    {
      IsCmciSupported = 0;
    }
    HalpCmciImplementationPresent = IsCmciSupported;
    _InterlockedOr(v3, 0);
    HalpCmciImplementationChecked = 1;
  }
  return HalpCmciImplementationPresent;
}
