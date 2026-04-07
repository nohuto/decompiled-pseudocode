/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D3EA4
 * Callers:
 *     _CWindowList::UpdateWindowScale_::_1_::catch$0 @ 0x1800EBBAE (_CWindowList--UpdateWindowScale_--_1_--catch$0.c)
 *     _winrt::Udwm::Transitions::TransitionManager::PreTransitionWithNativeWindow_::_1_::catch$9 @ 0x1800EBDFE (_winrt--Udwm--Transitions--TransitionManager--PreTransitionWithNativeWindow_--_1_--catch$9.c)
 *     _CWindowList::Initialize_::_1_::catch$12 @ 0x1800EBF5F (_CWindowList--Initialize_--_1_--catch$12.c)
 *     _winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::OnAnimationComplete_::_1_::catch$0 @ 0x1800EC381 (_winrt--Udwm--Transitions--implementation--AnimatedTransitionVisualWrapper--OnAnimationComplete_.c)
 *     __lambda_98ec2fe7430b08c69dc947ab84cea740_::operator()_::_1_::catch$2 @ 0x1800EC62D (__lambda_98ec2fe7430b08c69dc947ab84cea740_--operator()_--_1_--catch$2.c)
 *     _CWindowList::RotationModeChange_::_1_::catch$1 @ 0x1800EC6F1 (_CWindowList--RotationModeChange_--_1_--catch$1.c)
 *     _CWindowList::RotationModeChange_::_1_::catch$2 @ 0x1800EC72D (_CWindowList--RotationModeChange_--_1_--catch$2.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::OnAnimationComplete_::_1_::catch$0 @ 0x1800ED529 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--OnAnimationComplet.c)
 *     _winrt::Udwm::Transitions::TransitionManager::RegisterTransitionBitmap_::_1_::catch$5 @ 0x1800ED76B (_winrt--Udwm--Transitions--TransitionManager--RegisterTransitionBitmap_--_1_--catch$5.c)
 *     _CWindowList::HandleScreenRotation_::_1_::catch$1 @ 0x1800EDBDE (_CWindowList--HandleScreenRotation_--_1_--catch$1.c)
 *     _CWindowList::MoveSize_::_1_::catch$2 @ 0x1800EDC57 (_CWindowList--MoveSize_--_1_--catch$2.c)
 *     _CWindowList::StyleChange_::_1_::catch$1 @ 0x1800EDC96 (_CWindowList--StyleChange_--_1_--catch$1.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x18009CAE4 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
