/*
 * XREFs of ?GetMany@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAUguid@3@PEAI@Z @ 0x1800EBB40
 * Callers:
 *     <none>
 * Callees:
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E9C2C (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800EDDAC (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     _CxxThrowException_0 @ 0x1801626E0 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5)
{
  __int64 v7; // r11
  __int64 v8; // r9
  unsigned int v9; // r8d
  __int64 v10; // r10
  unsigned int v11; // ebx
  const struct winrt::impl::slim_source_location *v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v17[32]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+8h]

  v7 = a2;
  v8 = (a1 - 16) & -(__int64)(a1 != 0);
  v9 = 0;
  if ( *(_BYTE *)(v8 + 0x20) )
  {
    v13 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v17);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call(
      (winrt::hresult_illegal_method_call *)pExceptionObject,
      v13);
    try
    {
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    catch ( ... )
    {
      v14 = &v15;
      *((_DWORD *)v14 + 24) = *(_DWORD *)winrt::to_hresult(v14 + 12);
      return v18;
    }
  }
  v10 = v8 + 33;
  if ( (unsigned int)v7 < (unsigned int)((__int64)(*(_QWORD *)((v8 & -(__int64)(v8 != -33)) + 0x30)
                                                 - *(_QWORD *)((v8 & -(__int64)(v8 != -33)) + 0x28)) >> 4) )
  {
    v11 = ((__int64)(*(_QWORD *)((v8 & -(__int64)(v10 != 0)) + 0x30) - *(_QWORD *)((v8 & -(__int64)(v10 != 0)) + 0x28)) >> 4)
        - v7;
    if ( a3 < v11 )
      v11 = a3;
    if ( v11 )
      memmove_0(a4, (const void *)(*(_QWORD *)((v8 & -(__int64)(v10 != 0)) + 0x28) + 16 * v7), 16LL * v11);
    v9 = v11;
  }
  *a5 = v9;
  return 0LL;
}
