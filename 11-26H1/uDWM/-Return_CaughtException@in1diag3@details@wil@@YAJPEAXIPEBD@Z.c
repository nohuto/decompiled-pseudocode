/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D1384
 * Callers:
 *     _CWindowList::UpdateWindowScale_::_1_::catch$0 @ 0x1800E7060 (_CWindowList--UpdateWindowScale_--_1_--catch$0.c)
 *     _CWindowList::MoveSize_::_1_::catch$2 @ 0x1800E7230 (_CWindowList--MoveSize_--_1_--catch$2.c)
 *     _CWindowList::Initialize_::_1_::catch$12 @ 0x1800E7560 (_CWindowList--Initialize_--_1_--catch$12.c)
 *     _winrt::Udwm::Transitions::TransitionManager::PreTransitionWithNativeWindow_::_1_::catch$9 @ 0x1800E75F6 (_winrt--Udwm--Transitions--TransitionManager--PreTransitionWithNativeWindow_--_1_--catch$9.c)
 *     _winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::OnAnimationComplete_::_1_::catch$0 @ 0x1800E7F95 (_winrt--Udwm--Transitions--implementation--AnimatedTransitionVisualWrapper--OnAnimationComplete_.c)
 *     __winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete_::_5_::_lambda_1_::operator()_::_1_::catch$1 @ 0x1800E8160 (__winrt--Udwm--Transitions--implementation--TopLevelWindow3DWrapper--AnimationComplete_--_5_--_l.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::OnAnimationComplete_::_1_::catch$0 @ 0x1800E81AE (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--OnAnimationComplet.c)
 *     _CWindowList::RotationModeChange_::_1_::catch$1 @ 0x1800E826C (_CWindowList--RotationModeChange_--_1_--catch$1.c)
 *     _CWindowList::RotationModeChange_::_1_::catch$2 @ 0x1800E82A8 (_CWindowList--RotationModeChange_--_1_--catch$2.c)
 *     _winrt::Udwm::Transitions::TransitionManager::RegisterTransitionBitmap_::_1_::catch$5 @ 0x1800E96E4 (_winrt--Udwm--Transitions--TransitionManager--RegisterTransitionBitmap_--_1_--catch$5.c)
 *     _CWindowList::HandleScreenRotation_::_1_::catch$1 @ 0x1800E9B73 (_CWindowList--HandleScreenRotation_--_1_--catch$1.c)
 *     _CWindowList::StyleChange_::_1_::catch$1 @ 0x1800E9BEC (_CWindowList--StyleChange_--_1_--catch$1.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180090274 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
