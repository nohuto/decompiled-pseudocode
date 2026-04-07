/*
 * XREFs of ?_GetStoryboardHighestPri@CAnimationScheduler@@AEAAHW4StoryboardState@@@Z @ 0x18002B6B0
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18002B534 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?_GetHighestPriStoryboardNoRef@CAnimationScheduler@@AEAAPEAVCStoryboard@@W4StoryboardState@@@Z @ 0x18008A738 (-_GetHighestPriStoryboardNoRef@CAnimationScheduler@@AEAAPEAVCStoryboard@@W4StoryboardState@@@Z.c)
 */

__int64 CAnimationScheduler::_GetStoryboardHighestPri()
{
  __int64 HighestPriStoryboardNoRef; // r10
  __int64 result; // rax

  HighestPriStoryboardNoRef = CAnimationScheduler::_GetHighestPriStoryboardNoRef();
  result = 0LL;
  if ( HighestPriStoryboardNoRef )
    return *(unsigned int *)(HighestPriStoryboardNoRef + 64);
  return result;
}
