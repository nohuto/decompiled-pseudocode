/*
 * XREFs of ??$_Emplace_one_at_back@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAAEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@$$QEAU21@@Z @ 0x180091DB8
 * Callers:
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x1800906F0 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x18000A724 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x1801E58E4 (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_one_at_back<std::pair<CVisual const *,CVisualTreePath const>>(
        detail::liberal_expansion_policy *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  detail::liberal_expansion_policy *v3; // r13
  _OWORD *v4; // rsi
  __int128 *v5; // r15
  __int128 *v6; // r14
  unsigned __int64 v7; // rdi
  _OWORD *v8; // r12
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 result; // rax
  _OWORD *v15; // r13
  unsigned __int64 v16; // r13
  LPVOID v17; // r12
  void *v18; // rdi
  __int64 v19; // rbx
  void *v20; // rax
  _OWORD *v21; // rcx
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h]
  __int128 v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+60h] [rbp-10h]
  unsigned __int64 v27; // [rsp+C0h] [rbp+50h]
  unsigned __int64 v28; // [rsp+C0h] [rbp+50h]
  _QWORD *v29; // [rsp+C8h] [rbp+58h]

  v2 = (_QWORD *)*((_QWORD *)a1 + 1);
  v3 = a1;
  v29 = v2;
  if ( v2 == *((_QWORD **)a1 + 2) )
    return std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
             a1,
             v2,
             a2);
  v4 = v2 + 4;
  *v2 = *a2;
  v2[3] = v2 + 8;
  v2[1] = v2 + 4;
  v2[2] = v2 + 4;
  v5 = (__int128 *)a2[2];
  v6 = (__int128 *)a2[1];
  v7 = v5 - v6;
  v27 = v7;
  if ( v7 > 2 )
  {
    v16 = detail::liberal_expansion_policy::expand(a1, 2uLL, v7);
    v17 = operator new[](saturated_mul(v16, 0x10uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, (__int64)v17, 0LL);
    v18 = (void *)v2[1];
    v19 = v2[2];
    v22 = v24;
    v23 = v25;
    v20 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v22);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v18, v19, v20);
    v2 = v29;
    v21 = (_OWORD *)v29[1];
    v29[1] = v17;
    if ( v21 == v4 )
      v21 = 0LL;
    operator delete(v21);
    v4 = (_OWORD *)v29[1];
    v7 = v27;
    v29[2] = v4;
    v29[3] = &v4[v16];
    v3 = a1;
  }
  v8 = (_OWORD *)v2[1];
  v28 = v4 - v8;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, (__int64)&v8[v28], v7);
  v22 = v24;
  v23 = v25;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v22, v7);
  v9 = v28;
  v10 = v28;
  if ( v7 < v28 )
    v10 = v7;
  v24 = v22;
  v25 = v23;
  if ( v4 != &v4[-v10] )
  {
    v15 = &v4[-v10];
    do
    {
      --v4;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v24);
      *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v24) = *v4;
    }
    while ( v4 != v15 );
    v3 = a1;
    v9 = v28;
  }
  if ( v9 > v7 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, (__int64)v8, v9);
    v22 = v24;
    v23 = v25;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v22, v11);
    v24 = v22;
    v25 = v23;
    v12 = std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v24);
    memmove_0((void *)(v12 - (16 * v28 - 16 * v7)), v8, 16 * v28 - 16 * v7);
    v2 = v29;
  }
  v2[2] += 16 * v7;
  while ( v6 != v5 )
  {
    v13 = *v6++;
    *v8++ = v13;
  }
  result = *((_QWORD *)v3 + 1);
  *((_QWORD *)v3 + 1) = result + 64;
  return result;
}
