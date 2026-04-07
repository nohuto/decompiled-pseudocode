/*
 * XREFs of ?TransferJointResizeVisuals@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800DEF70
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_P$$QEAUAnimatedTransitionVisualWrapper@Transitions@Udwm@1@@Z @ 0x18002A4A8 (--$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_P$$QEA.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??$clear_abi@X@impl@winrt@@YAXPEAPEAX@Z @ 0x18002AA50 (--$clear_abi@X@impl@winrt@@YAXPEAPEAX@Z.c)
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1800DEFC8 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::ITransitionState>::TransferJointResizeVisuals(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  winrt::impl::clear_abi<void>(a2);
  try
  {
    v3 = (__int64 *)winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals();
    *a2 = winrt::impl::detach_from<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper>(v3);
    winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
