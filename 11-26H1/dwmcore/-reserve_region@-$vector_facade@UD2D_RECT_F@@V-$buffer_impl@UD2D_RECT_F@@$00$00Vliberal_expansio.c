/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x1801431C0
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180141F30 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x18000A724 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18014334C (-ensure_extra_capacity@-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detai.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 *v5; // r15
  __int64 v6; // r12
  _OWORD *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 result; // rax
  _OWORD *v11; // r15
  __int64 v12; // r8
  __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+B0h] [rbp+50h]

  v5 = a1;
  detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a3);
  v6 = *v5;
  v7 = (_OWORD *)v5[1];
  v19 = ((__int64)v7 - *v5) >> 4;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, *v5 + 16 * v19, a3);
  v14 = v16;
  v15 = v17;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v14, a3);
  v8 = v19 - a2;
  if ( a3 < v19 - a2 )
    v8 = a3;
  v16 = v14;
  v17 = v15;
  if ( v7 != &v7[-v8] )
  {
    v11 = &v7[-v8];
    do
    {
      --v7;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v16);
      *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v16) = *v7;
    }
    while ( v7 != v11 );
    v5 = a1;
  }
  if ( v19 - a2 > a3 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, v6, v19);
    v14 = v16;
    v15 = v17;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v14, v12);
    v9 = 16 * a2;
    v16 = v14;
    v17 = v15;
    v13 = std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v16);
    memmove_0((void *)(v13 - (16 * v19 - 16 * a3 - v9)), (const void *)(v9 + v6), 16 * v19 - 16 * a3 - v9);
  }
  else
  {
    v9 = 16 * a2;
  }
  result = v9 + v6;
  v5[1] += 16 * a3;
  return result;
}
