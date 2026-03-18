/*
 * XREFs of ?reserve_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCVIRenderList@@_K0@Z @ 0x180170818
 * Callers:
 *     ??$insert_unchecked@AEBVCVIRenderList@@@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@VCVIRenderList@@@1@V?$basic_iterator@$$CBVCVIRenderList@@@1@AEBVCVIRenderList@@@Z @ 0x180170794 (--$insert_unchecked@AEBVCVIRenderList@@@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRende.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180170928 (-ensure_extra_capacity@-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@VCVIRenderList@@@detail@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@detail@@YAXV?$basic_iterator@VCVIRenderList@@@0@0V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@Z @ 0x1801709B0 (--$move_backward_uninitialized@V-$basic_iterator@VCVIRenderList@@@detail@@V-$checked_array_itera.c)
 *     ??$move_backward@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x18024576C (--$move_backward@V-$move_iterator@PEAVCVIRenderList@@@std@@V-$checked_array_iterator@PEAVCVIRend.c)
 */

__int64 __fastcall detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+30h] [rbp-50h]
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+50h] [rbp-30h]
  char v15[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v16; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+D0h] [rbp+50h] BYREF

  v17 = a3;
  detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v5 = *a1;
  v6 = a1[1];
  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((v6 - *a1) >> 3);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v13, *a1 + 8 * ((v6 - *a1) >> 3), 1LL);
  v11 = v13;
  v12 = v14;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v11, 1LL);
  v17 = v6;
  v13 = v11;
  v8 = v7 - a2;
  v14 = v12;
  if ( (unsigned __int64)(v7 - a2) > 1 )
    v8 = 1LL;
  v16 = v6 - 40 * v8;
  detail::move_backward_uninitialized<detail::basic_iterator<CVIRenderList>,stdext::checked_array_iterator<CVIRenderList *>>(
    &v16,
    &v17,
    &v13);
  if ( (unsigned __int64)(v7 - a2) > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v13, v5, v7);
    v11 = v13;
    v12 = v14;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v11, v7);
    v13 = v11;
    v14 = v12;
    v9 = 40 * a2;
    std::move_backward<std::move_iterator<CVIRenderList *>,stdext::checked_array_iterator<CVIRenderList *>>(
      v15,
      40 * a2 + v5,
      v5 + 40 * (v7 - 1),
      &v13);
  }
  else
  {
    v9 = 40 * a2;
  }
  a1[1] += 40LL;
  return v9 + v5;
}
