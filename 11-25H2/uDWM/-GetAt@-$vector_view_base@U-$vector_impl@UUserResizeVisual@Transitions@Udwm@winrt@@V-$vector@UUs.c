/*
 * XREFs of ?GetAt@?$vector_view_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBA?AUUserResizeVisual@Transitions@Udwm@2@I@Z @ 0x1800DDECC
 * Callers:
 *     ?GetAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x1800DDE10 (-GetAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeV.c)
 *     ?GetAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x1800DDE70 (-GetAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector_ea_1800DDE70.c)
 * Callees:
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800D3F50 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800DD85C (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     _CxxThrowException_0 @ 0x1800EB100 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::GetAt(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  const struct winrt::impl::slim_source_location *v9; // rax
  _BYTE pExceptionObject[24]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v11[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1 + 8;
  v4 = a1 + 16;
  if ( !a1 )
  {
    v3 = 48LL;
    v4 = 56LL;
  }
  if ( a3 >= (unsigned int)((__int64)(*(_QWORD *)v4 - *(_QWORD *)v3) >> 3) )
  {
    v9 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v11);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v9);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  v6 = a1 + 8;
  if ( !a1 )
    v6 = 48LL;
  v7 = *(_QWORD *)(*(_QWORD *)v6 + 8LL * a3);
  *a2 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return a2;
}
