/*
 * XREFs of ?query_interface_common@?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E630
 * Callers:
 *     ?QueryInterface@?$produce_base@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E5C0 (-QueryInterface@-$produce_base@UWindowMoveResizeCrossfadeTransition@implementation@Private@Trans.c)
 *     ?QueryInterface@?$produce_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800DB960 (-QueryInterface@-$produce_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vecto.c)
 *     ?QueryInterface@?$produce_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800DB9D0 (-QueryInterface@-$produce_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@wi_ea_1800DB9D0.c)
 * Callees:
 *     ?AddRef@?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x18002ECD8 (-AddRef@-$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transition.c)
 *     ?make_weak_ref@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180030AC4 (-make_weak_ref@-$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions.c)
 *     ??$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800871E0 (--$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x18008B0C0 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008BA4C (--$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIInspectable@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008BC84 (--$is_guid_of@UIInspectable@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIAgileObject@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008BCAC (--$is_guid_of@UIAgileObject@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIWeakReferenceSource@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008D630 (--$is_guid_of@UIWeakReferenceSource@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>::query_interface_common(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 weak_ref; // rax
  __int64 v11; // r9
  __int64 (__fastcall **v12)(_QWORD *); // r9
  __int64 v13; // rax

  if ( (unsigned __int8)winrt::is_guid_of<winrt::Windows::Foundation::IUnknown>(a2) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
LABEL_3:
    *a3 = v5;
    winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>::AddRef(a1);
    return 0LL;
  }
  if ( (unsigned __int8)winrt::is_guid_of<winrt::Windows::Foundation::IInspectable>() )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
    goto LABEL_3;
  }
  if ( (unsigned __int8)winrt::is_guid_of<winrt::impl::IWeakReferenceSource>() )
  {
    weak_ref = winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>::make_weak_ref(a1);
    *a3 = weak_ref;
    return weak_ref == 0 ? 0x8007000E : 0;
  }
  else
  {
    if ( (unsigned __int8)winrt::is_guid_of<winrt::impl::IAgileObject>(v8, v7, v9, *a1) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD *))(v11 + 24))(a1);
      goto LABEL_3;
    }
    if ( (unsigned __int8)winrt::is_guid_of<winrt::impl::IMarshal>() )
    {
      v13 = v12[3](a1);
      return winrt::impl::make_marshaler(v13, a3);
    }
    else
    {
      return (*v12)(a1);
    }
  }
}
