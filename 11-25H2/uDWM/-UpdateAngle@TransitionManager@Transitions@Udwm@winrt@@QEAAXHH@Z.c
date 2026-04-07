/*
 * XREFs of ?UpdateAngle@TransitionManager@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800DC3E0
 * Callers:
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x1800E590C (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 * Callees:
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18002A6D0 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA?AUITransition@234@W4ShellTransitionType@234@@Z @ 0x18002A840 (-GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA-AUITransition@234@W4ShellTransitionTy.c)
 *     ?UpdateAngle@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@HH@Z @ 0x1800DC3A0 (-UpdateAngle@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@w.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::TransitionManager::UpdateAngle(
        winrt::Udwm::Transitions::TransitionManager *this)
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v2; // [rsp+58h] [rbp+20h] BYREF

  winrt::Udwm::Transitions::TransitionManager::GetHandler((__int64)this, &v2, 1);
  v1[0] = 0LL;
  if ( winrt::Windows::Foundation::operator!=(&v2, v1) )
    winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::UpdateAngle(&v2);
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v2);
}
