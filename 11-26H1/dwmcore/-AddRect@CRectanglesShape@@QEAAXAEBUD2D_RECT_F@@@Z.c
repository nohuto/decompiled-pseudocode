/*
 * XREFs of ?AddRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1801888BC
 * Callers:
 *     ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1801883C0 (-IntersectWithRect@CRectanglesShape@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@@PEAV4@@Z @ 0x1801886DC (-TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@.c)
 *     ?SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1801FE400 (-SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UMil3DRec.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@@std@@@std@@QEAA@XZ @ 0x18002D63C (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U-$d.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x18002D6AC (--$uninitialized_move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

void __fastcall CRectanglesShape::AddRect(CRectanglesShape *this, const __m128i *a2)
{
  __int64 v2; // r8
  CRectanglesShape *v3; // r14
  __m128i v4; // xmm7
  unsigned __int64 v5; // rsi
  __int64 v6; // r15
  _OWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // xmm6_8
  _OWORD *v13; // r14
  unsigned __int64 v14; // rdi
  LPVOID v15; // rbx
  __int64 v16; // r8
  void *v17; // rdx
  char *v18; // rcx
  __int64 v19; // rdi
  __int128 v20; // [rsp+20h] [rbp-60h] BYREF
  __int64 v21; // [rsp+30h] [rbp-50h]
  __int128 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+50h] [rbp-30h]
  void *v25; // [rsp+C8h] [rbp+48h] BYREF

  v2 = 1LL;
  v3 = this;
  v4 = _mm_loadu_si128(a2);
  v5 = (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 4;
  if ( !((__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 4) )
  {
    if ( v5 + 1 >= v5 )
    {
      v14 = detail::liberal_expansion_policy::expand(
              this,
              (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 2)) >> 4,
              v5 + 1);
      v15 = operator new[](saturated_mul(v14, 0x10uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v22, (__int64)v15, v5);
      v16 = *((_QWORD *)v3 + 3);
      v17 = (void *)*((_QWORD *)v3 + 2);
      v20 = v22;
      v21 = v23;
      std::uninitialized_move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
        (__int64)&v22,
        v17,
        v16,
        &v20);
      v18 = (char *)*((_QWORD *)v3 + 2);
      *((_QWORD *)v3 + 2) = v15;
      v25 = 0LL;
      if ( v18 == (char *)v3 + 40 )
        v18 = 0LL;
      operator delete(v18);
      v19 = *((_QWORD *)v3 + 2) + 16 * v14;
      *((_QWORD *)v3 + 3) = *((_QWORD *)v3 + 2) + 16 * v5;
      *((_QWORD *)v3 + 4) = v19;
      std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>(&v25);
      v2 = 1LL;
    }
    else
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
  }
  v6 = *((_QWORD *)v3 + 2);
  v7 = (_OWORD *)*((_QWORD *)v3 + 3);
  v8 = ((__int64)v7 - v6) >> 4;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v22, v6 + 16 * v8, v2);
  v20 = v22;
  v21 = v23;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v20, v9);
  v10 = v8 - v5;
  v22 = v20;
  if ( v8 - v5 > 1 )
    v10 = 1LL;
  v23 = v21;
  v11 = 16 * v10;
  if ( v7 != &v7[v11 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v13 = &v7[v11 / 0xFFFFFFFFFFFFFFF0uLL];
    do
    {
      --v7;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v22);
      *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v22) = *v7;
    }
    while ( v7 != v13 );
    v3 = this;
  }
  if ( v8 - v5 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v22, v6, v8);
    v20 = v22;
    v21 = v23;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v20, v8);
    v12 = v20;
    v23 = v21;
    v22 = v20;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v22, -((__int64)(16 * v8 - 16 * v5 - 16) >> 4));
    memmove_0((void *)(v12 + 16 * v21 - (16 * v8 - 16 * v5 - 16)), (const void *)(v6 + 16 * v5), 16 * v8 - 16 * v5 - 16);
  }
  *((_QWORD *)v3 + 3) += 16LL;
  *(__m128i *)(v6 + 16 * v5) = v4;
}
