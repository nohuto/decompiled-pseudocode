/*
 * XREFs of ?GetMany@?$produce@Uiterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@U?$IIterator@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAUguid@3@PEAI@Z @ 0x1800EBC50
 * Callers:
 *     <none>
 * Callees:
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E9C2C (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800EDDAC (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     _CxxThrowException_0 @ 0x1801626E0 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::guid,winrt::impl::no_collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::guid>>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  __int64 v6; // rax
  const void **v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  const struct winrt::impl::slim_source_location *v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-58h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+8h]

  v6 = a1 + 8;
  if ( !a1 )
    v6 = 24LL;
  if ( *(_BYTE *)(*(_QWORD *)v6 + 32LL) )
  {
    v11 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(&v15);
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
      *((_DWORD *)v12 + 24) = *(_DWORD *)winrt::to_hresult(v12 + 12);
      return v16;
    }
  }
  v7 = (const void **)(a1 + 16);
  if ( !a1 )
    v7 = (const void **)32;
  v8 = a1 + 24;
  if ( !a1 )
    v8 = 40LL;
  v9 = (__int64)(*(_QWORD *)v8 - (_QWORD)*v7) >> 4;
  if ( a2 < (unsigned int)v9 )
    LODWORD(v9) = a2;
  if ( (_DWORD)v9 )
    memmove_0(a3, *v7, 16LL * (unsigned int)v9);
  *v7 = (char *)*v7 + 16 * (unsigned int)v9;
  *a4 = v9;
  return 0LL;
}
