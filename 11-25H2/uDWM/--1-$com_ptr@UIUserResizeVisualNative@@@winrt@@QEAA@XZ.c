/*
 * XREFs of ??1?$com_ptr@UIUserResizeVisualNative@@@winrt@@QEAA@XZ @ 0x1800617C0
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionState::AnimationsEnabled_::_1_::dtor$1 @ 0x1800EB1E4 (_winrt--Udwm--Transitions--implementation--TransitionState--AnimationsEnabled_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::CreateSnapshotVisual_::_1_::dtor$1 @ 0x1800EB668 (_winrt--Udwm--Transitions--implementation--TransitionState--CreateSnapshotVisual_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferTransitionVisualAndAnimationEngine_::_1_::dtor$0 @ 0x1800EB6FA (_winrt--Udwm--Transitions--implementation--TransitionState--TransferTransitionVisualAndAnimation.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$6 @ 0x1800EBDEC (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisuals_--_1_--dt.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_1_::dtor$5 @ 0x1800EBEC6 (_winrt--Udwm--Transitions--Private--implementation--WindowMoveResizeCrossfadeTransi_ea_1800EBEC6.c)
 *     _winrt::Udwm::Transitions::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange_::_1_::dtor$2 @ 0x1800EC807 (_winrt--Udwm--Transitions--TransitionManager--OnMoveResizeInitiatedFromWorkAreaChan_ea_1800EC807.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::CapturePreRotationVisuals_::_1_::dtor$1 @ 0x1800ED4E1 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--CapturePreRotation.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DrawBackground_::_1_::dtor$2 @ 0x1800ED505 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--DrawB_ea_1800ED505.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$3 @ 0x1800ED8A7 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisu_ea_1800ED8A7.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x18002A93C (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<IUserResizeVisualNative>::~com_ptr<IUserResizeVisualNative>(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<IBitmapManager>::unconditional_release_ref(a1);
  return result;
}
