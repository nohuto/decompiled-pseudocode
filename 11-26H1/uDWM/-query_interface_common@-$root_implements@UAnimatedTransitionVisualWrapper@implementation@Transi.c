/*
 * XREFs of ?query_interface_common@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D174C
 * Callers:
 *     ?query_interface@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180086B50 (-query_interface@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@U.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?compare_exchange_strong@?$_Atomic_storage@_K$07@std@@QEAA_NAEA_K_KW4memory_order@2@@Z @ 0x18002F620 (-compare_exchange_strong@-$_Atomic_storage@_K$07@std@@QEAA_NAEA_K_KW4memory_order@2@@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18002F680 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ??$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800871E0 (--$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x18008B0C0 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008BA4C (--$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIInspectable@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008BC84 (--$is_guid_of@UIInspectable@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIAgileObject@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008BCAC (--$is_guid_of@UIAgileObject@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIWeakReferenceSource@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008D630 (--$is_guid_of@UIWeakReferenceSource@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ?make_weak_ref@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18008DC0C (-make_weak_ref@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::query_interface_common(
        __int64 a1,
        _QWORD *a2,
        const struct std::nothrow_t *a3)
{
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 weak_ref; // rax
  _QWORD *v11; // rcx
  __int64 v12; // r9
  __int64 (__fastcall **v13)(__int64); // r9
  __int64 v14; // rax
  __int64 v15; // [rsp+48h] [rbp+20h] BYREF

  if ( winrt::is_guid_of<winrt::Windows::Foundation::IUnknown>(a2) )
  {
    *(_QWORD *)a3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    v6 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 8);
    v15 = v6;
    while ( v6 >= 0 )
    {
      if ( std::_Atomic_storage<unsigned __int64,8>::compare_exchange_strong(a1 + 8, (__int64)&v15, v6 + 1) )
        return 0LL;
      v6 = v15;
    }
  }
  else if ( winrt::is_guid_of<winrt::Windows::Foundation::IInspectable>(v5) )
  {
    *(_QWORD *)a3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    v6 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 8);
    v15 = v6;
    while ( v6 >= 0 )
    {
      if ( std::_Atomic_storage<unsigned __int64,8>::compare_exchange_strong(a1 + 8, (__int64)&v15, v6 + 1) )
        return 0LL;
      v6 = v15;
    }
  }
  else
  {
    if ( winrt::is_guid_of<winrt::impl::IWeakReferenceSource>(v7) )
    {
      weak_ref = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::make_weak_ref(a1);
      *(_QWORD *)a3 = weak_ref;
      return weak_ref == 0 ? 0x8007000E : 0;
    }
    if ( !winrt::is_guid_of<winrt::impl::IAgileObject>(v8) )
    {
      if ( !winrt::is_guid_of<winrt::impl::IMarshal>(v11) )
        return (*v13)(a1);
      v14 = v13[3](a1);
      return winrt::impl::make_marshaler(v14, a3);
    }
    *(_QWORD *)a3 = (*(__int64 (__fastcall **)(__int64))(v12 + 24))(a1);
    v6 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 8);
    v15 = v6;
    while ( v6 >= 0 )
    {
      if ( std::_Atomic_storage<unsigned __int64,8>::compare_exchange_strong(a1 + 8, (__int64)&v15, v6 + 1) )
        return 0LL;
      v6 = v15;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(2 * v6 + 24));
  return 0LL;
}
