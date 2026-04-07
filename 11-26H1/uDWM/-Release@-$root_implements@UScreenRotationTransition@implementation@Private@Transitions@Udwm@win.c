/*
 * XREFs of ?Release@?$root_implements@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIScreenRotationTransition@3456@@impl@winrt@@QEAAIXZ @ 0x18002F380
 * Callers:
 *     ?unconditional_release_ref@?$com_ptr@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18008DE50 (-unconditional_release_ref@-$com_ptr@UScreenRotationTransition@implementation@Private@Transition.c)
 *     ?Release@?$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@3456@X@impl@winrt@@UEAAIXZ @ 0x1800D3590 (-Release@-$produce_base@UScreenRotationTransition@implementation@Private@Transition_ea_1800D3590.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x18002EC80 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x18002F670 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18002F680 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x18002F698 (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,winrt::Udwm::Transitions::Private::ScreenRotationTransition,winrt::Udwm::Transitions::Private::IScreenRotationTransition>::Release(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int32 v5; // ebx
  void *v6; // r8
  volatile signed __int64 *v7; // rax
  signed __int64 v8; // rdx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 8);
  v3 = v2;
  v4 = v2;
  while ( 1 )
  {
    v10 = v2;
    if ( v2 < 0 )
      break;
    v5 = v3 - 1;
    v11 = v3 - 1;
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v10);
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v11);
    v7 = (volatile signed __int64 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a1 + 8);
    v2 = _InterlockedCompareExchange64(v7, v8, (signed __int64)v6);
    v4 = v2;
    v3 = v2;
    if ( v6 == (void *)v2 )
      goto LABEL_6;
  }
  v5 = _InterlockedDecrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(2 * v4 + 24));
  if ( !v5 )
    winrt::impl::weak_ref<1,1>::Release(v6);
LABEL_6:
  if ( !v5 )
  {
    std::_Atomic_storage<unsigned __int64,8>::store(a1 + 8, v3, v6);
    if ( a1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, 1LL);
  }
  return v5;
}
