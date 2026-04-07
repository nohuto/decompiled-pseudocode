/*
 * XREFs of ?NonDelegatingAddRef@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@IEAAIXZ @ 0x180086BD0
 * Callers:
 *     ?query_interface@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180086B50 (-query_interface@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@U.c)
 *     ?AddRef@?$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@winrt@@UEAAKXZ @ 0x180086BC0 (-AddRef@-$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U13.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?compare_exchange_strong@?$_Atomic_storage@_K$07@std@@QEAA_NAEA_K_KW4memory_order@2@@Z @ 0x18002F620 (-compare_exchange_strong@-$_Atomic_storage@_K$07@std@@QEAA_NAEA_K_KW4memory_order@2@@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18002F680 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::NonDelegatingAddRef(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned int v3; // r11d
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 8;
  v2 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 8);
  v5 = v2;
  while ( v2 >= 0 )
  {
    if ( std::_Atomic_storage<unsigned __int64,8>::compare_exchange_strong(v1, (__int64)&v5, v2 + 1) )
      return v3;
    v2 = v5;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(2 * v2 + 24));
}
