/*
 * XREFs of ??1?$com_ptr@UIUserResizeVisualNative@@@winrt@@QEAA@XZ @ 0x1800305C8
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$6 @ 0x1800E75E4 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisuals_--_1_--dt.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_1_::dtor$5 @ 0x1800E7903 (_winrt--Udwm--Transitions--Private--implementation--WindowMoveResizeCrossfadeTransi_ea_1800E7903.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferTransitionVisualAndAnimationEngine_::_1_::dtor$0 @ 0x1800E79AF (_winrt--Udwm--Transitions--implementation--TransitionState--TransferTransitionVisualAndAnimation.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::CreateSnapshotVisual_::_1_::dtor$1 @ 0x1800E7A05 (_winrt--Udwm--Transitions--implementation--TransitionState--CreateSnapshotVisual_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::AnimationsEnabled_::_1_::dtor$1 @ 0x1800E7AA4 (_winrt--Udwm--Transitions--implementation--TransitionState--AnimationsEnabled_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange_::_1_::dtor$2 @ 0x1800E820E (_winrt--Udwm--Transitions--TransitionManager--OnMoveResizeInitiatedFromWorkAreaChan_ea_1800E820E.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::CapturePreRotationVisuals_::_1_::dtor$1 @ 0x1800E9496 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--CapturePreRotation.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DrawBackground_::_1_::dtor$0 @ 0x1800E94BA (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--DrawBackground_--_.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::StartSecondAnimation_::_1_::dtor$0 @ 0x1800E9534 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--Start_ea_1800E9534.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$3 @ 0x1800E9840 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisu_ea_1800E9840.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x1800306A4 (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<IUserResizeVisualNative>::~com_ptr<IUserResizeVisualNative>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<IBitmapManager>::unconditional_release_ref();
  return result;
}
