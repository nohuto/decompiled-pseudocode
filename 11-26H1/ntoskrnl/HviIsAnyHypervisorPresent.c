/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1404E63D0
 * Callers:
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1404E6318 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHardwareFeatures @ 0x1404E6360 (HviGetHardwareFeatures.c)
 *     HvlPhase1Initialize @ 0x1405B89CC (HvlPhase1Initialize.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1405F1A04 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405F1AD8 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionPresent @ 0x1405F21C4 (KiIsBranchConfusionPresent.c)
 *     KiIsTsaMitigationSupported @ 0x1405F23BC (KiIsTsaMitigationSupported.c)
 *     KiApplyProcessorErrata @ 0x1405F487C (KiApplyProcessorErrata.c)
 *     HviGetHypervisorInterface @ 0x1406DC778 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1406DC990 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase0Initialize @ 0x14079166C (HvlPhase0Initialize.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x14080F35C (RtlpInitFunctionOverrideCapabilities.c)
 *     KiConfigureAmdTprLowerInterruptDelayWorkaround @ 0x140BF56C8 (KiConfigureAmdTprLowerInterruptDelayWorkaround.c)
 *     ViFilterIsDeviceExcluded @ 0x140C3C470 (ViFilterIsDeviceExcluded.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140CAB8B4 (InitializeDynamicPartitioningPolicy.c)
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 *     KiComputeDispatchInterruptCost @ 0x140CC90C0 (KiComputeDispatchInterruptCost.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140CCBAF4 (KiIntSteerDetermineSteeringEnabled.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
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
