/*
 * XREFs of ?reserve_region@?$vector_facade@GV?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAG_K0@Z @ 0x18000A288
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000A460 (-ensure_extra_capacity@-$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@G@detail@@V?$checked_array_iterator@PEAG@stdext@@@detail@@YAXV?$basic_iterator@G@0@0V?$checked_array_iterator@PEAG@stdext@@@Z @ 0x18000A588 (--$move_backward_uninitialized@V-$basic_iterator@G@detail@@V-$checked_array_iterator@PEAG@stdext.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$move_backward@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x180259E78 (--$move_backward@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$.c)
 */

__int64 __fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 result; // rax
  __int128 v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+30h] [rbp-50h]
  __int128 v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h]
  char v18[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+48h] BYREF

  detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a3);
  v6 = *a1;
  v7 = a1[1];
  v8 = (v7 - *a1) >> 1;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, *a1 + 2 * v8, a3, v9);
  v14 = v16;
  v15 = v17;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v14, a3);
  v19 = v7;
  v16 = v14;
  v10 = v8 - a2;
  v17 = v15;
  if ( a3 < v8 - a2 )
    v10 = a3;
  v20 = v7 - 2 * v10;
  detail::move_backward_uninitialized<detail::basic_iterator<unsigned short>,stdext::checked_array_iterator<unsigned short *>>(
    &v20,
    &v19,
    &v16);
  if ( v8 - a2 > a3 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, v6, v8, v11);
    v14 = v16;
    v15 = v17;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v14, v8);
    v12 = v6 + 2 * a2;
    v16 = v14;
    v17 = v15;
    std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
      v18,
      v12,
      v6 + 2 * (v8 - a3),
      &v16);
  }
  else
  {
    v12 = v6 + 2 * a2;
  }
  result = v12;
  a1[1] += 2 * a3;
  return result;
}
