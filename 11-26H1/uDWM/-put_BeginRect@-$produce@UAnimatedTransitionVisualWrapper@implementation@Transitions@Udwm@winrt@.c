/*
 * XREFs of ?put_BeginRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x18006EDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x18006EDDC (-BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::put_BeginRect(
        __int64 a1,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)((a1 - 8) & -(__int64)(a1 != 0));
  try
  {
    winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::BeginRect(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
