/*
 * XREFs of ?reserve_region@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUConstantBufferRow@CCustomKernelEffect@@_K0@Z @ 0x18015CC10
 * Callers:
 *     ??$insert@V?$span_iterator@$$CBUKernelTap@@@details@gsl@@X@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@1@V?$basic_iterator@$$CBUConstantBufferRow@CCustomKernelEffect@@@1@V?$span_iterator@$$CBUKernelTap@@@details@gsl@@1@Z @ 0x18015CAB8 (--$insert@V-$span_iterator@$$CBUKernelTap@@@details@gsl@@X@-$vector_facade@UConstantBufferRow@CC.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18015CD04 (-ensure_extra_capacity@-$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expa.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@detail@@V?$checked_array_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@stdext@@@detail@@YAXV?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@0@0V?$checked_array_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@stdext@@@Z @ 0x18015CF94 (--$move_backward_uninitialized@V-$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@detail.c)
 *     ??$move_backward@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x180211174 (--$move_backward@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_array.c)
 */

__int64 __fastcall detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 result; // rax
  __int128 v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+30h] [rbp-50h]
  __int128 v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h]
  char v18[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v20; // [rsp+C8h] [rbp+48h] BYREF

  detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v6 = *a1;
  v7 = a1[1];
  v8 = (v7 - *a1) >> 4;
  v9 = v8 - a2;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, *a1 + 16 * v8, a3);
  v14 = v16;
  v15 = v17;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v14, a3);
  v19 = v7;
  v16 = v14;
  v10 = v8 - a2;
  v17 = v15;
  if ( a3 < v8 - a2 )
    v10 = a3;
  v20 = v7 - 16 * v10;
  detail::move_backward_uninitialized<detail::basic_iterator<CCustomKernelEffect::ConstantBufferRow>,stdext::checked_array_iterator<CCustomKernelEffect::ConstantBufferRow *>>(
    &v20,
    &v19,
    &v16);
  v11 = 2 * a2;
  if ( v9 > a3 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, v6, v8);
    v14 = v16;
    v15 = v17;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v14, v8);
    v12 = v6 + 8 * v11;
    v16 = v14;
    v17 = v15;
    std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
      v18,
      v12,
      v6 + 16 * (v8 - a3),
      &v16);
  }
  else
  {
    v12 = v6 + 8 * v11;
  }
  result = v12;
  a1[1] += 16 * a3;
  return result;
}
