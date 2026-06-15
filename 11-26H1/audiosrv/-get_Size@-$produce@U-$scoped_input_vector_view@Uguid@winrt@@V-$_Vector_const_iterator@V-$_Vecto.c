/*
 * XREFs of ?get_Size@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAI@Z @ 0x1800EE0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E9C2C (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800EDDAC (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     _CxxThrowException_0 @ 0x1801626E0 (_CxxThrowException_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v3; // r9
  const struct winrt::impl::slim_source_location *v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+8h]

  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  if ( *(_BYTE *)(v3 + 0x20) )
  {
    v5 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v9);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call(
      (winrt::hresult_illegal_method_call *)pExceptionObject,
      v5);
    try
    {
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    catch ( ... )
    {
      v6 = &v7;
      *((_DWORD *)v6 + 24) = *(_DWORD *)winrt::to_hresult(v6 + 12);
      return v10;
    }
  }
  *a2 = (__int64)(*(_QWORD *)((v3 & -(__int64)(v3 != -33)) + 0x30) - *(_QWORD *)((v3 & -(__int64)(v3 != -33)) + 0x28)) >> 4;
  return 0LL;
}
