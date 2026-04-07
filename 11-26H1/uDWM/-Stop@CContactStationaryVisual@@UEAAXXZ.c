/*
 * XREFs of ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x180008230
 * Callers:
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x180002EA0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800036B0 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x180008254 (--1CContactStationaryVisual@@MEAA@XZ.c)
 * Callees:
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x1800063F0 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 */

void __fastcall CContactStationaryVisual::Stop(CTimelineBase **this)
{
  CContactStationaryVisual::StopTimer(this);
  CVisual::SetOpacity((CVisual *)this, 0.0);
}
