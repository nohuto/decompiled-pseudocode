/*
 * XREFs of ??$is_guid_of@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180086860
 * Callers:
 *     ??$find_iid@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180086804 (--$find_iid@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>;
  if ( *a1 == winrt::impl::guid_v<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper> )
    v1 = a1[1] + 0x6A53AACF10A57651LL;
  return v1 == 0;
}
