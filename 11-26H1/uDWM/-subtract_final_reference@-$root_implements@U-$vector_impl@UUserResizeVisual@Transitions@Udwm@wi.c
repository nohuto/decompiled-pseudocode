/*
 * XREFs of ?subtract_final_reference@?$root_implements@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@@impl@winrt@@IEAAIXZ @ 0x18002F240
 * Callers:
 *     ??1?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@MEAA@XZ @ 0x18002F6CC (--1-$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udw.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x18002EC80 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x18002F670 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18002F680 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Windows::Foundation::Collections::IIterable<winrt::Udwm::Transitions::UserResizeVisual>>::subtract_final_reference(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r9
  volatile signed __int64 *v5; // rax
  unsigned int v6; // r10d
  signed __int64 v7; // rdx
  signed __int64 v8; // r8
  unsigned __int32 v10; // ebx
  void *v11; // r8
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v1 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 8);
  v2 = v1;
  v3 = v1;
  while ( 1 )
  {
    v12 = v1;
    if ( v1 < 0 )
      break;
    v13 = v2 - 1;
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v12);
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v13);
    v5 = (volatile signed __int64 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v4);
    v1 = _InterlockedCompareExchange64(v5, v7, v8);
    v3 = v1;
    v2 = v1;
    if ( v8 == v1 )
      return v6;
  }
  v10 = _InterlockedDecrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(2 * v3 + 24));
  if ( !v10 )
    winrt::impl::weak_ref<1,1>::Release(v11);
  return v10;
}
