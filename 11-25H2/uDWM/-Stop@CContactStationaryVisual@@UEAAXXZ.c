/*
 * XREFs of ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x1800301A0
 * Callers:
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18002BCC0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18002FCAC (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x180030114 (--1CContactStationaryVisual@@MEAA@XZ.c)
 * Callees:
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x180030840 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 */

void __fastcall CContactStationaryVisual::Stop(CContactStationaryVisual *this)
{
  CContactStationaryVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
}
