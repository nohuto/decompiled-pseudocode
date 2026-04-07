/*
 * XREFs of ?WindowMaximizeSnapPostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180075974
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800184F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA?AUITransition@234@W4ShellTransitionType@234@@Z @ 0x18001E9B0 (-GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA-AUITransition@234@W4ShellTransitionTy.c)
 *     ?PostTransition@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800759BC (-PostTransition@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@imp.c)
 */

void __fastcall winrt::Udwm::Transitions::TransitionManager::WindowMaximizeSnapPostTransition(
        winrt::Udwm::Transitions::TransitionManager *this)
{
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  winrt::Udwm::Transitions::TransitionManager::GetHandler((__int64)this, &v1, 2);
  if ( v1 )
    winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::PostTransition(&v1);
  if ( v1 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v1);
}
