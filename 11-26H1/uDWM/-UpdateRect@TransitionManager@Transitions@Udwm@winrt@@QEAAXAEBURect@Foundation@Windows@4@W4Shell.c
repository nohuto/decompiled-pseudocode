/*
 * XREFs of ?UpdateRect@TransitionManager@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@4@W4ShellTransitionType@234@@Z @ 0x18008C2F4
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180011000 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA?AUITransition@234@W4ShellTransitionType@234@@Z @ 0x18001E9B0 (-GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA-AUITransition@234@W4ShellTransitionTy.c)
 *     ?UpdateRect@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x18007BEBC (-UpdateRect@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@wi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Udwm::Transitions::TransitionManager::UpdateRect(__int64 a1, __int128 *a2)
{
  __int64 result; // rax
  __int64 *v4; // [rsp+48h] [rbp+20h] BYREF

  result = (__int64)winrt::Udwm::Transitions::TransitionManager::GetHandler(a1, &v4, 6);
  if ( v4 )
    result = winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::UpdateRect(
               &v4,
               a2);
  if ( v4 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)&v4);
  return result;
}
