/*
 * XREFs of ?query_interface_common@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D7DA0
 * Callers:
 *     ?query_interface@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800907DC (-query_interface@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Tr.c)
 *     ??$as@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@U1implementation@2345@$0A@@impl@winrt@@YA?AUScreenRotationTransition@Private@Transitions@Udwm@1@PEAU2implementation@3451@@Z @ 0x1800D47F8 (--$as@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@U1implementation@2345@$0A@@impl@.c)
 * Callees:
 *     ?AddRef@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAAIXZ @ 0x180033F44 (-AddRef@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions.c)
 *     ?make_weak_ref@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18009061C (-make_weak_ref@-$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions.c)
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180097BAC (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800987A4 (--$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180098858 (--$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIInspectable@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800988E8 (--$is_guid_of@UIInspectable@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIAgileObject@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180098910 (--$is_guid_of@UIAgileObject@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIWeakReferenceSource@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180099B2C (--$is_guid_of@UIWeakReferenceSource@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::query_interface_common(
        __int64 a1,
        _QWORD *a2,
        const struct std::nothrow_t *a3)
{
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  void *weak_ref; // rax
  _QWORD *v11; // rcx
  __int64 (__fastcall **v12)(__int64); // r9
  __int64 v13; // rax

  if ( winrt::is_guid_of<winrt::Windows::Foundation::IUnknown>(a2) )
    goto LABEL_2;
  if ( winrt::is_guid_of<winrt::Windows::Foundation::IInspectable>(v5) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    goto LABEL_3;
  }
  if ( winrt::is_guid_of<winrt::impl::IWeakReferenceSource>(v8) )
  {
    weak_ref = winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>::make_weak_ref(a1);
    *(_QWORD *)a3 = weak_ref;
    return weak_ref == 0LL ? 0x8007000E : 0;
  }
  else
  {
    if ( winrt::is_guid_of<winrt::impl::IAgileObject>(v9) )
    {
LABEL_2:
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
LABEL_3:
      *(_QWORD *)a3 = v6;
      winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::AddRef(a1);
      return 0LL;
    }
    if ( winrt::is_guid_of<winrt::impl::IMarshal>(v11) )
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
