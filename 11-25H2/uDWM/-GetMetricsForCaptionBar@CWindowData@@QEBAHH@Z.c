/*
 * XREFs of ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x18000CC08
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18000C8B0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z @ 0x18000CC24 (-GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z.c)
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x18000DF90 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18000E320 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?GetNonClientAreaMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z @ 0x18000FA44 (-GetNonClientAreaMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800126A8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180016560 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x18006AF70 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowData::GetMetricsForCaptionBar(CWindowData *this, unsigned int a2)
{
  return GetSystemMetricsForDpi(a2, *((unsigned int *)this + 87));
}
