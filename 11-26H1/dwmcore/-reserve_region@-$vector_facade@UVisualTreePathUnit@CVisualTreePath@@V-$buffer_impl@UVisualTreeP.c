/*
 * XREFs of ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180090460
 * Callers:
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x1800906F0 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ?Append@CVisualTreePath@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x180190350 (-Append@CVisualTreePath@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x18000A724 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
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

__int64 __fastcall detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  _OWORD *v3; // rsi
  __int64 v4; // r15
  __int64 v7; // r12
  __int64 v8; // rdi
  detail::liberal_expansion_policy *v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  signed __int64 v12; // rbx
  __int64 result; // rax
  _OWORD *v14; // r15
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r12
  LPVOID v18; // r15
  __int64 v19; // rbx
  char *v20; // rdi
  void *v21; // rax
  char *v22; // rdx
  void *v23; // rcx
  __int128 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+30h] [rbp-30h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  detail::liberal_expansion_policy *v28; // [rsp+A0h] [rbp+40h]

  v3 = (_OWORD *)*((_QWORD *)a1 + 1);
  v4 = a2;
  if ( (__int64)(*((_QWORD *)a1 + 2) - (_QWORD)v3) >> 4 < a3 )
  {
    v15 = ((__int64)v3 - *(_QWORD *)a1) >> 4;
    v16 = v15 + a3;
    if ( v16 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1800906E5LL);
    }
    v17 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4, v16);
    v18 = operator new[](saturated_mul(v17, 0x10uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v26, (__int64)v18, v15);
    v19 = *((_QWORD *)a1 + 1);
    v20 = *(char **)a1;
    v24 = v26;
    v25 = v27;
    v21 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v24);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v20, v19, v21);
    v22 = *(char **)a1;
    v23 = 0LL;
    *(_QWORD *)a1 = v18;
    if ( v22 != (char *)a1 + 24 )
      v23 = v22;
    operator delete(v23);
    v4 = a2;
    v3 = (_OWORD *)(*(_QWORD *)a1 + 16 * v15);
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v17;
    *((_QWORD *)a1 + 1) = v3;
  }
  v7 = *(_QWORD *)a1;
  v8 = ((__int64)v3 - *(_QWORD *)a1) >> 4;
  v28 = (detail::liberal_expansion_policy *)(v8 - v4);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v26, 16 * v8 + *(_QWORD *)a1, a3);
  v24 = v26;
  v25 = v27;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v24, a3);
  v9 = (detail::liberal_expansion_policy *)(v8 - v4);
  v10 = v8 - v4;
  if ( a3 < v8 - v4 )
    v10 = a3;
  v26 = v24;
  v27 = v25;
  if ( v3 != &v3[-v10] )
  {
    v14 = &v3[-v10];
    do
    {
      --v3;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v26);
      *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v26) = *v3;
    }
    while ( v3 != v14 );
    v4 = a2;
    v9 = v28;
  }
  if ( (unsigned __int64)v9 <= a3 )
  {
    v11 = 16 * v4;
  }
  else
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v26, v7, v8);
    v24 = v26;
    v25 = v27;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v24, v8);
    v11 = 16 * v4;
    v26 = v24;
    v27 = v25;
    v12 = 16 * v8 - 16 * a3 - v11;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v26, -(v12 >> 4));
    memmove_0((void *)(v24 + 16 * v25 - v12), (const void *)(v11 + v7), v12);
  }
  result = v11 + v7;
  *((_QWORD *)a1 + 1) += 16 * a3;
  return result;
}
