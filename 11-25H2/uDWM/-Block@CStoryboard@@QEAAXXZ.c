/*
 * XREFs of ?Block@CStoryboard@@QEAAXXZ @ 0x1800C69C8
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18002B534 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CStoryboard::Block(__m128i *this, __int64 a2)
{
  this[1].m128i_i32[2] = 1;
  CStoryboard::_LogStoryboardEvent(this, a2);
}
