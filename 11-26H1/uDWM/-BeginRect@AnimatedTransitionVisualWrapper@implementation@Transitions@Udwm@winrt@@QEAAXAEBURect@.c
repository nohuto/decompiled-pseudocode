/*
 * XREFs of ?BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x18006EDDC
 * Callers:
 *     ?put_BeginRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x18006EDB0 (-put_BeginRect@-$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18006F030 (-EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::BeginRect(
        CAnimatedTransitionVisual **this,
        const __m128i *a2)
{
  __m128 v4; // xmm2
  CAnimatedTransitionVisual *v5; // rcx
  float v6; // xmm1_4
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF

  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EnsureSnapshotVisualIsAlive((winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)this);
  v4 = (__m128)_mm_loadu_si128(a2);
  v5 = this[5];
  v6 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  v7.left = (int)v4.m128_f32[0];
  v7.top = (int)v6;
  v7.right = (int)(float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0] + v4.m128_f32[0]);
  v7.bottom = (int)(float)(_mm_shuffle_ps(v4, v4, 255).m128_f32[0] + v6);
  CAnimatedTransitionVisual::SetBeginRect(v5, &v7);
}
