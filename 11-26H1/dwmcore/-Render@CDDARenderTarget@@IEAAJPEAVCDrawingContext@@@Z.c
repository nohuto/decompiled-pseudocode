/*
 * XREFs of ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C
 * Callers:
 *     ?RenderAndPresent@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180056090 (-RenderAndPresent@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180033150 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?RestoreDDAVisuals@CComposition@@QEBAXXZ @ 0x1800574F0 (-RestoreDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x180057518 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?HideDDAVisuals@CComposition@@QEBAXXZ @ 0x18005753C (-HideDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180057560 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057844 (-NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x18008C734 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800F26A0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180158178 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801945F8 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?Hide@CExcludeVisualReference@@QEAAJXZ @ 0x180194FAC (-Hide@CExcludeVisualReference@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18021D20C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?erase@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@@Z @ 0x18022B8E4 (-erase@-$vector@UCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CComposition@@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDARenderTarget::Render(CDDARenderTarget *this, struct CDrawingContext *a2)
{
  char v3; // bl
  unsigned int v5; // esi
  char v6; // bp
  __int64 v7; // rax
  __int64 v8; // r12
  char v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r9d
  int v13; // eax
  __int64 v14; // rax
  bool v15; // zf
  __int128 *v16; // rbx
  __int128 *v17; // r15
  int v18; // eax
  char v19; // al
  CComposition *v20; // rcx
  struct CVisualTree *v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  CExcludeVisualReference *v25; // rbx
  CExcludeVisualReference **v26; // r15
  int v27; // eax
  char v28; // [rsp+40h] [rbp-78h]
  char v29; // [rsp+41h] [rbp-77h]
  __int64 v30; // [rsp+48h] [rbp-70h] BYREF
  __int128 v31; // [rsp+50h] [rbp-68h]
  __int64 v32; // [rsp+60h] [rbp-58h]

  v3 = 0;
  v5 = 0;
  v28 = 0;
  v6 = 0;
  v29 = 0;
  if ( *((_QWORD *)this + 22) && *(int *)(*((_QWORD *)this + 3) + 6256LL) <= 3 )
  {
    v7 = *((_QWORD *)this + 23);
    v6 = 1;
    v8 = *(_QWORD *)(v7 + 4048);
    if ( v8 && CComposeTop::HasNewContent(*(CComposeTop **)(v7 + 4048)) )
    {
      v9 = 1;
      CTargetDirtyBase<8>::SetFullDirty((char *)this + 504);
    }
    else
    {
      v9 = 0;
    }
    *(_BYTE *)(*((_QWORD *)this + 3) + 6458LL) = 1;
    CComposition::HideDDAVisuals(*((CComposition **)this + 3));
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(
                            (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl,
                            v10,
                            v11,
                            v12) )
    {
      v24 = *((_QWORD *)this + 3);
      v25 = *(CExcludeVisualReference **)(v24 + 6136);
      v26 = (CExcludeVisualReference **)(v24 + 6128);
      while ( v25 != *v26 )
      {
        v25 = (CExcludeVisualReference *)((char *)v25 - 32);
        if ( (int)CExcludeVisualReference::Hide(v25) < 0 )
          std::vector<CComposition::CursorVisualData>::erase(v26, &v30, v25);
      }
      v28 = 1;
    }
    CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion((char *)this + 504, *((_QWORD *)this + 23) + 112LL);
    if ( *((_DWORD *)this + 130) )
    {
      v13 = CDrawingContext::BeginFrame(
              a2,
              (*(_QWORD *)(*((_QWORD *)this + 22) + 64LL) + 16LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 22) + 64LL) != 0LL),
              (char *)this + 284,
              (char *)this + 140,
              2,
              0LL);
      v5 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xB2u, 0LL);
      }
      else
      {
        v29 = 1;
        v14 = (**((__int64 (__fastcall ***)(char *))this + 63))((char *)this + 504);
        v15 = *((_BYTE *)this + 960) == 0;
        v30 = v14;
        if ( v15 )
          CMergedRectBase<8>::Optimize((char *)this + 520);
        v16 = (__int128 *)((char *)this + 524);
        if ( this == (CDDARenderTarget *)-524LL && MEMORY[0xFFFFFFFFFFFFFFFC] )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v17 = &v16[*((unsigned int *)this + 130)];
        while ( v16 != v17 )
        {
          v22 = (struct CVisualTree *)*((_QWORD *)this + 14);
          v31 = *v16;
          v32 = 0LL;
          v23 = CDrawingContext::DrawVisualTree(a2, v22, 2, 0, 0LL);
          v5 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xBDu, 0LL);
            goto LABEL_18;
          }
          CDDARenderTarget::NotifyRenderedRect(this, v16++);
        }
        if ( v9 && (v27 = CComposeTop::FullRender(v8, a2, (char *)this + 284, (char *)this + 224), v5 = v27, v27 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xCCu, 0LL);
        }
        else
        {
          v29 = 0;
          v18 = CDrawingContext::EndFrame(a2);
          v5 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xD0u, 0LL);
          }
          else
          {
            if ( *((_BYTE *)a2 + 7983) || (v19 = 0, *((_BYTE *)a2 + 7984)) )
              v19 = 1;
            *((_BYTE *)this + 2385) = v19;
          }
        }
      }
    }
LABEL_18:
    v3 = v28;
  }
  CMergedRectBase<8>::Reset((char *)this + 520);
  *((_WORD *)this + 1188) = 0;
  if ( v29 )
    CDrawingContext::EndFrame(a2);
  if ( v3 )
    CComposition::RestoreCursors(g_pComposition);
  if ( v6 )
  {
    CComposition::RestoreDDAVisuals(v20);
    *((_BYTE *)g_pComposition + 6458) = 0;
  }
  return v5;
}
