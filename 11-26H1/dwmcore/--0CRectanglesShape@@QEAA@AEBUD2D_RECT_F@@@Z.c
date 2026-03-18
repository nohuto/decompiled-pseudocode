/*
 * XREFs of ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x1800BA820
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitmapResource@@@Z @ 0x180201CBC (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitma.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@M@Z @ 0x180203840 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_180203840.c)
 *     ?GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@@@Z @ 0x1802074FC (-GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@.c)
 *     ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1802661C0 (-HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180268C7C (-RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
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
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CRectanglesShape *__fastcall CRectanglesShape::CRectanglesShape(CRectanglesShape *this, const struct D2D_RECT_F *a2)
{
  char *v2; // r15
  CRectanglesShape *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r8
  detail::liberal_expansion_policy *v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  _OWORD *v11; // rbx
  __int64 v12; // rsi
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rax
  CRectanglesShape *result; // rax
  _OWORD *v17; // rdi
  unsigned __int64 v18; // rsi
  LPVOID v19; // rbx
  __int64 v20; // r8
  void *v21; // rdx
  char *v22; // rcx
  __int64 v23; // rsi
  __int128 v24; // [rsp+20h] [rbp-58h]
  __int128 v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-38h]
  __int128 v27; // [rsp+50h] [rbp-28h] BYREF
  __int64 v28; // [rsp+60h] [rbp-18h]
  void *v30; // [rsp+C0h] [rbp+48h] BYREF

  v2 = (char *)this + 40;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CRectanglesShape::`vftable';
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_QWORD *)this + 4) = (char *)this + 56;
  v4 = this;
  *((_QWORD *)this + 3) = (char *)this + 40;
  *((_QWORD *)this + 7) = 0LL;
  v5 = (__int64)(*((_QWORD *)this + 3) - ((_QWORD)this + 40)) >> 4;
  if ( v5 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v27, (__int64)this + 40, v5);
    *((_QWORD *)v4 + 3) += -16 * v6;
  }
  v7 = (detail::liberal_expansion_policy *)*((_QWORD *)v4 + 7);
  if ( v7 )
  {
    (*(void (__fastcall **)(detail::liberal_expansion_policy *))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)v4 + 7) = 0LL;
  }
  v8 = *((_QWORD *)v4 + 2);
  v9 = (*((_QWORD *)v4 + 3) - v8) >> 4;
  v24 = (__int128)*a2;
  if ( !((__int64)(*((_QWORD *)v4 + 4) - *((_QWORD *)v4 + 3)) >> 4) )
  {
    if ( v9 + 1 >= v9 )
    {
      v18 = detail::liberal_expansion_policy::expand(v7, (*((_QWORD *)v4 + 4) - v8) >> 4, v9 + 1);
      v19 = operator new[](saturated_mul(v18, 0x10uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v27, (__int64)v19, v9);
      v20 = *((_QWORD *)v4 + 3);
      v21 = (void *)*((_QWORD *)v4 + 2);
      v25 = v27;
      v26 = v28;
      std::uninitialized_move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
        (__int64)&v27,
        v21,
        v20,
        &v25);
      v22 = (char *)*((_QWORD *)v4 + 2);
      v30 = 0LL;
      *((_QWORD *)v4 + 2) = v19;
      if ( v22 == v2 )
        v22 = 0LL;
      operator delete(v22);
      v23 = *((_QWORD *)v4 + 2) + 16 * v18;
      *((_QWORD *)v4 + 3) = *((_QWORD *)v4 + 2) + 16 * v9;
      *((_QWORD *)v4 + 4) = v23;
      std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>(&v30);
    }
    else
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
  }
  v10 = *((_QWORD *)v4 + 2);
  v11 = (_OWORD *)*((_QWORD *)v4 + 3);
  v12 = ((__int64)v11 - v10) >> 4;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v27, v10 + 16 * v12, 1LL);
  v25 = v27;
  v26 = v28;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v25, v13);
  v14 = v12 - v9;
  if ( v12 - v9 > 1 )
    v14 = 1LL;
  v27 = v25;
  v15 = 16 * v14;
  v28 = v26;
  if ( v11 != &v11[v15 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v17 = &v11[v15 / 0xFFFFFFFFFFFFFFF0uLL];
    do
    {
      --v11;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v27);
      *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v27) = *v11;
    }
    while ( v11 != v17 );
    v4 = this;
  }
  if ( v12 - v9 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v27, v10, v12);
    v25 = v27;
    v26 = v28;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v25, v12);
    v27 = v25;
    v28 = v26;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v27, -((__int64)(16 * v12 - 16 * v9 - 16) >> 4));
    memmove_0(
      (void *)(v25 + 16 * v26 - (16 * v12 - 16 * v9 - 16)),
      (const void *)(v10 + 16 * v9),
      16 * v12 - 16 * v9 - 16);
  }
  *((_QWORD *)v4 + 3) += 16LL;
  result = v4;
  *(_OWORD *)(v10 + 16 * v9) = v24;
  return result;
}
