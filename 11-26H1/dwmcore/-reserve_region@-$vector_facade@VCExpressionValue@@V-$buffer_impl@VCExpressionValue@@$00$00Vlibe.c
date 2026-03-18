/*
 * XREFs of ?reserve_region@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCExpressionValue@@_K0@Z @ 0x18010C534
 * Callers:
 *     ?resize@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBVCExpressionValue@@@Z @ 0x18010C490 (-resize@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00_ea_18010C490.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18010C69C (-ensure_extra_capacity@-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@.c)
 *     ??0CExpressionValue@@QEAA@$$QEAV0@@Z @ 0x1801DEB80 (--0CExpressionValue@@QEAA@$$QEAV0@@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAVCExpressionValue@@@std@@V?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@V?$move_iterator@PEAVCExpressionValue@@@0@0V12@@Z @ 0x18028811C (--$move_backward@V-$move_iterator@PEAVCExpressionValue@@@std@@V-$checked_array_iterator@PEAVCExp.c)
 *     ??C?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@QEBAPEAVCExpressionValue@@XZ @ 0x18028826C (--C-$checked_array_iterator@PEAVCExpressionValue@@@stdext@@QEBAPEAVCExpressionValue@@XZ.c)
 */

CExpressionValue *__fastcall detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 *v5; // r13
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  CExpressionValue *v10; // r15
  CExpressionValue *v11; // rbx
  CExpressionValue *v12; // rdi
  CExpressionValue *result; // rax
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  __int128 v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+30h] [rbp-50h]
  __int128 v18; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  char v20[32]; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v22; // [rsp+D0h] [rbp+50h]

  v5 = a1;
  detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a3);
  v6 = *v5;
  v7 = v5[1];
  v8 = 0x8E38E38E38E38E39uLL * ((v7 - *v5) >> 3);
  v22 = *v5 + 8 * ((v7 - *v5) >> 3);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v18, v22, a3);
  v16 = v18;
  v17 = v19;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v16, a3);
  v9 = v8 - a2;
  if ( a3 < v8 - a2 )
    v9 = a3;
  v18 = v16;
  v19 = v17;
  if ( v7 != v7 - 72 * v9 )
  {
    v14 = v7 - 72 * v9;
    do
    {
      v7 -= 72LL;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v18);
      v15 = stdext::checked_array_iterator<CExpressionValue *>::operator->(&v18);
      CExpressionValue::CExpressionValue(v15, v7);
    }
    while ( v7 != v14 );
    v5 = a1;
  }
  if ( v8 - a2 > a3 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v18, v6, v8);
    v16 = v18;
    v17 = v19;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v16, v8);
    v10 = (CExpressionValue *)(v6 + 72 * a2);
    v18 = v16;
    v19 = v17;
    std::move_backward<std::move_iterator<CExpressionValue *>,stdext::checked_array_iterator<CExpressionValue *>>(
      v20,
      v10,
      v6 + 72 * (v8 - a3),
      &v18);
  }
  else
  {
    v10 = (CExpressionValue *)(v6 + 72 * a2);
  }
  v11 = v10;
  if ( v22 >= v6 + 72 * (a2 + a3) )
    v8 = a2 + a3;
  v12 = (CExpressionValue *)(v6 + 72 * v8);
  if ( v10 != v12 )
  {
    do
    {
      CExpressionValue::DestroyCurrent(v11);
      v11 = (CExpressionValue *)((char *)v11 + 72);
    }
    while ( v11 != v12 );
  }
  result = v10;
  v5[1] += 72 * a3;
  return result;
}
