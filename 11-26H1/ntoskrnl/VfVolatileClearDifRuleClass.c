/*
 * XREFs of VfVolatileClearDifRuleClass @ 0x14064B544
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     VfDriverUnloadImage @ 0x140C4CD98 (VfDriverUnloadImage.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     CarCleanup @ 0x14064D1D0 (CarCleanup.c)
 *     CarDeregisterRuleClassConfiguration @ 0x14064D530 (CarDeregisterRuleClassConfiguration.c)
 *     DifTerminateObjectTracking @ 0x14064EFE0 (DifTerminateObjectTracking.c)
 *     DifClean @ 0x14064F160 (DifClean.c)
 *     DifDeregisterPlugin @ 0x14064F24C (DifDeregisterPlugin.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfSetVerifierEnabled @ 0x140C275F0 (VfSetVerifierEnabled.c)
 *     VfClearDifWithoutReboot @ 0x140C27DCC (VfClearDifWithoutReboot.c)
 */

__int64 VfVolatileClearDifRuleClass()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  _BYTE *v2; // rsi
  int *v3; // rdi
  __int64 v4; // rsi

  v0 = 0;
  if ( !ViFullyInitialized || (VfOptionFlags & 0x800) != 0 )
  {
    ViFullyInitialized = 0;
    _InterlockedAnd64(&ExpPoolFlags, 0xFFFFFFFFFFFFFFF7uLL);
    ExWaitForRundownProtectionRelease(&DifRebootlessRundown);
    _InterlockedExchange64((volatile __int64 *)&DifRebootlessRundown, 1LL);
    DifTerminateObjectTracking();
    v1 = 0;
    v2 = &DifPluginStates;
    do
    {
      if ( *v2 )
        DifDeregisterPlugin(v1);
      ++v1;
      ++v2;
    }
    while ( v1 < 0x40 );
    v3 = &DifKernelPluginRules;
    v4 = 4LL;
    do
    {
      CarDeregisterRuleClassConfiguration((unsigned int)*v3);
      v3 += 4;
      --v4;
    }
    while ( v4 );
    DifClean();
    if ( ViWdmThunksWithIatIndex )
    {
      ExFreePoolWithTag(ViWdmThunksWithIatIndex, 0x6D4D7644u);
      ViWdmThunksWithIatIndex = 0LL;
    }
    CarCleanup();
    VfDifRunningWithoutReboot = 0;
    DifIsVolatileMode = 0;
    qword_140E682A8 = 0LL;
    VfAllowedVolatileRC = 0LL;
    VfRuleClasses = 0LL;
    DifpPoolTags = 0LL;
    DifpPoolTagsSize = 0;
    xmmword_140E68298 = 0LL;
    DifpPoolTagsSizeBytes = 0;
    VfOptionFlags = 0;
    memset_0(&MmVerifierData, 0, 0x98uLL);
    KernelVerifier = 0;
    VfXdvEnabled = 0;
    VfClearDifWithoutReboot();
    VfSetVerifierEnabled(0LL);
  }
  else
  {
    return (unsigned int)-1073738628;
  }
  return v0;
}
