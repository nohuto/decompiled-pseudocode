/*
 * XREFs of ?get_BeginRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x18008EAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA?A_P$$QEAURect@Foundation@Windows@1@@Z @ 0x18002466C (--$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA-A_P$$QEAURect@Foundation@Windows@.c)
 *     ?BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x180096488 (-BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Fo.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::get_BeginRect(
        __int64 a1,
        _OWORD *a2)
{
  __int64 result; // rax
  int v4; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::BeginRect();
    *a2 = *(_OWORD *)winrt::impl::detach_from<winrt::Windows::Foundation::Rect>();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
