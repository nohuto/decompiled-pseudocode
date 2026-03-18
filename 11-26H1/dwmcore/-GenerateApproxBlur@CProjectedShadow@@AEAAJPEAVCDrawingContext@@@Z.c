/*
 * XREFs of ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180198140
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18019805C (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180130610 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801988A4 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV-$TMilR.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x1801DA024 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TMi.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x1801DC6E0 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x18026267C (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z.c)
 *     ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z @ 0x1802627F8 (-CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@CAJPEAVCDrawingContext@@MPEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180262888 (-GenerateApproxBlurIntermediate@CProjectedShadow@@CAJPEAVCDrawingContext@@MPEAPEAVIBitmapResourc.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x1802629F8 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TM.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadow::GenerateApproxBlur(CProjectedShadow *this, struct CDrawingContext *a2)
{
  int v2; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int ApproxBlurIntermediate; // eax
  CResource *v8; // rcx
  struct CBrush *v9; // rbp
  struct CBrush *v10; // rsi
  float v11; // xmm1_4
  float v12; // xmm2_4
  __int64 v13; // rdx
  int v14; // eax
  struct CBrush *v15; // r8
  int v16; // edx
  int NineGridBrush; // eax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  struct CBrush *v21; // r8
  int v22; // edx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rbx
  int CrossFadeGraph; // eax
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  struct CBrush *v32; // r8
  int v33; // edx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  CResource *v38; // rcx
  __int64 v39; // r8
  int v40; // edx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  float BlurForBoundary; // xmm0_4
  __int64 v45; // rdx
  __int64 v46; // rdx
  int v47; // eax
  CResource *v48; // rcx
  __int64 v49; // r8
  int v50; // edx
  int v51; // eax
  int v52; // eax
  int v53; // edx
  struct CSurfaceBrush *v54; // r8
  int SurfaceBrush; // eax
  int v56; // eax
  char v58; // [rsp+70h] [rbp+8h] BYREF
  int v59; // [rsp+80h] [rbp+18h] BYREF
  float v60; // [rsp+88h] [rbp+20h] BYREF

  v2 = *((_DWORD *)this + 63);
  v5 = 0;
  if ( v2 == 5 )
  {
    if ( !CProjectedShadow::s_cp2xBlurAsset )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurAsset);
      ApproxBlurIntermediate = CProjectedShadow::GenerateApproxBlurIntermediate(
                                 a2,
                                 v6,
                                 &CProjectedShadow::s_cp2xBlurAsset,
                                 &CProjectedShadow::s_rc2xBlur);
      v5 = ApproxBlurIntermediate;
      if ( ApproxBlurIntermediate < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ApproxBlurIntermediate, 0x346u, 0LL);
      }
      else
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v8 = CProjectedShadow::s_cp2xBlurSurface;
        CProjectedShadow::s_cp2xBlurSurface = 0LL;
        if ( v8 )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v8);
      }
    }
    return v5;
  }
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0.0;
  v12 = 0.0;
  switch ( v2 )
  {
    case 2:
      if ( !CProjectedShadow::s_cpHalfBlurAsset )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cpHalfBlurAsset);
        v14 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v13,
                &CProjectedShadow::s_cpHalfBlurAsset,
                &CProjectedShadow::s_rcHalfBlur);
        v5 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x35Au, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurNineGrid);
      }
      v15 = CProjectedShadow::s_cpHalfBlurNineGrid;
      if ( !CProjectedShadow::s_cpHalfBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurNineGrid);
        NineGridBrush = CProjectedShadow::GenerateNineGridBrush(
                          (_DWORD)this,
                          v16,
                          CProjectedShadow::s_cpHalfBlurAsset,
                          (unsigned int)&CProjectedShadow::s_rcHalfBlur,
                          (__int64)&CProjectedShadow::s_cpHalfBlurNineGrid);
        v5 = NineGridBrush;
        if ( NineGridBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, NineGridBrush, 0x363u, 0LL);
          return v5;
        }
        v15 = CProjectedShadow::s_cpHalfBlurNineGrid;
      }
      v18 = CProjectedShadow::AdjustNineGridBrush(this, a2, v15, &CProjectedShadow::s_rcHalfBlur);
      v5 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x368u, 0LL);
        return v5;
      }
      if ( !CProjectedShadow::s_cp1xBlurAsset )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp1xBlurAsset);
        v20 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v19,
                &CProjectedShadow::s_cp1xBlurAsset,
                &CProjectedShadow::s_rc1xBlur);
        v5 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x36Fu, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
      }
      v21 = CProjectedShadow::s_cp1xBlurNineGrid;
      if ( !CProjectedShadow::s_cp1xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
        v23 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v22,
                CProjectedShadow::s_cp1xBlurAsset,
                (unsigned int)&CProjectedShadow::s_rc1xBlur,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        v5 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x378u, 0LL);
          return v5;
        }
        v21 = CProjectedShadow::s_cp1xBlurNineGrid;
      }
      v24 = CProjectedShadow::AdjustNineGridBrush(this, a2, v21, &CProjectedShadow::s_rc1xBlur);
      v5 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x37Du, 0LL);
        return v5;
      }
      v12 = *((float *)this + 96);
      v9 = CProjectedShadow::s_cpHalfBlurNineGrid;
      v11 = v12 * 0.5;
      v10 = CProjectedShadow::s_cp1xBlurNineGrid;
      goto LABEL_27;
    case 3:
      if ( !CProjectedShadow::s_cp1xBlurAsset )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp1xBlurAsset);
        v31 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v30,
                &CProjectedShadow::s_cp1xBlurAsset,
                &CProjectedShadow::s_rc1xBlur);
        v5 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0x38Cu, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
      }
      v32 = CProjectedShadow::s_cp1xBlurNineGrid;
      if ( !CProjectedShadow::s_cp1xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
        v34 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v33,
                CProjectedShadow::s_cp1xBlurAsset,
                (unsigned int)&CProjectedShadow::s_rc1xBlur,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        v5 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0x395u, 0LL);
          return v5;
        }
        v32 = CProjectedShadow::s_cp1xBlurNineGrid;
      }
      v35 = CProjectedShadow::AdjustNineGridBrush(this, a2, v32, &CProjectedShadow::s_rc1xBlur);
      v5 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x39Au, 0LL);
        return v5;
      }
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurAsset);
        v37 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v36,
                &CProjectedShadow::s_cp2xBlurAsset,
                &CProjectedShadow::s_rc2xBlur);
        v5 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v37, 0x3A1u, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v38 = CProjectedShadow::s_cp2xBlurSurface;
        CProjectedShadow::s_cp2xBlurSurface = 0LL;
        if ( v38 )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v38);
      }
      v39 = CProjectedShadow::s_cp2xBlurNineGrid;
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v41 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v40,
                CProjectedShadow::s_cp2xBlurAsset,
                (unsigned int)&CProjectedShadow::s_rc2xBlur,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        v5 = v41;
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v41, 0x3ABu, 0LL);
          return v5;
        }
        v39 = CProjectedShadow::s_cp2xBlurNineGrid;
      }
      v42 = CProjectedShadow::AdjustNineGridBrush(this, a2, v39, &CProjectedShadow::s_rc2xBlur);
      v5 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x3B0u, 0LL);
        return v5;
      }
      v9 = CProjectedShadow::s_cp1xBlurNineGrid;
      v10 = (struct CBrush *)CProjectedShadow::s_cp2xBlurNineGrid;
      BlurForBoundary = CProjectedShadow::GetBlurForBoundary(this, 1LL);
      v45 = 2LL;
      break;
    case 4:
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurAsset);
        v47 = CProjectedShadow::GenerateApproxBlurIntermediate(
                a2,
                v46,
                &CProjectedShadow::s_cp2xBlurAsset,
                &CProjectedShadow::s_rc2xBlur);
        v5 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v47, 0x3BFu, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v48 = CProjectedShadow::s_cp2xBlurSurface;
        CProjectedShadow::s_cp2xBlurSurface = 0LL;
        if ( v48 )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v48);
      }
      v49 = CProjectedShadow::s_cp2xBlurNineGrid;
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
        v51 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v50,
                CProjectedShadow::s_cp2xBlurAsset,
                (unsigned int)&CProjectedShadow::s_rc2xBlur,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        v5 = v51;
        if ( v51 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0x3C9u, 0LL);
          return v5;
        }
        v49 = CProjectedShadow::s_cp2xBlurNineGrid;
      }
      v52 = CProjectedShadow::AdjustNineGridBrush(this, a2, v49, &CProjectedShadow::s_rc2xBlur);
      v5 = v52;
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, 0x3CEu, 0LL);
        return v5;
      }
      v54 = CProjectedShadow::s_cp2xBlurSurface;
      if ( !CProjectedShadow::s_cp2xBlurSurface )
      {
        CProjectedShadow::s_cp2xBlurSurface = 0LL;
        SurfaceBrush = CProjectedShadow::GenerateSurfaceBrush(
                         (_DWORD)this,
                         v53,
                         CProjectedShadow::s_cp2xBlurAsset,
                         (unsigned int)&CProjectedShadow::s_rc2xBlur,
                         (struct IBitmapRealization *)&CProjectedShadow::s_cp2xBlurSurface);
        v5 = SurfaceBrush;
        if ( SurfaceBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SurfaceBrush, 0x3D5u, 0LL);
          return v5;
        }
        v54 = CProjectedShadow::s_cp2xBlurSurface;
      }
      v56 = CProjectedShadow::AdjustSurfaceBrush(this, a2, v54);
      v5 = v56;
      if ( v56 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v56, 0x3D9u, 0LL);
        return v5;
      }
      v9 = (struct CBrush *)CProjectedShadow::s_cp2xBlurNineGrid;
      v10 = CProjectedShadow::s_cp2xBlurSurface;
      BlurForBoundary = CProjectedShadow::GetBlurForBoundary(this, 2LL);
      v45 = 3LL;
      break;
    default:
      goto LABEL_27;
  }
  v11 = BlurForBoundary;
  v12 = CProjectedShadow::GetBlurForBoundary(v43, v45);
LABEL_27:
  v60 = (float)(*((float *)this + 24) - v11) / (float)(v12 - v11);
  if ( *((struct CBrush **)this + 39) != v9 || *((struct CBrush **)this + 40) != v10 )
  {
    v25 = *((_QWORD *)this + 46);
    if ( v25 )
    {
      *(_DWORD *)(v25 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v25 + 16, 0x18u);
      *(_BYTE *)(v25 + 200) = 1;
      wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset((_QWORD *)this + 46);
    }
  }
  if ( !*((_QWORD *)this + 46) )
  {
    CrossFadeGraph = CProjectedShadow::CreateCrossFadeGraph(this, v9, v10);
    v5 = CrossFadeGraph;
    if ( CrossFadeGraph < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CrossFadeGraph, 0x3F1u, 0LL);
      return v5;
    }
    *((_QWORD *)this + 39) = v9;
    *((_QWORD *)this + 40) = v10;
  }
  v27 = *((_QWORD *)this + 47);
  v58 = 0;
  v59 = 0;
  v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *, char *, int *))(*(_QWORD *)v27 + 32LL))(
          v27,
          0LL,
          69LL,
          (char *)this + 328,
          &v58,
          &v59);
  v5 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x3FBu, 0LL);
  }
  else
  {
    v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, float *, char *, int *))(**((_QWORD **)this + 47) + 32LL))(
            *((_QWORD *)this + 47),
            1LL,
            18LL,
            &v60,
            &v58,
            &v59);
    v5 = v29;
    if ( v29 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x3FCu, 0LL);
  }
  return v5;
}
