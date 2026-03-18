/*
 * XREFs of ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008B790
 * Callers:
 *     ?UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z @ 0x1800777B0 (-UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *result; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  _QWORD *v12; // rbx
  __int64 v13; // rsi
  __int64 (__fastcall ***v14)(_QWORD, __int64); // rcx
  __int64 v15; // rbp
  _QWORD *i; // rbx
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v18; // [rsp+30h] [rbp-38h]
  __int128 v19; // [rsp+40h] [rbp-28h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp-18h]

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  v7 = a2 + a3;
  if ( a2 + a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v8 = (_QWORD *)(v3 + 8 * v6);
  result = stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v19, v3, v6);
  if ( v7 != v11 )
  {
    v17 = v19;
    v18 = v20;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v17, v10);
    v12 = (_QWORD *)(v3 + 8 * v7);
    v19 = v17;
    v20 = v18;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v19, v8 - v12);
    result = v18;
    v13 = v17 + 8LL * (_QWORD)v18 - (_QWORD)v12;
    while ( v12 != v8 )
    {
      result = (_QWORD *)*v12;
      *v12 = 0LL;
      v14 = *(__int64 (__fastcall ****)(_QWORD, __int64))((char *)v12 + v13);
      *(_QWORD *)((char *)v12 + v13) = result;
      if ( v14 )
        result = (_QWORD *)(**v14)(v14, 1LL);
      ++v12;
    }
  }
  v15 = 8 * a3;
  for ( i = &v8[v15 / 0xFFFFFFFFFFFFFFF8uLL]; i != v8; ++i )
  {
    if ( *i )
      result = (_QWORD *)(**(__int64 (__fastcall ***)(_QWORD, __int64))*i)(*i, 1LL);
  }
  a1[1] -= v15;
  return result;
}
