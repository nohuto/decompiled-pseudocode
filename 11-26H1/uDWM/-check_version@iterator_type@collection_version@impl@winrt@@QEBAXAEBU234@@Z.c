/*
 * XREFs of ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x1800DCCC0
 * Callers:
 *     ?Current@iterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBA?AUUserResizeVisual@Transitions@Udwm@3@XZ @ 0x1800DAB9C (-Current@iterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$ve.c)
 *     ?GetMany@iterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@UUserResizeVisual@Transitions@Udwm@winrt@@@3@@Z @ 0x1800DB158 (-GetMany@iterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$ve.c)
 *     ?MoveNext@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800DB8B0 (-MoveNext@-$produce@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@.c)
 *     ?get_HasCurrent@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800DCDD0 (-get_HasCurrent@-$produce@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions.c)
 * Callees:
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800D160C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800DA5B4 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     _CxxThrowException_0 @ 0x1800E6C70 (_CxxThrowException_0.c)
 */

void __fastcall winrt::impl::collection_version::iterator_type::check_version(
        winrt::impl::collection_version::iterator_type *this,
        const struct winrt::impl::collection_version *a2)
{
  int v2; // eax
  _DWORD *v3; // r8
  unsigned int v4; // [rsp+20h] [rbp-38h] BYREF
  const char *v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+30h] [rbp-28h]
  _BYTE pExceptionObject[32]; // [rsp+38h] [rbp-20h] BYREF

  v2 = std::_Atomic_storage<unsigned int,4>::load((__int64)a2);
  if ( v2 != *v3 )
  {
    v5 = "OneCoreUap\\Internal\\BuildMetadata\\internal\\cppwinrt\\winrt\\Windows.Foundation.Collections.h";
    v4 = 1345;
    v6 = 0LL;
    winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_changed_state, &v4);
    throw (winrt::hresult_changed_state *)pExceptionObject;
  }
}
