/*
 * XREFs of ?IndexOf@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHUguid@3@PEAIPEA_N@Z @ 0x1800EBEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E9C2C (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800EDDAC (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     _CxxThrowException_0 @ 0x1801626E0 (_CxxThrowException_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>>::IndexOf(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        bool *a4)
{
  __int64 v6; // r10
  __int64 v7; // r9
  _QWORD *i; // r8
  __int64 v9; // r8
  const struct winrt::impl::slim_source_location *v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+20h] [rbp-48h]
  _BYTE pExceptionObject[24]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v16[40]; // [rsp+40h] [rbp-28h] BYREF

  v6 = (a1 - 16) & -(__int64)(a1 != 0);
  if ( *(_BYTE *)(v6 + 0x20) )
  {
    v11 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v16);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call(
      (winrt::hresult_illegal_method_call *)pExceptionObject,
      v11);
    try
    {
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    catch ( ... )
    {
      v12 = &v13;
      *((_DWORD *)v12 + 8) = *(_DWORD *)winrt::to_hresult(v12 + 4);
      return v14;
    }
  }
  v7 = v6 + 33;
  for ( i = *(_QWORD **)((v6 & -(__int64)(v6 != -33)) + 0x28);
        i != *(_QWORD **)((v6 & -(__int64)(v6 != -33)) + 0x30) && (*a2 != *i || a2[1] != i[1]);
        i += 2 )
  {
    ;
  }
  v9 = ((__int64)i - *(_QWORD *)((v6 & -(__int64)(v7 != 0)) + 0x28)) >> 4;
  *a3 = v9;
  *a4 = (unsigned int)v9 < (unsigned int)((__int64)(*(_QWORD *)((v6 & -(__int64)(v7 != 0)) + 0x30)
                                                  - *(_QWORD *)((v6 & -(__int64)(v7 != 0)) + 0x28)) >> 4);
  return 0LL;
}
