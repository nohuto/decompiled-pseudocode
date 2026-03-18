/*
 * XREFs of VfVolatileClearDifRuleClass @ 0x140647964
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     VfDriverUnloadImage @ 0x140C46D88 (VfDriverUnloadImage.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     CarCleanup @ 0x1406495F0 (CarCleanup.c)
 *     CarDeregisterRuleClassConfiguration @ 0x140649950 (CarDeregisterRuleClassConfiguration.c)
 *     DifTerminateObjectTracking @ 0x14064B400 (DifTerminateObjectTracking.c)
 *     DifClean @ 0x14064B580 (DifClean.c)
 *     DifDeregisterPlugin @ 0x14064B66C (DifDeregisterPlugin.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     VfSetVerifierEnabled @ 0x140C215E0 (VfSetVerifierEnabled.c)
 *     VfClearDifWithoutReboot @ 0x140C21DBC (VfClearDifWithoutReboot.c)
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
    qword_140E67FE8 = 0LL;
    VfAllowedVolatileRC = 0LL;
    VfRuleClasses = 0LL;
    DifpPoolTags = 0LL;
    DifpPoolTagsSize = 0;
    xmmword_140E67FD8 = 0LL;
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
