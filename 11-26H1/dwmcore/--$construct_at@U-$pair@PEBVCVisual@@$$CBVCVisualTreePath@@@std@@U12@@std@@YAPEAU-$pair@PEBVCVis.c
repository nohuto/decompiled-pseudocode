/*
 * XREFs of ??$construct_at@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@U12@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@$$QEAU10@@Z @ 0x18016FB8C
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x1801E58E4 (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 *     ??$_Uninitialized_move@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1802198D4 (--$_Uninitialized_move@PEAU-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@.c)
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
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

_QWORD *__fastcall std::construct_at<std::pair<CVisual const *,CVisualTreePath const>,std::pair<CVisual const *,CVisualTreePath const>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _OWORD *v2; // rsi
  _QWORD *v3; // rbx
  __int128 *v4; // r15
  __int128 *v5; // r14
  unsigned __int64 v6; // rdi
  _OWORD *v7; // r12
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  _OWORD *v10; // rbx
  __int64 v11; // rax
  __int128 v12; // xmm0
  unsigned __int64 v14; // r13
  LPVOID v15; // r12
  void *v16; // rdi
  __int64 v17; // rbx
  void *v18; // rax
  _OWORD *v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+30h] [rbp-30h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]
  unsigned __int64 v25; // [rsp+A8h] [rbp+48h]

  v2 = a1 + 4;
  *a1 = *a2;
  v3 = a1;
  a1[1] = a1 + 4;
  a1[3] = a1 + 8;
  a1[2] = a1 + 4;
  v4 = (__int128 *)a2[2];
  v5 = (__int128 *)a2[1];
  v6 = v4 - v5;
  v25 = v6;
  if ( v6 > 2 )
  {
    v14 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)a1, 2uLL, v6);
    v15 = operator new[](saturated_mul(v14, 0x10uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v22, (__int64)v15, 0LL);
    v16 = (void *)v3[1];
    v17 = v3[2];
    v20 = v22;
    v21 = v23;
    v18 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v20);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v16, v17, v18);
    v3 = a1;
    v19 = (_OWORD *)a1[1];
    a1[1] = v15;
    if ( v19 == v2 )
      v19 = 0LL;
    operator delete(v19);
    v2 = (_OWORD *)a1[1];
    v6 = v25;
    a1[2] = v2;
    a1[3] = &v2[v14];
  }
  v7 = (_OWORD *)v3[1];
  v8 = v2 - v7;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v22, (__int64)&v7[v8], v6);
  v20 = v22;
  v21 = v23;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v20, v6);
  v9 = v8;
  if ( v6 < v8 )
    v9 = v6;
  v22 = v20;
  v23 = v21;
  if ( v2 != &v2[-v9] )
  {
    v10 = &v2[-v9];
    do
    {
      --v2;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v22);
      *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v22) = *v2;
    }
    while ( v2 != v10 );
    v3 = a1;
  }
  if ( v8 > v6 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v22, (__int64)v7, v8);
    v20 = v22;
    v21 = v23;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v20, v8);
    v22 = v20;
    v23 = v21;
    v11 = std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v22);
    memmove_0((void *)(v11 - (16 * v8 - 16 * v6)), v7, 16 * v8 - 16 * v6);
    v3 = a1;
  }
  v3[2] += 16 * v6;
  while ( v5 != v4 )
  {
    v12 = *v5++;
    *v7++ = v12;
  }
  return v3;
}
