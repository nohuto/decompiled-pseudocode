/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisualTree@@_K0@Z @ 0x1800AF1B4
 * Callers:
 *     ?AddVisualTree@CComposition@@QEAAXPEAVCVisualTree@@@Z @ 0x1800AEFD0 (-AddVisualTree@CComposition@@QEAAXPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@PEAVIRenderTarget@@@detail@@V?$checked_array_iterator@PEAPEAVIRenderTarget@@@stdext@@@detail@@YAXV?$basic_iterator@PEAVIRenderTarget@@@0@0V?$checked_array_iterator@PEAPEAVIRenderTarget@@@stdext@@@Z @ 0x1800AF328 (--$move_backward_uninitialized@V-$basic_iterator@PEAVIRenderTarget@@@detail@@V-$checked_array_it.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800AF394 (-ensure_extra_capacity@-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rsi
  signed __int64 v12; // rbx
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+50h] BYREF

  v19 = a3;
  detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v5 = *a1;
  v6 = a1[1];
  v7 = (v6 - *a1) >> 3;
  v8 = *a1 + 8 * v7;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, v8, 1LL);
  v14 = v16;
  v15 = v17;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v14, v9);
  v19 = v6;
  v10 = v7 - a2;
  v16 = v14;
  if ( (unsigned __int64)(v7 - a2) > 1 )
    v10 = 1LL;
  v17 = v15;
  v18 = v6 - 8 * v10;
  detail::move_backward_uninitialized<detail::basic_iterator<IRenderTarget *>,stdext::checked_array_iterator<IRenderTarget * *>>(
    &v18,
    &v19,
    &v16);
  if ( (unsigned __int64)(v7 - a2) <= 1 )
  {
    v11 = 8 * a2;
  }
  else
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, v5, v7);
    v14 = v16;
    v15 = v17;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v14, v7);
    v11 = 8 * a2;
    v16 = v14;
    v17 = v15;
    v12 = v8 - (v11 + v5) - 8;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v16, -(v12 >> 3));
    memmove_0((void *)(v14 + 8 * v15 - v12), (const void *)(v11 + v5), v12);
  }
  a1[1] += 8LL;
  return v11 + v5;
}
