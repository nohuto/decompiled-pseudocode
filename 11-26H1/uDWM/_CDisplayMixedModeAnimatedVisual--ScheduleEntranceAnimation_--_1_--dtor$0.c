/*
 * XREFs of _CDisplayMixedModeAnimatedVisual::ScheduleEntranceAnimation_::_1_::dtor$0 @ 0x1800E819C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayMixedModeAnimatedVisual::ScheduleEntranceAnimation_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)(a2 + 80));
}
