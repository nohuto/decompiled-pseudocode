/*
 * XREFs of ?Block@CStoryboard@@QEAAXXZ @ 0x1800C076C
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18003D510 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CStoryboard::Block(CStoryboard *this, __int64 a2)
{
  *((_DWORD *)this + 6) = 1;
  CStoryboard::_LogStoryboardEvent(this, a2);
}
