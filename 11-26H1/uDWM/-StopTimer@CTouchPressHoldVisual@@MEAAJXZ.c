/*
 * XREFs of ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800CD850
 * Callers:
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800CD780 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800CDB20 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800CD7E4 (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::StopTimer(CTimelineBase **this)
{
  CTouchVisual *v1; // r9

  CTouchPressHoldVisual::StopAllTimelines(this);
  return CTouchVisual::StopTimer(v1);
}
