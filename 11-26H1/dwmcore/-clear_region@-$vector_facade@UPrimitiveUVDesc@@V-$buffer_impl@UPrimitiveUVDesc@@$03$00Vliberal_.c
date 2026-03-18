/*
 * XREFs of ?clear_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18016CAE0
 * Callers:
 *     ?erase@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UPrimitiveUVDesc@@@2@V?$basic_iterator@$$CBUPrimitiveUVDesc@@@2@0@Z @ 0x18016CE70 (-erase@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansi.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x180259DD8 (--$move@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@V-$checked_array_iterator@PEAUPrimitiveUVDes.c)
 */

__int64 __fastcall detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  unsigned __int64 v6; // rbx
  __int64 v8; // r9
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h]
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]

  v3 = *a1;
  v4 = a2 + a3;
  v6 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  if ( a2 + a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_5;
  }
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
    &v12,
    v3,
    0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3));
  if ( v4 != v6 )
  {
LABEL_5:
    v10 = v12;
    v11 = v13;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v10, v8);
    v12 = v10;
    v13 = v11;
    std::move<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
      &v10,
      v3 + 56 * v4,
      v3 + 56 * v6,
      &v12);
  }
  result = -56 * a3;
  a1[1] += -56 * a3;
  return result;
}
