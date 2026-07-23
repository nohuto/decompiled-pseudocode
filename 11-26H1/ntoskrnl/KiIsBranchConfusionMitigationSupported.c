/*
 * XREFs of KiIsBranchConfusionMitigationSupported @ 0x1405F4B58
 * Callers:
 *     KiIsSrsoMitigationDesired @ 0x1405F4CD8 (KiIsSrsoMitigationDesired.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F4E30 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiDetectKvaLeakage @ 0x1405F9AC0 (KiDetectKvaLeakage.c)
 * Callees:
 *     SpcIsHyperVCr3RspErrataPresent @ 0x140722F40 (SpcIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 & 4) != 0 && (unsigned int)SpcIsHyperVCr3RspErrataPresent() == 0;
}
