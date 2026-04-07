/*
 * XREFs of ?put_EndClip@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x1800D1720
 * Callers:
 *     <none>
 * Callees:
 *     ?EndClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x1800D0DB4 (-EndClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Fo.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::put_EndClip(
        __int64 a1,
        const __m128i *a2)
{
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EndClip(
    (CAnimatedTransitionVisual **)((a1 - 8) & -(__int64)(a1 != 0)),
    a2);
  return 0LL;
}
