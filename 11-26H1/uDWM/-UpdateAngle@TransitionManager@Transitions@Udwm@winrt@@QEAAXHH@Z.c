/*
 * XREFs of ?UpdateAngle@TransitionManager@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800D9150
 * Callers:
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x1800E1760 (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 * Callees:
 *     ?GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA?AUITransition@234@W4ShellTransitionType@234@@Z @ 0x18001E9B0 (-GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA-AUITransition@234@W4ShellTransitionTy.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180042430 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?UpdateAngle@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@HH@Z @ 0x1800D9100 (-UpdateAngle@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@w.c)
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
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v2);
}
