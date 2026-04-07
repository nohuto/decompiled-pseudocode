/*
 * XREFs of ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180006510
 * Callers:
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x1800063F0 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180006480 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800796F0 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x1800B4F30 (-StopTimer@CFlickVisual@@MEAAJXZ.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800B89E0 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x1800BBF30 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x1800BC6B0 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x1800C8B10 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800CD850 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180006528 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTouchVisual::StopTimer(CTouchVisual *this)
{
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
