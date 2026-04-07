/*
 * XREFs of ?EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x18007D84C
 * Callers:
 *     ?put_EndRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x18007D820 (-put_EndRect@-$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U.c)
 * Callees:
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18007D920 (-EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EndRect(
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
  CAnimatedTransitionVisual::SetEndRect(v5, &v7);
}
