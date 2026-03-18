/*
 * XREFs of ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800BACD0
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6BA0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801254E0 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDA.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180186130 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801BD674 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyDirty@CSurfaceBrush@@AEAAXPEAVCRectanglesShape@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020EA24 (-ApplyDirty@CSurfaceBrush@@AEAAXPEAVCRectanglesShape@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
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

void __fastcall CRectanglesShape::SetSingleRect(CRectanglesShape *this, const struct D2D_RECT_F *a2)
{
  __int64 v3; // rdx
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
  _OWORD *v16; // rdi
  unsigned __int64 v17; // rsi
  LPVOID v18; // rbx
  __int64 v19; // r8
  void *v20; // rdx
  char *v21; // rcx
  __int64 v22; // rsi
  __int128 v23; // [rsp+20h] [rbp-60h]
  __int128 v24; // [rsp+30h] [rbp-50h] BYREF
  __int64 v25; // [rsp+40h] [rbp-40h]
  __int128 v26; // [rsp+50h] [rbp-30h] BYREF
  __int64 v27; // [rsp+60h] [rbp-20h]
  void *v29; // [rsp+C0h] [rbp+40h] BYREF

  v3 = *((_QWORD *)this + 2);
  v4 = this;
  v5 = (*((_QWORD *)this + 3) - v3) >> 4;
  if ( v5 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v26, v3, v5);
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
  v23 = (__int128)*a2;
  if ( !((__int64)(*((_QWORD *)v4 + 4) - *((_QWORD *)v4 + 3)) >> 4) )
  {
    if ( v9 + 1 >= v9 )
    {
      v17 = detail::liberal_expansion_policy::expand(v7, (*((_QWORD *)v4 + 4) - v8) >> 4, v9 + 1);
      v18 = operator new[](saturated_mul(v17, 0x10uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v26, (__int64)v18, v9);
      v19 = *((_QWORD *)v4 + 3);
      v20 = (void *)*((_QWORD *)v4 + 2);
      v24 = v26;
      v25 = v27;
      std::uninitialized_move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
        (__int64)&v26,
        v20,
        v19,
        &v24);
      v21 = (char *)*((_QWORD *)v4 + 2);
      v29 = 0LL;
      *((_QWORD *)v4 + 2) = v18;
      if ( v21 == (char *)v4 + 40 )
        v21 = 0LL;
      operator delete(v21);
      v22 = *((_QWORD *)v4 + 2) + 16 * v17;
      *((_QWORD *)v4 + 3) = *((_QWORD *)v4 + 2) + 16 * v9;
      *((_QWORD *)v4 + 4) = v22;
      std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>(&v29);
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
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v26, v10 + 16 * v12, 1LL);
  v24 = v26;
  v25 = v27;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v24, v13);
  v14 = v12 - v9;
  if ( v12 - v9 > 1 )
    v14 = 1LL;
  v26 = v24;
  v15 = 16 * v14;
  v27 = v25;
  if ( v11 != &v11[v15 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v16 = &v11[v15 / 0xFFFFFFFFFFFFFFF0uLL];
    do
    {
      --v11;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v26);
      *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v26) = *v11;
    }
    while ( v11 != v16 );
    v4 = this;
  }
  if ( v12 - v9 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v26, v10, v12);
    v24 = v26;
    v25 = v27;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v24, v12);
    v26 = v24;
    v27 = v25;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v26, -((__int64)(16 * v12 - 16 * v9 - 16) >> 4));
    memmove_0(
      (void *)(v24 + 16 * v25 - (16 * v12 - 16 * v9 - 16)),
      (const void *)(v10 + 16 * v9),
      16 * v12 - 16 * v9 - 16);
  }
  *((_QWORD *)v4 + 3) += 16LL;
  *(_OWORD *)(v10 + 16 * v9) = v23;
}
