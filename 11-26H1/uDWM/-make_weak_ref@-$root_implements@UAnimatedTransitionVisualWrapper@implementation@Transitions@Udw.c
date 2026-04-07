/*
 * XREFs of ?make_weak_ref@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18008DC0C
 * Callers:
 *     ?query_interface_common@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D174C (-query_interface_common@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transi.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?compare_exchange_weak@?$atomic@_K@std@@QEAA_NAEA_K_KW4memory_order@2@2@Z @ 0x18002F5D0 (-compare_exchange_weak@-$atomic@_K@std@@QEAA_NAEA_K_KW4memory_order@2@2@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18002F680 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ??0?$weak_ref@$00$00@impl@winrt@@QEAA@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I@Z @ 0x180030724 (--0-$weak_ref@$00$00@impl@winrt@@QEAA@PEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I@.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180030CA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_P$$QEAUAnimatedTransitionVisualWrapper@Transitions@Udwm@1@@Z @ 0x180086C38 (--$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_P$$QEA.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x180086C4C (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?set_strong@?$weak_ref@$00$00@impl@winrt@@QEAAXI@Z @ 0x180086C64 (-set_strong@-$weak_ref@$00$00@impl@winrt@@QEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::make_weak_ref(
        __int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  const struct std::nothrow_t *v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1 + 8;
  v3 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 8);
  v11 = v3;
  v5 = v3;
  if ( v3 >= 0 )
  {
    if ( operator new[](0x20uLL, v4)
      && ((*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1),
          v7 = winrt::impl::weak_ref<1,1>::weak_ref<1,1>(),
          v10 = v7,
          (v8 = v7) != 0) )
    {
      v9 = (v7 >> 1) | 0x8000000000000000uLL;
      while ( !std::atomic<unsigned __int64>::compare_exchange_weak(v1, (__int64)&v11, v9) )
      {
        v5 = v11;
        if ( v11 < 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(2 * v11 + 24));
          winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref((void **)&v10);
          return 2 * v5 + 8;
        }
        winrt::impl::weak_ref<1,1>::set_strong(v8);
      }
      _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v8 + 24));
      winrt::impl::detach_from<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper>((__int64 *)&v10);
      if ( v10 )
        winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref((void **)&v10);
      return v8 + 8;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(2 * v3 + 24));
    return 2 * v5 + 8;
  }
}
