/*
 * XREFs of ?push_back@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAUVisualTreePathUnit@CVisualTreePath@@@Z @ 0x18009204C
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18002A8C0 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x1800925E0 (-UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
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

_OWORD *__fastcall detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::push_back(
        __int64 *a1,
        _OWORD *a2)
{
  _OWORD *v2; // rbx
  __int64 v3; // rsi
  unsigned __int64 v4; // r15
  __int64 *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _OWORD *result; // rax
  _OWORD *v12; // r12
  unsigned __int64 v13; // r14
  LPVOID v14; // rsi
  __int64 v15; // rbx
  void *v16; // rdi
  void *v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // r14
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+30h] [rbp-30h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]

  v2 = (_OWORD *)a1[1];
  v3 = *a1;
  v4 = ((__int64)v2 - *a1) >> 4;
  v5 = a1;
  if ( !((a1[2] - (__int64)v2) >> 4) )
  {
    if ( v4 + 1 < v4 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1800922CCLL);
    }
    v13 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)a1, (a1[2] - v3) >> 4, v4 + 1);
    v14 = operator new[](saturated_mul(v13, 0x10uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v22, (__int64)v14, v4);
    v15 = v5[1];
    v16 = (void *)*v5;
    v20 = v22;
    v21 = v23;
    v17 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v20);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v16, v15, v17);
    v18 = (__int64 *)*v5;
    *v5 = (__int64)v14;
    if ( v18 == v5 + 3 )
      v18 = 0LL;
    operator delete(v18);
    v3 = *v5;
    v2 = (_OWORD *)(*v5 + 16 * v4);
    v19 = *v5 + 16 * v13;
    v5[1] = (__int64)v2;
    v5[2] = v19;
  }
  v6 = ((__int64)v2 - v3) >> 4;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v22, 16 * v6 + v3, 1LL);
  v20 = v22;
  v21 = v23;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v20, v7);
  v8 = v6 - v4;
  v22 = v20;
  if ( v6 - v4 > 1 )
    v8 = 1LL;
  v23 = v21;
  v9 = 16 * v8;
  if ( v2 != &v2[v9 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v12 = &v2[v9 / 0xFFFFFFFFFFFFFFF0uLL];
    do
    {
      --v2;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v22);
      *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v22) = *v2;
    }
    while ( v2 != v12 );
    v5 = a1;
  }
  if ( v6 - v4 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v22, v3, v6);
    v20 = v22;
    v21 = v23;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v20, v6);
    v22 = v20;
    v23 = v21;
    v10 = std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v22);
    memmove_0((void *)(v10 - (16 * v6 - 16 * v4 - 16)), (const void *)(v3 + 16 * v4), 16 * v6 - 16 * v4 - 16);
  }
  v5[1] += 16LL;
  result = a2;
  *(_OWORD *)(v3 + 16 * v4) = *a2;
  return result;
}
