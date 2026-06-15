/*
 * XREFs of ?GetAt@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAUguid@3@@Z @ 0x1800EB8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E9C2C (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E9D1C (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800EDDAC (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     _CxxThrowException_0 @ 0x1801626E0 (_CxxThrowException_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3)
{
  __int64 v4; // r10
  __int64 v5; // r9
  const struct winrt::impl::slim_source_location *v7; // rax
  const struct winrt::impl::slim_source_location *v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-78h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[24]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v13[40]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+80h] [rbp+8h]

  v4 = a2;
  v5 = (a1 - 16) & -(__int64)(a1 != 0);
  if ( *(_BYTE *)(v5 + 0x20) )
  {
    v7 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v13);
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
  if ( (unsigned int)v4 >= (unsigned int)((__int64)(*(_QWORD *)((v5 & -(__int64)(v5 != -33)) + 0x30)
                                                  - *(_QWORD *)((v5 & -(__int64)(v5 != -33)) + 0x28)) >> 4) )
  {
    v8 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v13);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)v12, v8);
    throw (winrt::hresult_out_of_bounds *)v12;
  }
  *a3 = *(_OWORD *)(*(_QWORD *)((v5 & -(__int64)(v5 != -33)) + 0x28) + 16 * v4);
  return 0LL;
}
