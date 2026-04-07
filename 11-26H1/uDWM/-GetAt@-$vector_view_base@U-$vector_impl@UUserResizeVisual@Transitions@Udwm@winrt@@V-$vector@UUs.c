/*
 * XREFs of ?GetAt@?$vector_view_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBA?AUUserResizeVisual@Transitions@Udwm@2@I@Z @ 0x1800DAD6C
 * Callers:
 *     ?GetAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x1800DACB0 (-GetAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeV.c)
 *     ?GetAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x1800DAD10 (-GetAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector_ea_1800DAD10.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800DA5B4 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     _CxxThrowException_0 @ 0x1800E6C70 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::GetAt(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v8; // [rsp+28h] [rbp-40h] BYREF
  const char *v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  _BYTE pExceptionObject[40]; // [rsp+40h] [rbp-28h] BYREF

  v4 = a1 + 8;
  if ( !a1 )
    v4 = 48LL;
  v5 = a1 + 16;
  if ( !a1 )
    v5 = 56LL;
  if ( a3 >= (unsigned int)((__int64)(*(_QWORD *)v5 - *(_QWORD *)v4) >> 3) )
  {
    v8 = 1639;
    v9 = "OneCoreUap\\Internal\\BuildMetadata\\internal\\cppwinrt\\winrt\\Windows.Foundation.Collections.h";
    v10 = 0LL;
    winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_out_of_bounds, &v8);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _mm_lfence();
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 8LL * a3);
  *a2 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return a2;
}
