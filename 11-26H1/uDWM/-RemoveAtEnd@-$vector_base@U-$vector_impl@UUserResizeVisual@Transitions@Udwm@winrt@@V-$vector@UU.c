/*
 * XREFs of ?RemoveAtEnd@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXXZ @ 0x1800DBBE0
 * Callers:
 *     ?RemoveAtEnd@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1800DBBB0 (-RemoveAtEnd@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserR.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800DA5B4 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$_Optional_destruct_base@UUserResizeVisual@Transitions@Udwm@winrt@@$0A@@std@@QEAA@XZ @ 0x1800DA5F4 (--1-$_Optional_destruct_base@UUserResizeVisual@Transitions@Udwm@winrt@@$0A@@std@@QEAA@XZ.c)
 *     ?increment_version@collection_version@impl@winrt@@QEAAXXZ @ 0x1800DCFCC (-increment_version@collection_version@impl@winrt@@QEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1800E6C70 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual>::RemoveAtEnd(
        winrt::impl::collection_version *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  char v7; // [rsp+28h] [rbp-38h]
  unsigned int v8; // [rsp+30h] [rbp-30h] BYREF
  const char *v9; // [rsp+38h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-20h]
  _BYTE pExceptionObject[24]; // [rsp+48h] [rbp-18h] BYREF

  v7 = 0;
  v1 = (__int64)a1 + 8;
  if ( !a1 )
    v1 = 48LL;
  if ( *(_QWORD *)v1 == *(_QWORD *)(v1 + 8) )
  {
    v8 = 1750;
    v9 = "OneCoreUap\\Internal\\BuildMetadata\\internal\\cppwinrt\\winrt\\Windows.Foundation.Collections.h";
    v10 = 0LL;
    winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_out_of_bounds, &v8);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  winrt::impl::collection_version::increment_version(a1);
  v3 = v2 + 16;
  if ( !v2 )
    v3 = 56LL;
  v4 = *(_QWORD *)(*(_QWORD *)v3 - 8LL);
  *(_QWORD *)(*(_QWORD *)v3 - 8LL) = 0LL;
  v6 = v4;
  v7 = 1;
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(*(_QWORD *)v3 - 8LL));
  *(_QWORD *)v3 -= 8LL;
  return std::_Optional_destruct_base<winrt::Udwm::Transitions::UserResizeVisual,0>::~_Optional_destruct_base<winrt::Udwm::Transitions::UserResizeVisual,0>((__int64)&v6);
}
