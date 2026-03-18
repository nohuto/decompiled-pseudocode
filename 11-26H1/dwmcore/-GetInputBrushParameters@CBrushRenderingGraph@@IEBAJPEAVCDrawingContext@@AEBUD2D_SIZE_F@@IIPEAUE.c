/*
 * XREFs of ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18003DDB4
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B858 (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x18001C13C (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18001B6D4 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18001B764 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18003731C (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180037348 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180039DC0 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003A430 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003EC50 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18009D544 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x18009E138 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 *     ?Transparent@CDrawListBitmap@@SA?AV1@XZ @ 0x1800D2E3C (-Transparent@CDrawListBitmap@@SA-AV1@XZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800D369C (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800D9794 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180159B74 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GetSurfaceTransform@CBrushRenderingGraph@@IEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x18015AEE8 (-GetSurfaceTransform@CBrushRenderingGraph@@IEBAPEBUD2D_MATRIX_3X2_F@@I@Z.c)
 *     ?CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ @ 0x18015AF54 (-CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     FindBaseSimpleInputBrush @ 0x18019ECD0 (FindBaseSimpleInputBrush.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x1801AD408 (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ??R?$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z @ 0x1801B3C98 (--R-$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCColorDrawListBrush@@U?$default_delete@VCColorDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801CC9E0 (--1-$out_param_t@V-$unique_ptr@VCColorDrawListBrush@@U-$default_delete@VCColorDrawListBrush@@@st.c)
 *     ??1?$unique_ptr@VCColorDrawListBrush@@U?$default_delete@VCColorDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1801CDE70 (--1-$unique_ptr@VCColorDrawListBrush@@U-$default_delete@VCColorDrawListBrush@@@std@@@std@@QEAA@X.c)
 *     ??R?$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z @ 0x1801CDE90 (--R-$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z.c)
 *     ?DoesSurfaceHaveBorder@CRenderingTechnique@@QEBA_NI@Z @ 0x1801DC2D0 (-DoesSurfaceHaveBorder@CRenderingTechnique@@QEBA_NI@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetInputBrushParameters(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        int a4,
        unsigned int a5,
        struct EffectInput *a6)
{
  struct CGeometryOnlyDrawListBrush *v9; // rbx
  struct _D3DCOLORVALUE *v10; // r12
  __int64 v11; // rsi
  struct CGeometryOnlyDrawListBrush *v12; // rax
  __int64 (__fastcall ****v13)(_QWORD, __int64); // rdi
  __int64 v14; // xmm0_8
  int IntermediateSurfaceBrush; // esi
  __int64 (__fastcall ***v16)(_QWORD, __int64); // rdi
  __m128i v17; // xmm0
  const struct D2D1::Matrix3x2F *SurfaceTransform; // rax
  __int64 BaseSimpleInputBrush; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  char v24; // al
  __int64 v25; // rcx
  CDrawListBrush *v26; // rdi
  FLOAT width; // xmm0_4
  FLOAT v28; // xmm1_4
  __int128 v29; // xmm0
  __int64 v30; // rdx
  CDrawListBrush *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // xmm0_8
  __int64 v35; // rdx
  struct CGeometryOnlyDrawListBrush *v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  _QWORD *v39; // rcx
  struct CGeometryOnlyDrawListBrush *v40; // rcx
  CSurfaceDrawListBrush *v41; // rdx
  int v42; // edi
  __int64 v43; // rcx
  unsigned int v44; // edi
  FLOAT height; // xmm1_4
  CDrawListBrush *v46; // rax
  __int128 v47; // xmm0
  CDrawListBrush **v48; // rcx
  CDrawListBrush *v49; // rcx
  CDrawListBrush *v50; // rdx
  __int64 v51; // rax
  CDrawListBrush *v52[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct CGeometryOnlyDrawListBrush *v53[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v54; // [rsp+50h] [rbp-B0h]
  struct CColorDrawListBrush *v55[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+68h] [rbp-98h]
  __int128 v57; // [rsp+70h] [rbp-90h] BYREF
  __int128 v58; // [rsp+80h] [rbp-80h] BYREF
  int v59; // [rsp+90h] [rbp-70h]
  int v60; // [rsp+DCh] [rbp-24h]
  char v61; // [rsp+E0h] [rbp-20h]
  struct CDrawingContext *v62; // [rsp+F0h] [rbp-10h] BYREF
  __int64 (__fastcall ***v63[4])(_QWORD, __int64); // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v64; // [rsp+118h] [rbp+18h]
  __int64 v65; // [rsp+11Ch] [rbp+1Ch]
  int v66; // [rsp+124h] [rbp+24h]
  __m128i si128; // [rsp+128h] [rbp+28h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+140h] [rbp+40h] BYREF

  LODWORD(v57) = a4;
  v9 = 0LL;
  v10 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
  *((_QWORD *)a6 + 3) = 0LL;
  *((_QWORD *)a6 + 4) = 0LL;
  LODWORD(v52[0]) = *((_DWORD *)a6 + 12);
  CBrushRenderingGraph::CheckIfDisposed(this);
  v11 = 4LL;
  v12 = *(struct CGeometryOnlyDrawListBrush **)(*((_QWORD *)this + 2) + 24LL * LODWORD(v52[0]));
  v62 = a2;
  v13 = v63;
  v53[0] = v12;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v13++);
    --v11;
  }
  while ( v11 );
  v14 = (__int64)*a3;
  v64 = 0;
  v65 = v14;
  v66 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  IntermediateSurfaceBrush = (*(__int64 (__fastcall **)(struct CGeometryOnlyDrawListBrush *, struct CDrawingContext **))(*(_QWORD *)v53[0] + 344LL))(
                               v53[0],
                               &v62);
  if ( IntermediateSurfaceBrush >= 0 )
  {
    v16 = v63[0];
    v63[0] = 0LL;
    v9 = (struct CGeometryOnlyDrawListBrush *)v16;
    v53[0] = (struct CGeometryOnlyDrawListBrush *)v16;
    if ( !v16 )
      goto LABEL_5;
    SurfaceTransform = (const struct D2D1::Matrix3x2F *)CBrushRenderingGraph::GetSurfaceTransform(
                                                          this,
                                                          (unsigned int)v52[0]);
    if ( SurfaceTransform )
    {
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)v55,
        (const struct D2D1::Matrix3x2F *)(v16 + 1),
        SurfaceTransform);
      v34 = v56;
      *(_OWORD *)v35 = *(_OWORD *)v55;
      *(_QWORD *)(v35 + 16) = v34;
    }
    BaseSimpleInputBrush = FindBaseSimpleInputBrush(v16);
    v21 = BaseSimpleInputBrush;
    if ( BaseSimpleInputBrush )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BaseSimpleInputBrush + 8LL))(
             BaseSimpleInputBrush,
             0LL) )
      {
        v52[0] = 0LL;
        v55[0] = (struct CColorDrawListBrush *)v52;
        v55[1] = 0LL;
        *(__m128i *)&v10->r = si128;
        LOBYTE(v56) = 1;
        IntermediateSurfaceBrush = CColorDrawListBrush::Create(v10, &v55[1]);
        wil::details::out_param_t<std::unique_ptr<CColorDrawListBrush>>::~out_param_t<std::unique_ptr<CColorDrawListBrush>>(v55);
        if ( IntermediateSurfaceBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x123u, 0LL);
          v48 = v52;
LABEL_81:
          std::unique_ptr<CColorDrawListBrush>::~unique_ptr<CColorDrawListBrush>(v48);
          goto LABEL_12;
        }
        CDrawListBrush::CopyPrimitiveClamp(v52[0], (const struct CDrawListBrush *)v21);
        v49 = v52[0];
        *(_OWORD *)((char *)v52[0] + 8) = *(_OWORD *)(v21 + 8);
        *((_QWORD *)v49 + 3) = *(_QWORD *)(v21 + 24);
        if ( v9 == (struct CGeometryOnlyDrawListBrush *)v21 )
        {
          v50 = v52[0];
          v52[0] = 0LL;
          std::unique_ptr<CShape>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))v53,
            (__int64 (__fastcall ***)(_QWORD, __int64))v50);
          v9 = v53[0];
        }
        else if ( (*(unsigned __int8 (__fastcall **)(struct CGeometryOnlyDrawListBrush *, __int64))(*(_QWORD *)v9 + 8LL))(
                    v9,
                    3LL) )
        {
          v51 = *(_QWORD *)v9;
          *(CDrawListBrush **)&v57 = v52[0];
          v52[0] = 0LL;
          (*(void (__fastcall **)(struct CGeometryOnlyDrawListBrush *, __int128 *))(v51 + 40))(v9, &v57);
          std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v57);
        }
        std::unique_ptr<CColorDrawListBrush>::~unique_ptr<CColorDrawListBrush>(v52);
      }
    }
    else
    {
      if ( CCommonRegistryData::m_fFlattenVirtualSurfaceBrush )
      {
        v44 = v57;
      }
      else
      {
        v44 = v57;
        if ( !CRenderingTechnique::DoesSurfaceHaveBorder(
                *(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8LL * (unsigned int)v57),
                a5) )
          goto LABEL_19;
      }
      v59 = 0;
      v36 = v9;
      v58 = 0LL;
      v60 = 257;
      v61 = 0;
      v9 = 0LL;
      v52[0] = 0LL;
      std::unique_ptr<CShape>::reset(v63, (__int64 (__fastcall ***)(_QWORD, __int64))v36);
      v37 = *((_QWORD *)this + 18);
      v38 = 1;
      if ( v64 > 1 )
        v38 = v64;
      v64 = v38;
      if ( CRenderingTechnique::DoesSurfaceHaveBorder(*(CRenderingTechnique **)(v37 + 8LL * v44), a5) )
      {
        LOWORD(v60) = 0;
      }
      else
      {
        v53[1] = 0LL;
        v53[0] = (struct CGeometryOnlyDrawListBrush *)v52;
        v54 = 1;
        IntermediateSurfaceBrush = CGeometryOnlyDrawListBrush::Create(&v53[1]);
        if ( v54 )
        {
          v39 = *(_QWORD **)v53[0];
          *(_QWORD *)v53[0] = v53[1];
          if ( v39 )
            CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v39);
        }
        if ( IntermediateSurfaceBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x143u, 0LL);
          if ( v52[0] )
            CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free((_QWORD *)v52[0]);
          goto LABEL_12;
        }
        height = a3->height;
        v46 = v52[0];
        *(FLOAT *)&v53[1] = a3->width;
        *((FLOAT *)&v53[1] + 1) = height;
        v53[0] = 0LL;
        v47 = *(_OWORD *)v53;
        *((_BYTE *)v52[0] + 52) = 1;
        *((_DWORD *)v46 + 12) = 0;
        *((_OWORD *)v46 + 2) = v47;
        *(CDrawListBrush **)&v58 = v52[0];
      }
      *(_QWORD *)&v57 = 0LL;
      v53[0] = (struct CGeometryOnlyDrawListBrush *)&v57;
      v53[1] = 0LL;
      v54 = 1;
      IntermediateSurfaceBrush = CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
                                   (CBrushDrawListGenerator *)&v62,
                                   (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v58,
                                   &v53[1]);
      if ( v54 )
      {
        v40 = v53[0];
        v41 = *(CSurfaceDrawListBrush **)v53[0];
        *(_QWORD *)v53[0] = v53[1];
        if ( v41 )
          std::default_delete<CSurfaceDrawListBrush>::operator()((__int64)v40, v41);
      }
      if ( IntermediateSurfaceBrush < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x14Cu, 0LL);
        std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>((CSurfaceDrawListBrush **)&v57);
        std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)v52);
        goto LABEL_12;
      }
      v9 = (struct CGeometryOnlyDrawListBrush *)v57;
      v53[0] = (struct CGeometryOnlyDrawListBrush *)v57;
      v42 = v66 | 0x40;
      *(_QWORD *)&v57 = 0LL;
      CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)&v62);
      v66 = v42;
      if ( (_QWORD)v57 )
        std::default_delete<CSurfaceDrawListBrush>::operator()(v43, (CSurfaceDrawListBrush *)v57);
      if ( v52[0] )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free((_QWORD *)v52[0]);
    }
LABEL_19:
    if ( v9 )
    {
      matrix = *(D2D1_MATRIX_3X2_F *)((char *)v9 + 8);
      if ( !D2D1IsMatrixInvertible(&matrix) )
      {
        IntermediateSurfaceBrush = -2003304441;
LABEL_69:
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
          McTemplateU0t_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_EFFECTBRUSH_DRAW_IGNORE_INVALID_INPUT,
            (unsigned int)IntermediateSurfaceBrush);
        *((_BYTE *)a6 + 45) = 1;
        IntermediateSurfaceBrush = 0;
        *((_DWORD *)a6 + 10) = 0;
        goto LABEL_11;
      }
      v22 = FindBaseSimpleInputBrush(v9);
      v23 = v22;
      if ( v22 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 8LL))(v22, 2LL) )
      {
        CDrawListBitmap::operator=((__int64 *)a6, (__int64 *)(v23 + 56));
        v24 = 0;
      }
      else
      {
        v24 = 1;
      }
      *((_BYTE *)a6 + 45) = v24;
      if ( (*(unsigned __int8 (__fastcall **)(struct CGeometryOnlyDrawListBrush *, __int64))(*(_QWORD *)v9 + 8LL))(
             v9,
             5LL)
        || (v26 = v9,
            (*(unsigned __int8 (__fastcall **)(struct CGeometryOnlyDrawListBrush *, __int64))(*(_QWORD *)v9 + 8LL))(
              v9,
              4LL)) )
      {
        width = a3->width;
        v28 = a3->height;
        v52[0] = 0LL;
        v52[1] = (CDrawListBrush *)__PAIR64__(LODWORD(v28), LODWORD(width));
        v29 = *(_OWORD *)v52;
        v52[0] = 0LL;
        v55[0] = (struct CColorDrawListBrush *)v52;
        v57 = v29;
        v55[1] = 0LL;
        LOBYTE(v56) = 1;
        IntermediateSurfaceBrush = CEmptyRegionDrawListBrush::Create(v25, &v57, v53, &v55[1]);
        if ( (_BYTE)v56 )
        {
          v30 = *(_QWORD *)v55[0];
          *(_QWORD *)v55[0] = v55[1];
          if ( v30 )
            std::default_delete<CEmptyRegionDrawListBrush>::operator()();
        }
        if ( IntermediateSurfaceBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x198u, 0LL);
          if ( v52[0] )
            std::default_delete<CEmptyRegionDrawListBrush>::operator()();
          v9 = v53[0];
          goto LABEL_12;
        }
        v31 = 0LL;
        v26 = v52[0];
        v52[0] = 0LL;
        if ( v53[0] )
        {
          (**(void (__fastcall ***)(struct CGeometryOnlyDrawListBrush *, __int64))v53[0])(v53[0], 1LL);
          v31 = v52[0];
        }
        if ( v31 )
          std::default_delete<CEmptyRegionDrawListBrush>::operator()();
      }
      v9 = 0LL;
      *((_QWORD *)a6 + 7) = v26;
      goto LABEL_6;
    }
LABEL_5:
    v17 = si128;
    *((_BYTE *)a6 + 45) = 1;
    *(__m128i *)((char *)a6 + 24) = v17;
LABEL_6:
    *((_DWORD *)a6 + 10) = v66;
  }
  if ( IntermediateSurfaceBrush == -2147024846
    || IntermediateSurfaceBrush == -2147022876
    || IntermediateSurfaceBrush == -2003304441 )
  {
    goto LABEL_69;
  }
  if ( IntermediateSurfaceBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x1B3u, 0LL);
    goto LABEL_12;
  }
LABEL_11:
  if ( *((_BYTE *)a6 + 45) )
  {
    v32 = CDrawListBitmap::Transparent(&matrix);
    CDrawListBitmap::operator=(a6, v32);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)matrix.m[1]);
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)&matrix);
    if ( !*((_QWORD *)a6 + 7) )
    {
      v53[0] = 0LL;
      v55[0] = (struct CColorDrawListBrush *)v53;
      v55[1] = 0LL;
      LOBYTE(v56) = 1;
      IntermediateSurfaceBrush = CColorDrawListBrush::Create((const struct _D3DCOLORVALUE *)((char *)a6 + 24), &v55[1]);
      if ( (_BYTE)v56 )
      {
        v33 = *(_QWORD *)v55[0];
        *(_QWORD *)v55[0] = v55[1];
        if ( v33 )
          std::default_delete<CColorDrawListBrush>::operator()();
      }
      if ( IntermediateSurfaceBrush >= 0 )
      {
        *((struct CGeometryOnlyDrawListBrush **)a6 + 7) = v53[0];
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x1C0u, 0LL);
      v48 = v53;
      goto LABEL_81;
    }
  }
LABEL_12:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v62);
  if ( v9 )
    (**(void (__fastcall ***)(struct CGeometryOnlyDrawListBrush *, __int64))v9)(v9, 1LL);
  return (unsigned int)IntermediateSurfaceBrush;
}
