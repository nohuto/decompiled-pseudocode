/*
 * XREFs of ?AddRef@?$weak_source@$00$00@impl@winrt@@UEAAIXZ @ 0x1800D0C10
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 */

__int64 __fastcall winrt::impl::weak_source<1,1>::AddRef(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rax
  int v4; // edx

  v2 = a1 + 16;
  if ( !a1 )
    v2 = 24LL;
  v3 = (volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v2);
  return (unsigned int)(_InterlockedExchangeAdd(v3, v4 - 23) + 1);
}
