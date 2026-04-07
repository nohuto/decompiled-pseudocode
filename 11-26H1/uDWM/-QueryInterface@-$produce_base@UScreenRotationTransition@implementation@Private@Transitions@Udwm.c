/*
 * XREFs of ?QueryInterface@?$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E550
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface_common@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E6EC (-query_interface_common@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVi.c)
 *     ?AddRef@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAAIXZ @ 0x18002ED64 (-AddRef@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,winrt::Udwm::Transitions::ITransition,void>::QueryInterface(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // r11d

  v5 = (a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
  *a3 = v6;
  if ( v6 )
    winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::AddRef(v5);
  else
    return (unsigned int)winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::query_interface_common(
                           v5,
                           a2,
                           a3);
  return v7;
}
