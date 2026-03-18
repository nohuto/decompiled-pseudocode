/*
 * XREFs of ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1800F8660
 * Callers:
 *     ??$emplace@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@1@V?$basic_iterator@$$CBV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@1@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801D0BB0 (--$emplace@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@-$vector_facade@.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@detail@@YAXV?$basic_iterator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@0V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@Z @ 0x1800F87CC (--$move_backward_uninitialized@V-$basic_iterator@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returnco.c)
 *     ??$destruct_range@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800F8840 (--$destruct_range@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@Y.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800F8878 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wi.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x180205994 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wi.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h]
  __int128 v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h]
  char v16[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+D0h] [rbp+50h] BYREF

  v18 = a3;
  detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v5 = *a1;
  v6 = a1[1];
  v7 = (v6 - *a1) >> 3;
  v8 = *a1 + 8 * v7;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, v8, 1LL);
  v12 = v14;
  v13 = v15;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v12, v9);
  v18 = v6;
  v10 = v7 - a2;
  v14 = v12;
  if ( (unsigned __int64)(v7 - a2) > 1 )
    v10 = 1LL;
  v15 = v13;
  v17 = v6 - 8 * v10;
  detail::move_backward_uninitialized<detail::basic_iterator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy> *>>(
    &v17,
    &v18,
    &v14);
  if ( (unsigned __int64)(v7 - a2) > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, v5, v7);
    v12 = v14;
    v13 = v15;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v12, v7);
    v14 = v12;
    v15 = v13;
    std::move_backward<std::move_iterator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy> *>>(
      v16,
      v5 + 8 * a2,
      v5 - 8 + 8 * v7,
      &v14);
  }
  if ( v8 >= v5 + 8 * (a2 + 1) )
    v8 = v5 + 8 * (a2 + 1);
  detail::destruct_range<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>(v5 + 8 * a2, v8);
  a1[1] += 8LL;
  return v5 + 8 * a2;
}
