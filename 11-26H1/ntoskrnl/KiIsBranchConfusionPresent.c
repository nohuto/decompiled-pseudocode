/*
 * XREFs of KiIsBranchConfusionPresent @ 0x1405F21C4
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1405F1AD8 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsSrsoMitigationDesired @ 0x1405F2318 (KiIsSrsoMitigationDesired.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F2470 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404E63D0 (HviIsAnyHypervisorPresent.c)
 */

__int64 __fastcall KiIsBranchConfusionPresent(__int64 a1)
{
  bool IsAnyHypervisorPresent; // al
  unsigned int v3; // edx

  if ( *(_BYTE *)(a1 + 141) != 1 || (KeFeatureBits2 & 0x1000000) != 0 )
    return 0LL;
  IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  v3 = 0;
  if ( IsAnyHypervisorPresent )
    return 1LL;
  LOBYTE(v3) = *(_BYTE *)(a1 + 64) != 25;
  return v3;
}
