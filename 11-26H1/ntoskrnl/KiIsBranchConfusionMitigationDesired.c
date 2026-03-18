/*
 * XREFs of KiIsBranchConfusionMitigationDesired @ 0x1405F2158
 * Callers:
 *     KiIsSrsoMitigationDesired @ 0x1405F2318 (KiIsSrsoMitigationDesired.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F2470 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiDetectKvaLeakage @ 0x1405F7100 (KiDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsBranchConfusionMitigationDesired(__int64 a1, _QWORD *a2)
{
  if ( (KiFeatureSettings & 5) != 0 || *(_BYTE *)(a1 + 141) == 1 && (KiFeatureSettings & 0x40) == 0 && (*a2 & 0x10) == 0 )
    return 0LL;
  else
    return HIBYTE(KiFeatureSettings) & 1;
}
