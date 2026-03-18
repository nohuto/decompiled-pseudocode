/*
 * XREFs of ?reserve_region@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVertexXYW_ColorDW_UV2_AAFixup@@_K0@Z @ 0x18000A36C
 * Callers:
 *     ?resize@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18000A1CC (-resize@-$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V-$buffer_impl@UVertexXYW_ColorDW_UV2_AA.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801BD0D0 (-ensure_extra_capacity@-$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UVertexXYW_ColorDW_UV2_AAFixup@@@detail@@V?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@@detail@@YAXV?$basic_iterator@UVertexXYW_ColorDW_UV2_AAFixup@@@0@0V?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@@Z @ 0x1801DB9D0 (--$move_backward_uninitialized@V-$basic_iterator@UVertexXYW_ColorDW_UV2_AAFixup@@@detail@@V-$che.c)
 *     ??$move_backward@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@V?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@0@0V12@@Z @ 0x18025DCB0 (--$move_backward@V-$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@V-$checked_array_iter.c)
 */

__int64 __fastcall detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 result; // rax
  __int128 v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+30h] [rbp-50h]
  __int128 v18; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  char v20[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+48h] BYREF

  detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v6 = *a1;
  v7 = a1[1];
  v8 = (v7 - *a1) >> 6;
  v9 = v8 - a2;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v18, *a1 + (v8 << 6), a3, v10);
  v16 = v18;
  v17 = v19;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v16, a3);
  v21 = v7;
  v18 = v16;
  v11 = v8 - a2;
  v19 = v17;
  if ( a3 < v8 - a2 )
    v11 = a3;
  v22 = v7 - (v11 << 6);
  detail::move_backward_uninitialized<detail::basic_iterator<VertexXYW_ColorDW_UV2_AAFixup>,stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *>>(
    &v22,
    &v21,
    &v18);
  v13 = a2 << 6;
  if ( v9 > a3 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v18, v6, v8, v12);
    v16 = v18;
    v17 = v19;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v16, v8);
    v14 = v6 + v13;
    v18 = v16;
    v19 = v17;
    std::move_backward<std::move_iterator<VertexXYW_ColorDW_UV2_AAFixup *>,stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *>>(
      v20,
      v6 + v13,
      ((v8 - a3) << 6) + v6,
      &v18);
  }
  else
  {
    v14 = v6 + v13;
  }
  result = v14;
  a1[1] += a3 << 6;
  return result;
}
