/*
 * XREFs of ??1ScreenRotationTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180089098
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionState::CreateSnapshotVisual_::_1_::dtor$0 @ 0x1800EB656 (_winrt--Udwm--Transitions--implementation--TransitionState--CreateSnapshotVisual_--_1_--dtor$0.c)
 *     _winrt::Udwm::Transitions::TransitionManager::PreTransitionWithNativeWindow_::_1_::dtor$1 @ 0x1800EBDDA (_winrt--Udwm--Transitions--TransitionManager--PreTransitionWithNativeWindow_--_1_--dtor$1.c)
 *     _CWindowList::Initialize_::_1_::dtor$1 @ 0x1800EBF3B (_CWindowList--Initialize_--_1_--dtor$1.c)
 *     _CWindowList::Initialize_::_1_::dtor$2 @ 0x1800EBF4D (_CWindowList--Initialize_--_1_--dtor$2.c)
 *     _winrt::Udwm::Transitions::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange_::_1_::dtor$0 @ 0x1800EC7E3 (_winrt--Udwm--Transitions--TransitionManager--OnMoveResizeInitiatedFromWorkAreaChange_--_1_--dto.c)
 *     _winrt::Udwm::Transitions::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange_::_1_::dtor$1 @ 0x1800EC7F5 (_winrt--Udwm--Transitions--TransitionManager--OnMoveResizeInitiatedFromWorkAreaChan_ea_1800EC7F5.c)
 *     _winrt::impl::consume_Windows_Foundation_Collections_IVector_winrt::Windows::Foundation::Collections::IVector_winrt::Udwm::Transitions::UserResizeVisual__winrt::Udwm::Transitions::UserResizeVisual_::GetAt_::_1_::dtor$0 @ 0x1800ED666 (_winrt--impl--consume_Windows_Foundation_Collections_IVector_winrt--Windows--Foundation--Collect.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_1_::dtor$1 @ 0x1800ED6A5 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--PostTransition_.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::UpdateRect_::_1_::dtor$0 @ 0x1800ED6FF (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--UpdateRect_--_1.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$5 @ 0x1800ED8CB (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisu_ea_1800ED8CB.c)
 *     _CGlobalTimeTrackVisual::OnGlobalTimeUpdated_::_1_::dtor$2 @ 0x1800ED9F5 (_CGlobalTimeTrackVisual--OnGlobalTimeUpdated_--_1_--dtor$2.c)
 *     _CGlobalTimeTrackVisual::SetTransitionHandler_::_1_::dtor$0 @ 0x1800EDA41 (_CGlobalTimeTrackVisual--SetTransitionHandler_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall winrt::Udwm::Transitions::Private::ScreenRotationTransition::~ScreenRotationTransition(
        winrt::Udwm::Transitions::Private::ScreenRotationTransition *this)
{
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler(this);
}
