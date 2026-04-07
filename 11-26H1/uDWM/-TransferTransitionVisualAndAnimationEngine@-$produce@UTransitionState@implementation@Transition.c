/*
 * XREFs of ?TransferTransitionVisualAndAnimationEngine@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800416F0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUTopLevelWindow3DWrapper@345@XZ @ 0x180041750 (-TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winr.c)
 *     ??$clear_abi@X@impl@winrt@@YAXPEAPEAX@Z @ 0x180041BF8 (--$clear_abi@X@impl@winrt@@YAXPEAPEAX@Z.c)
 *     ??$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_P$$QEAUAnimatedTransitionVisualWrapper@Transitions@Udwm@1@@Z @ 0x180086C38 (--$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_P$$QEA.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::ITransitionState>::TransferTransitionVisualAndAnimationEngine(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  winrt::impl::clear_abi<void>(a2, a1);
  try
  {
    v3 = winrt::Udwm::Transitions::implementation::TransitionState::TransferTransitionVisualAndAnimationEngine();
    *a2 = winrt::impl::detach_from<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper>(v3);
    if ( v5 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
