/*
 * XREFs of ?SkipAnimationDelays@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180088AB8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002A820 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA?AUITransition@234@W4ShellTransitionType@234@@Z @ 0x18002A840 (-GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA-AUITransition@234@W4ShellTransitionTy.c)
 *     ?SkipAnimationDelays@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800DC360 (-SkipAnimationDelays@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@.c)
 */

void __fastcall winrt::Udwm::Transitions::TransitionManager::SkipAnimationDelays(
        winrt::Udwm::Transitions::TransitionManager *this)
{
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  winrt::Udwm::Transitions::TransitionManager::GetHandler((__int64)this, &v1, 1);
  if ( v1 )
    winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::SkipAnimationDelays(&v1);
  if ( v1 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v1);
}
