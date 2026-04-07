/*
 * XREFs of ??1ScreenRotationTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18007862C
 * Callers:
 *     _CWindowList::Initialize_::_1_::dtor$1 @ 0x1800E753C (_CWindowList--Initialize_--_1_--dtor$1.c)
 *     _CWindowList::Initialize_::_1_::dtor$2 @ 0x1800E754E (_CWindowList--Initialize_--_1_--dtor$2.c)
 *     _winrt::Udwm::Transitions::TransitionManager::PreTransitionWithNativeWindow_::_1_::dtor$1 @ 0x1800E75D2 (_winrt--Udwm--Transitions--TransitionManager--PreTransitionWithNativeWindow_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::CreateSnapshotVisual_::_1_::dtor$0 @ 0x1800E79F3 (_winrt--Udwm--Transitions--implementation--TransitionState--CreateSnapshotVisual_--_1_--dtor$0.c)
 *     _CGlobalTimeTrackVisual::OnGlobalTimeUpdated_::_1_::dtor$2 @ 0x1800E7E4B (_CGlobalTimeTrackVisual--OnGlobalTimeUpdated_--_1_--dtor$2.c)
 *     _winrt::Udwm::Transitions::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange_::_1_::dtor$0 @ 0x1800E81EA (_winrt--Udwm--Transitions--TransitionManager--OnMoveResizeInitiatedFromWorkAreaChange_--_1_--dto.c)
 *     _winrt::Udwm::Transitions::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange_::_1_::dtor$1 @ 0x1800E81FC (_winrt--Udwm--Transitions--TransitionManager--OnMoveResizeInitiatedFromWorkAreaChan_ea_1800E81FC.c)
 *     _winrt::impl::consume_Windows_Foundation_Collections_IVector_winrt::Windows::Foundation::Collections::IVector_winrt::Udwm::Transitions::UserResizeVisual__winrt::Udwm::Transitions::UserResizeVisual_::GetAt_::_1_::dtor$0 @ 0x1800E9603 (_winrt--impl--consume_Windows_Foundation_Collections_IVector_winrt--Windows--Foundation--Collect.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_1_::dtor$1 @ 0x1800E9642 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--Po_ea_1800E9642.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::UpdateRect_::_1_::dtor$0 @ 0x1800E969C (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--UpdateRect_--_1.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$5 @ 0x1800E9864 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisu_ea_1800E9864.c)
 *     _CGlobalTimeTrackVisual::SetTransitionHandler_::_1_::dtor$0 @ 0x1800E999C (_CGlobalTimeTrackVisual--SetTransitionHandler_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall winrt::Udwm::Transitions::Private::ScreenRotationTransition::~ScreenRotationTransition(__int64 *this)
{
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(this);
}
