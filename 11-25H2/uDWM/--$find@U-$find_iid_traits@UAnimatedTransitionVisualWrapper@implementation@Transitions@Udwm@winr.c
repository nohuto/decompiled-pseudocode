/*
 * XREFs of ??$find@U?$find_iid_traits@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x180097FA8
 * Callers:
 *     ??$find_iid@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180097F84 (--$find_iid@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$is_guid_of@UITransitionAnimationVisualNative@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008A450 (--$is_guid_of@UITransitionAnimationVisualNative@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180099B54 (--$is_guid_of@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v5; // rdx
  __int64 *v6; // r8

  if ( (unsigned __int8)winrt::is_guid_of<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>(
                          *(_QWORD *)(a1 + 8),
                          a2,
                          a1) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v3 + 8LL) & -(__int64)(*v3 != 0LL));
  if ( winrt::is_guid_of<ITransitionAnimationVisualNative>(v2) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(*v6);
  return v5;
}
