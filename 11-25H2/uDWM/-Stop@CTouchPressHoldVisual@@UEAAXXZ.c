/*
 * XREFs of ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800D11D0
 * Callers:
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800D0C28 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800D0DB0 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800D1270 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 */

void __fastcall CTouchPressHoldVisual::Stop(CTouchPressHoldVisual *this)
{
  CRenderDataVisual::ClearInstructions(this);
  CTouchPressHoldVisual::StopTimer(this);
  CTouchPressHoldVisual::SetETWAnimation((__int64)this, 0);
  CVisual::SetOpacity(this, 0.0);
}
