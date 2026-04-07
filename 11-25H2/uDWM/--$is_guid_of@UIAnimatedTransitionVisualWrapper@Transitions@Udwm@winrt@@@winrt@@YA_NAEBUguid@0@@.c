/*
 * XREFs of ??$is_guid_of@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180099B54
 * Callers:
 *     ??$find@U?$find_iid_traits@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x180097FA8 (--$find@U-$find_iid_traits@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winr.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1
     - winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper>>::value;
  if ( *a1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper>>::value )
    v1 = a1[1] + 0x6A53AACF10A57651LL;
  return v1 == 0;
}
