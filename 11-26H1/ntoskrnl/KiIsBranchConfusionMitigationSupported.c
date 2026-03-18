/*
 * XREFs of KiIsBranchConfusionMitigationSupported @ 0x1405F2198
 * Callers:
 *     KiIsSrsoMitigationDesired @ 0x1405F2318 (KiIsSrsoMitigationDesired.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F2470 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiDetectKvaLeakage @ 0x1405F7100 (KiDetectKvaLeakage.c)
 * Callees:
 *     SpcIsHyperVCr3RspErrataPresent @ 0x14071E2B0 (SpcIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 & 4) != 0 && (unsigned int)SpcIsHyperVCr3RspErrataPresent() == 0;
}
