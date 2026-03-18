/*
 * XREFs of KiIsSrsoMitigationDesired @ 0x1405F2318
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F2470 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     KiIsBranchConfusionMitigationDesired @ 0x1405F2158 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1405F2198 (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsBranchConfusionPresent @ 0x1405F21C4 (KiIsBranchConfusionPresent.c)
 */

__int64 __fastcall KiIsSrsoMitigationDesired(__int64 a1)
{
  __int64 v2; // rcx

  if ( (KiFeatureSettings & 5) != 0
    || *(_BYTE *)(a1 + 141) == 1 && (KiFeatureSettings & 0x40) == 0 && (KiSpeculationFeatures & 0x10) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)KiIsBranchConfusionPresent(a1)
    && KiIsBranchConfusionMitigationSupported(v2, &KiSpeculationFeatures)
    && (unsigned int)KiIsBranchConfusionMitigationDesired(a1, &KiSpeculationFeatures) )
  {
    return 1LL;
  }
  return ((unsigned int)KiFeatureSettings >> 26) & 1;
}
