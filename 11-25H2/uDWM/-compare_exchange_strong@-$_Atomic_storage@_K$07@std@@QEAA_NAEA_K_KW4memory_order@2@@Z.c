/*
 * XREFs of ?compare_exchange_strong@?$_Atomic_storage@_K$07@std@@QEAA_NAEA_K_KW4memory_order@2@@Z @ 0x180034800
 * Callers:
 *     ?NonDelegatingAddRef@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@IEAAIXZ @ 0x1800955B4 (-NonDelegatingAddRef@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitio.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x180034850 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 */

char __fastcall std::_Atomic_storage<unsigned __int64,8>::compare_exchange_strong(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  volatile signed __int64 *v4; // rax
  signed __int64 *v5; // rdx
  signed __int64 v6; // r8
  signed __int64 v7; // r9
  signed __int64 v8; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  std::_Atomic_reinterpret_as<__int64,unsigned __int64>(a2);
  std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v10);
  v4 = (volatile signed __int64 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v3);
  v8 = _InterlockedCompareExchange64(v4, v6, v7);
  if ( v7 == v8 )
    return 1;
  *v5 = v8;
  return 0;
}
