/*
 * XREFs of ?Release@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAAIXZ @ 0x18002EE60
 * Callers:
 *     ?Release@?$produce_base@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAIXZ @ 0x18002EE10 (-Release@-$produce_base@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@U.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x18002EC80 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x18002F670 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18002F680 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x18002F698 (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::Release(
        __int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int32 v6; // edi
  volatile signed __int64 *v7; // rax
  signed __int64 v8; // rdx
  signed __int64 v9; // r8
  bool v10; // zf
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1 + 8;
  v3 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 8);
  v4 = v3;
  v5 = v3;
  while ( 1 )
  {
    v12 = v3;
    if ( v3 < 0 )
      break;
    v6 = v4 - 1;
    v13 = v4 - 1;
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v12);
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v13);
    v7 = (volatile signed __int64 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v1);
    v3 = _InterlockedCompareExchange64(v7, v8, v9);
    v10 = v9 == v3;
    v5 = v3;
    v4 = v3;
    if ( v10 )
      goto LABEL_4;
  }
  v6 = _InterlockedDecrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(2 * v5 + 24));
  if ( !v6 )
    winrt::impl::weak_ref<1,1>::Release((void *)v5);
LABEL_4:
  if ( !v6 )
  {
    std::_Atomic_storage<unsigned __int64,8>::store(v1, v8, v5);
    if ( a1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, 1LL);
  }
  return v6;
}
