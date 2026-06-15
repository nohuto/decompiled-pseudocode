/*
 * XREFs of ?get_Current@?$produce@Uiterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@U?$IIterator@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAUguid@3@@Z @ 0x1800EDF90
 * Callers:
 *     <none>
 * Callees:
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E9C2C (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E9D1C (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800EDDAC (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     _CxxThrowException_0 @ 0x1801626E0 (_CxxThrowException_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::guid,winrt::impl::no_collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::guid>>::get_Current(
        __int64 a1,
        _OWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _OWORD *v4; // r8
  __int64 v5; // rax
  const struct winrt::impl::slim_source_location *v7; // rax
  const struct winrt::impl::slim_source_location *v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-78h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[24]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v13[40]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+80h] [rbp+8h]

  v2 = a1 + 8;
  if ( !a1 )
    v2 = 24LL;
  if ( *(_BYTE *)(*(_QWORD *)v2 + 32LL) )
  {
    v7 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v13);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call(
      (winrt::hresult_illegal_method_call *)pExceptionObject,
      v7);
    try
    {
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    catch ( ... )
    {
      v9 = &v10;
      *((_DWORD *)v9 + 32) = *(_DWORD *)winrt::to_hresult(v9 + 16);
      return v14;
    }
  }
  v3 = a1 + 16;
  if ( !a1 )
    v3 = 32LL;
  v4 = *(_OWORD **)v3;
  v5 = a1 + 24;
  if ( !a1 )
    v5 = 40LL;
  if ( v4 == *(_OWORD **)v5 )
  {
    v8 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v13);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)v12, v8);
    throw (winrt::hresult_out_of_bounds *)v12;
  }
  *a2 = *v4;
  return 0LL;
}
