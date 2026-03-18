/*
 * XREFs of ?clear_region@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18010BBE4
 * Callers:
 *     ??1?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18010BE44 (--1-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion.c)
 *     ?erase@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCExpressionValue@@@2@V?$basic_iterator@$$CBVCExpressionValue@@@2@0@Z @ 0x1802147F8 (-erase@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expan.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ??$move@V?$move_iterator@PEAVCExpressionValue@@@std@@V?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@V?$move_iterator@PEAVCExpressionValue@@@0@0V12@@Z @ 0x180288074 (--$move@V-$move_iterator@PEAVCExpressionValue@@@std@@V-$checked_array_iterator@PEAVCExpressionVa.c)
 */

void __fastcall detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  CExpressionValue *v3; // rsi
  __int64 v4; // rbx
  unsigned __int64 v7; // r8
  __int64 v8; // r15
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdi
  CExpressionValue *i; // rbx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  v4 = *a1;
  v7 = 0x8E38E38E38E38E39uLL * ((a1[1] - *a1) >> 3);
  v8 = a2 + a3;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_8;
  }
  v3 = (CExpressionValue *)(v4 + 8 * ((a1[1] - *a1) >> 3));
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, *a1, v7);
  if ( v8 != v10 )
  {
LABEL_8:
    v13 = v15;
    v14 = v16;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v13, v9);
    v15 = v13;
    v16 = v14;
    std::move<std::move_iterator<CExpressionValue *>,stdext::checked_array_iterator<CExpressionValue *>>(
      &v13,
      v4 + 72 * v8,
      v3,
      &v15);
  }
  v11 = 72 * a3;
  for ( i = (CExpressionValue *)((char *)v3 - v11); i != v3; i = (CExpressionValue *)((char *)i + 72) )
    CExpressionValue::DestroyCurrent(i);
  a1[1] -= v11;
}
