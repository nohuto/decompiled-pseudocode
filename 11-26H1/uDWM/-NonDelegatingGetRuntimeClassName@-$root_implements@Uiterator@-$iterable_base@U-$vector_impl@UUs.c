/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1800D327C
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800D31B0 (-GetRuntimeClassName@-$produce_base@UScreenRotationTransition@implementation@Private@Transitions.c)
 *     ?GetRuntimeClassName@?$produce_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800D31D0 (-GetRuntimeClassName@-$produce_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$.c)
 *     ?GetRuntimeClassName@?$produce_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800DB3F0 (-GetRuntimeClassName@-$produce_base@U-$vector_impl@UUserResizeVisual@Transitions@Ud_ea_1800DB3F0.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C934 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    v4 = *v3;
    *v3 = 0LL;
    *a2 = v4;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
