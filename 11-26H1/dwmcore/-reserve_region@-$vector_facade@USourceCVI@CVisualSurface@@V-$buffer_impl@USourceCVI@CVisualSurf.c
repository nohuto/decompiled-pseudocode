/*
 * XREFs of ?reserve_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSourceCVI@CVisualSurface@@_K0@Z @ 0x18009AF20
 * Callers:
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x18009A2A8 (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@-$vector_.c)
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@Z @ 0x18026333C (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@-$vector_f.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@USourceCVI@CVisualSurface@@@detail@@V?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@@detail@@YAXV?$basic_iterator@USourceCVI@CVisualSurface@@@0@0V?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@@Z @ 0x18009B03C (--$move_backward_uninitialized@V-$basic_iterator@USourceCVI@CVisualSurface@@@detail@@V-$checked_.c)
 *     ??$destruct_range@USourceCVI@CVisualSurface@@@detail@@YAXPEAUSourceCVI@CVisualSurface@@0@Z @ 0x18009C3D8 (--$destruct_range@USourceCVI@CVisualSurface@@@detail@@YAXPEAUSourceCVI@CVisualSurface@@0@Z.c)
 *     ?ensure_extra_capacity@?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18009C410 (-ensure_extra_capacity@-$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@.c)
 *     ??$move_backward@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@0@0V12@@Z @ 0x18026339C (--$move_backward@V-$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V-$checked_array_iterator@.c)
 */

__int64 __fastcall detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rsi
  __int128 v13; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+30h] [rbp-50h]
  __int128 v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+50h] [rbp-30h]
  char v17[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+50h] BYREF

  v19 = a3;
  detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v5 = *a1;
  v6 = a1[1];
  v7 = (v6 - *a1) >> 4;
  v8 = *a1 + 16 * v7;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, v8, 1LL);
  v13 = v15;
  v14 = v16;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v13, v9);
  v19 = v6;
  v10 = v7 - a2;
  v15 = v13;
  if ( (unsigned __int64)(v7 - a2) > 1 )
    v10 = 1LL;
  v16 = v14;
  v18 = v6 - 16 * v10;
  detail::move_backward_uninitialized<detail::basic_iterator<CVisualSurface::SourceCVI>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>(
    &v18,
    &v19,
    &v15);
  if ( (unsigned __int64)(v7 - a2) > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, v5, v7);
    v13 = v15;
    v14 = v16;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v13, v7);
    v11 = 16 * a2;
    v15 = v13;
    v16 = v14;
    std::move_backward<std::move_iterator<CVisualSurface::SourceCVI *>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>(
      v17,
      v11 + v5,
      16 * v7 + v5 - 16,
      &v15);
  }
  else
  {
    v11 = 16 * a2;
  }
  if ( v8 >= v11 + v5 + 16 )
    v8 = v11 + v5 + 16;
  detail::destruct_range<CVisualSurface::SourceCVI>(v5 + v11, v8);
  a1[1] += 16LL;
  return v5 + v11;
}
