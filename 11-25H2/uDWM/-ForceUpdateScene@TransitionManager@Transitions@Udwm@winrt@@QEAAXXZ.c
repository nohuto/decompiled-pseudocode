/*
 * XREFs of ?ForceUpdateScene@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18002A780
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180016C80 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateScene@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A7D0 (-UpdateScene@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@w.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002A820 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA?AUITransition@234@W4ShellTransitionType@234@@Z @ 0x18002A840 (-GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA-AUITransition@234@W4ShellTransitionTy.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::TransitionManager::ForceUpdateScene(
        winrt::Udwm::Transitions::TransitionManager *this)
{
  __int64 v1; // rbx
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  winrt::Udwm::Transitions::TransitionManager::GetHandler(this, &v2, 1LL);
  v1 = v2;
  if ( v2 )
    winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::UpdateScene(&v2);
  if ( v1 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v2);
}
