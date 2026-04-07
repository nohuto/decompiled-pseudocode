/*
 * XREFs of wil::details::lambda_call__CAnimationScheduler::_ScheduleStartAnimations_::_2_::_lambda_1___::_lambda_call__CAnimationScheduler::_ScheduleStartAnimations_::_2_::_lambda_1___ @ 0x18008D4C0
 * Callers:
 *     _CAnimationScheduler::_ScheduleStartAnimations_::_1_::dtor$0 @ 0x1800E7FE3 (_CAnimationScheduler--_ScheduleStartAnimations_--_1_--dtor$0.c)
 * Callees:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18002A220 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__CAnimationScheduler::_ScheduleStartAnimations_::_2_::_lambda_1___::_lambda_call__CAnimationScheduler::_ScheduleStartAnimations_::_2_::_lambda_1___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CAnimationScheduler::_CleanupTransition(*(CAnimationScheduler **)a1);
  }
}
