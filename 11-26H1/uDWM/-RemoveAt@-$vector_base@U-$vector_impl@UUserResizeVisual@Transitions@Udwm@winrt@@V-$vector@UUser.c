/*
 * XREFs of ?RemoveAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXI@Z @ 0x1800DBA94
 * Callers:
 *     ?RemoveAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHI@Z @ 0x1800DBA60 (-RemoveAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResi.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180041BB4 (--4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800DA5B4 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$_Optional_destruct_base@UUserResizeVisual@Transitions@Udwm@winrt@@$0A@@std@@QEAA@XZ @ 0x1800DA5F4 (--1-$_Optional_destruct_base@UUserResizeVisual@Transitions@Udwm@winrt@@$0A@@std@@QEAA@XZ.c)
 *     ?increment_version@collection_version@impl@winrt@@QEAAXXZ @ 0x1800DCFCC (-increment_version@collection_version@impl@winrt@@QEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1800E6C70 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual>::RemoveAt(
        winrt::impl::collection_version *a1,
        unsigned int a2)
{
  __int64 v3; // r8
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 *v9; // r14
  __int64 *i; // rdi
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  char v13; // [rsp+28h] [rbp-38h]
  unsigned int v14; // [rsp+30h] [rbp-30h] BYREF
  const char *v15; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+40h] [rbp-20h]
  _BYTE pExceptionObject[24]; // [rsp+48h] [rbp-18h] BYREF

  v13 = 0;
  v3 = (__int64)a1 + 8;
  if ( !a1 )
    v3 = 48LL;
  if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)(v3 + 8) - *(_QWORD *)v3) >> 3) )
  {
    v14 = 1727;
    v15 = "OneCoreUap\\Internal\\BuildMetadata\\internal\\cppwinrt\\winrt\\Windows.Foundation.Collections.h";
    v16 = 0LL;
    winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_out_of_bounds, &v14);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  winrt::impl::collection_version::increment_version(a1);
  v6 = (__int64 *)(*v4 + 8 * v5);
  v7 = *v6;
  *v6 = 0LL;
  v12 = v7;
  v13 = 1;
  v8 = (__int64)a1 + 16;
  if ( !a1 )
    v8 = 56LL;
  v9 = *(__int64 **)v8;
  for ( i = v6 + 1; i != v9; ++i )
    winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(i - 1, i);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(*(_QWORD *)v8 - 8LL));
  *(_QWORD *)v8 -= 8LL;
  return std::_Optional_destruct_base<winrt::Udwm::Transitions::UserResizeVisual,0>::~_Optional_destruct_base<winrt::Udwm::Transitions::UserResizeVisual,0>((__int64)&v12);
}
