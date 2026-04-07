/*
 * XREFs of ?AddRef@?$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@X@impl@winrt@@UEAAIXZ @ 0x18002F450
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x18002F670 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18002F680 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,winrt::Udwm::Transitions::ITransition,void>::AddRef(
        __int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // r9
  volatile signed __int64 *v7; // rax
  unsigned int v8; // r10d
  signed __int64 v9; // rdx
  signed __int64 v10; // r8
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1 - 8;
  if ( !a1 )
    v1 = 8LL;
  v2 = std::_Atomic_storage<unsigned __int64,8>::load(v1);
  v3 = v2;
  v4 = v2;
  do
  {
    v11 = v2;
    if ( v2 < 0 )
      return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(2 * v4 + 24));
    v12 = v3 + 1;
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v11);
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v12);
    v7 = (volatile signed __int64 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v6);
    v2 = _InterlockedCompareExchange64(v7, v9, v10);
    v4 = v2;
    v3 = v2;
  }
  while ( v10 != v2 );
  return v8;
}
