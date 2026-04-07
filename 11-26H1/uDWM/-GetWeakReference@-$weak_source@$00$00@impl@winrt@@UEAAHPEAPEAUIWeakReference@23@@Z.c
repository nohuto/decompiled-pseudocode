/*
 * XREFs of ?GetWeakReference@?$weak_source@$00$00@impl@winrt@@UEAAHPEAPEAUIWeakReference@23@@Z @ 0x180030820
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 */

__int64 __fastcall winrt::impl::weak_source<1,1>::GetWeakReference(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx

  v2 = (a1 - 8) & -(__int64)(a1 != 0);
  *a2 = v2;
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v2 + 28));
  return 0LL;
}
