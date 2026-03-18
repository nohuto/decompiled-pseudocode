/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x1800188D8
 * Callers:
 *     ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x1800185FC (-RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?consume@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEAAX_J@Z @ 0x1800182D0 (-consume@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEAAX_J@Z.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x180018330 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@PEAVCBlurredBackdropCache@@@detail@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@detail@@YAXV?$basic_iterator@PEAVCBlurredBackdropCache@@@0@0V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@Z @ 0x180018410 (--$move_backward_uninitialized@V-$basic_iterator@PEAVCBlurredBackdropCache@@@detail@@V-$checked_.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEAAX_K@Z @ 0x18001847C (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEAAX_K@Z.c)
 *     ?end@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@XZ @ 0x18001879C (-end@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCache.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x18016C5C0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h]
  __int128 v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h]
  char v16[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+40h] BYREF

  v18 = a3;
  detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::ensure_extra_capacity(a1, 1uLL);
  v5 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size(a1);
  v6 = v5 - a2;
  v7 = v5;
  detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::end(a1, &v18);
  v8 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, v8 + 8 * v7, 1LL);
  v12 = v14;
  v13 = v15;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v12, 1LL);
  v9 = v6;
  v14 = v12;
  if ( v6 > 1 )
    v9 = 1LL;
  v15 = v13;
  v17 = v18 - 8 * v9;
  detail::move_backward_uninitialized<detail::basic_iterator<CBlurredBackdropCache *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
    &v17,
    &v18,
    (__int64)&v14);
  if ( v6 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, v8, v7);
    v12 = v14;
    v13 = v15;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v12, v7);
    v10 = v8 + 8 * a2;
    v14 = v12;
    v15 = v13;
    std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
      v16,
      v10,
      v8 + 8 * (v7 - 1),
      &v14);
  }
  else
  {
    v10 = v8 + 8 * a2;
  }
  detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::consume(a1, 1LL);
  return v10;
}
