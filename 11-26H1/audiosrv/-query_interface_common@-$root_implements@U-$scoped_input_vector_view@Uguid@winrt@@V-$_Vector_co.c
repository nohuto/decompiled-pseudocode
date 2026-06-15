/*
 * XREFs of ?query_interface_common@?$root_implements@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Unon_agile@3@Uno_weak_ref@3@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@U?$IIterable@Uguid@winrt@@@7893@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800EE78C
 * Callers:
 *     ?QueryInterface@?$produce_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IIterable@Uguid@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800ECAD0 (-QueryInterface@-$produce_base@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iterato.c)
 *     ?QueryInterface@?$produce_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800ECB40 (-QueryInterface@-$produce_base@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector__ea_1800ECB40.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::non_agile,winrt::no_weak_ref,winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>,winrt::Windows::Foundation::Collections::IIterable<winrt::guid>>::query_interface_common(
        volatile signed __int32 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 (*v4)(void); // rax
  __int64 v6; // rax
  __int64 (**v7)(void); // r9

  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> && a2[1] == 0x46000000000000C0LL )
  {
    v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 24LL);
LABEL_4:
    *a3 = v4();
    _InterlockedIncrement(a1 + 2);
    return 0LL;
  }
  v6 = *a2 - winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable>;
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable> )
    v6 = a2[1] + 0x6FE1EF9A5528A564LL;
  v7 = *(__int64 (***)(void))a1;
  if ( !v6 )
  {
    v4 = v7[7];
    goto LABEL_4;
  }
  return (*v7)();
}
