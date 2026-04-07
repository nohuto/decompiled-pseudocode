/*
 * XREFs of ?SetAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXIAEBUUserResizeVisual@Transitions@Udwm@2@@Z @ 0x1800DBE0C
 * Callers:
 *     ?SetAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x1800DBDD0 (-SetAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeV.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180030428 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800DA5B4 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$_Optional_destruct_base@UUserResizeVisual@Transitions@Udwm@winrt@@$0A@@std@@QEAA@XZ @ 0x1800DA5F4 (--1-$_Optional_destruct_base@UUserResizeVisual@Transitions@Udwm@winrt@@$0A@@std@@QEAA@XZ.c)
 *     ?increment_version@collection_version@impl@winrt@@QEAAXXZ @ 0x1800DCFCC (-increment_version@collection_version@impl@winrt@@QEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1800E6C70 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual>::SetAt(
        winrt::impl::collection_version *a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 v4; // r9
  _QWORD *v5; // r9
  __int64 v6; // r8
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  char v11; // [rsp+28h] [rbp-38h]
  unsigned int v12; // [rsp+30h] [rbp-30h] BYREF
  const char *v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h]
  _BYTE pExceptionObject[24]; // [rsp+48h] [rbp-18h] BYREF

  v11 = 0;
  v4 = (__int64)a1 + 8;
  if ( !a1 )
    v4 = 48LL;
  if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)(v4 + 8) - *(_QWORD *)v4) >> 3) )
  {
    v12 = 1699;
    v13 = "OneCoreUap\\Internal\\BuildMetadata\\internal\\cppwinrt\\winrt\\Windows.Foundation.Collections.h";
    v14 = 0LL;
    winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_out_of_bounds, &v12);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  winrt::impl::collection_version::increment_version(a1);
  v7 = (__int64 *)(*v5 + 8 * v6);
  v8 = *v7;
  *v7 = 0LL;
  v10 = v8;
  v11 = 1;
  winrt::Windows::Foundation::IUnknown::operator=(v7, a3);
  return std::_Optional_destruct_base<winrt::Udwm::Transitions::UserResizeVisual,0>::~_Optional_destruct_base<winrt::Udwm::Transitions::UserResizeVisual,0>((__int64)&v10);
}
