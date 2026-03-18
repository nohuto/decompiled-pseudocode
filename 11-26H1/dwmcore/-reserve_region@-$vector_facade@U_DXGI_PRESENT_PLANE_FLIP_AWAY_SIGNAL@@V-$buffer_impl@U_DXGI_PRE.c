/*
 * XREFs of ?reserve_region@?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAU_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@_K0@Z @ 0x180205B84
 * Callers:
 *     ??0?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@_K@Z @ 0x180205AFC (--0-$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V-$buffer_impl@U_DXGI_PRESENT_PLANE_FL.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 *     ?ensure_extra_capacity@?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180205CF0 (-ensure_extra_capacity@-$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_exp.c)
 *     ??$move_backward@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x180211174 (--$move_backward@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_array.c)
 */

__int64 __fastcall detail::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 *v5; // r12
  __int64 v6; // r15
  _OWORD *v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rax
  _OWORD *v11; // r12
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 result; // rax
  __int128 v15; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  __int128 v17; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h]
  char v19[32]; // [rsp+60h] [rbp-20h] BYREF

  v5 = a1;
  detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v6 = *v5;
  v7 = (_OWORD *)v5[1];
  v8 = ((__int64)v7 - *v5) >> 4;
  v9 = v8 - a2;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v17, *v5 + 16 * v8, a3);
  v15 = v17;
  v16 = v18;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v15, a3);
  v10 = v8 - a2;
  if ( a3 < v8 - a2 )
    v10 = a3;
  v17 = v15;
  v18 = v16;
  if ( v7 != &v7[-v10] )
  {
    v11 = &v7[-v10];
    do
    {
      --v7;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v17);
      *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v17) = *v7;
    }
    while ( v7 != v11 );
    v5 = a1;
  }
  v12 = 2 * a2;
  if ( v9 <= a3 )
  {
    v13 = v6 + 8 * v12;
  }
  else
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v17, v6, v8);
    v15 = v17;
    v16 = v18;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v15, v8);
    v13 = v6 + 8 * v12;
    v17 = v15;
    v18 = v16;
    std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
      v19,
      v13,
      v6 + 16 * (v8 - a3),
      &v17);
  }
  result = v13;
  v5[1] += 16 * a3;
  return result;
}
