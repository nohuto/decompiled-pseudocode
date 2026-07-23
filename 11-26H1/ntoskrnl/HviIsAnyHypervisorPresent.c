/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1404DF970
 * Callers:
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1404DF8B8 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHardwareFeatures @ 0x1404DF900 (HviGetHardwareFeatures.c)
 *     HvlPhase1Initialize @ 0x1405BB23C (HvlPhase1Initialize.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1405F43C4 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405F4498 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionPresent @ 0x1405F4B84 (KiIsBranchConfusionPresent.c)
 *     KiIsTsaMitigationSupported @ 0x1405F4D7C (KiIsTsaMitigationSupported.c)
 *     KiApplyProcessorErrata @ 0x1405F723C (KiApplyProcessorErrata.c)
 *     HviGetHypervisorInterface @ 0x1406E0A18 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1406E0C30 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase0Initialize @ 0x14079419C (HvlPhase0Initialize.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x140814DEC (RtlpInitFunctionOverrideCapabilities.c)
 *     NtFilterBootOption @ 0x14081BCA0 (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x140B85B08 (SepSecureBootCorrectBcd.c)
 *     KiConfigureAmdTprLowerInterruptDelayWorkaround @ 0x140BFB6C8 (KiConfigureAmdTprLowerInterruptDelayWorkaround.c)
 *     ViFilterIsDeviceExcluded @ 0x140C42480 (ViFilterIsDeviceExcluded.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140CB18F4 (InitializeDynamicPartitioningPolicy.c)
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 *     KiComputeDispatchInterruptCost @ 0x140CCF150 (KiComputeDispatchInterruptCost.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140CD1C54 (KiIntSteerDetermineSteeringEnabled.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

bool HviIsAnyHypervisorPresent()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
