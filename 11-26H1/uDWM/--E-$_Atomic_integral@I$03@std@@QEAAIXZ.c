/*
 * XREFs of ??E?$_Atomic_integral@I$03@std@@QEAAIXZ @ 0x1800D621C
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___::AddRef @ 0x1800D5F10 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--UnloadDelegate__winrt--Udwm--Transiti.c)
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x1800D6240 (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 *     ?increment_version@collection_version@impl@winrt@@QEAAXXZ @ 0x1800DCFCC (-increment_version@collection_version@impl@winrt@@QEAAXXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 */

__int64 __fastcall std::_Atomic_integral<unsigned int,4>::operator++(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a1));
}
