/*
 * XREFs of ?InsertAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x1800DB680
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800D9FB4 (--$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@Transitions@.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800DA5B4 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     ?increment_version@collection_version@impl@winrt@@QEAAXXZ @ 0x1800DCFCC (-increment_version@collection_version@impl@winrt@@QEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1800E6C70 (_CxxThrowException_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>::InsertAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned int v9; // [rsp+20h] [rbp-38h] BYREF
  const char *v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  _BYTE pExceptionObject[32]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  try
  {
    v3 = (a1 - 16) & -(__int64)(a1 != 0);
    if ( a2 > (unsigned __int64)((__int64)(*(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x38)
                                         - *(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x30)) >> 3) )
    {
      v9 = 1713;
      v10 = "OneCoreUap\\Internal\\BuildMetadata\\internal\\cppwinrt\\winrt\\Windows.Foundation.Collections.h";
      v11 = 0LL;
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_out_of_bounds, &v9);
      throw (winrt::hresult_out_of_bounds *)pExceptionObject;
    }
    winrt::impl::collection_version::increment_version((winrt::impl::collection_version *)(v3 + 40));
    if ( v6 )
    {
      v7 = v4 + 48;
    }
    else
    {
      v7 = 48LL;
      v4 = 0LL;
    }
    std::vector<winrt::Udwm::Transitions::UserResizeVisual>::emplace<winrt::Udwm::Transitions::UserResizeVisual const &>(
      (_QWORD *)v7,
      &v13,
      (__int64 *)(*(_QWORD *)(v4 + 48) + 8 * v5),
      &v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v14);
  }
  return result;
}
