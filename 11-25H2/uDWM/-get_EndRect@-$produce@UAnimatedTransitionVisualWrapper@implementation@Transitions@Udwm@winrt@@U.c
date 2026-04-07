/*
 * XREFs of ?get_EndRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1800D3FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA?A_P$$QEAURect@Foundation@Windows@1@@Z @ 0x18002466C (--$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA-A_P$$QEAURect@Foundation@Windows@.c)
 *     ?EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800D3918 (-EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Foun.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::get_EndRect(
        __int64 a1,
        _OWORD *a2)
{
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF

  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EndRect(
    (winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)((a1 - 8) & -(__int64)(a1 != 0)),
    (__int64)v4);
  *a2 = *(_OWORD *)winrt::impl::detach_from<winrt::Windows::Foundation::Rect>();
  return 0LL;
}
