/*
 * XREFs of ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0
 * Callers:
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z @ 0x18001CA4C (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18001D270 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18006C3D0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800D907C (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180159B74 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     ??0CCpuClip@@QEAA@XZ @ 0x180007CF8 (--0CCpuClip@@QEAA@XZ.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18000F9E0 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntialiasSinkContext@@@Z @ 0x18000FB50 (-Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntia.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x180013CC0 (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180063A00 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@Z @ 0x18006ADD0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdex.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x18006AE00 (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18006B470 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006B600 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E5F0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B5B10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800C8918 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800CCC30 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800CDD20 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800CF010 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     ??4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z @ 0x180206A28 (--4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??1CComplexShape@@UEAA@XZ @ 0x18021EA80 (--1CComplexShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListCache::Render(__int64 a1, __int64 a2, __m128 *a3, float a4)
{
  float v4; // xmm1_4
  __int64 v5; // rdi
  __m128 v6; // xmm2
  __int64 v7; // rax
  float *v10; // r15
  unsigned int v11; // r14d
  struct ID2D1Geometry *v12; // r12
  bool v13; // zf
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  const struct CMILMatrix *v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r14
  int v25; // eax
  unsigned __int64 v26; // rdi
  __int64 v27; // r9
  __int64 v28; // r8
  unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  unsigned __int32 v32; // xmm8_4
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r15
  char v35; // al
  unsigned __int64 v36; // r14
  int v37; // eax
  int v38; // eax
  unsigned __int64 v39; // r8
  __int64 v40; // rax
  float *v41; // rdx
  int v42; // ecx
  __m128 v43; // xmm6
  float v44; // xmm0_4
  float v45; // xmm0_4
  float v46; // xmm0_4
  unsigned int v47; // r12d
  float v48; // xmm6_4
  int v49; // eax
  __m128i v50; // xmm1
  float v51; // xmm0_4
  float v52; // xmm14_4
  float v53; // xmm15_4
  char v54; // al
  float v55; // xmm5_4
  float v56; // xmm10_4
  float v57; // xmm11_4
  float v58; // xmm13_4
  float x; // xmm4_4
  float y; // xmm5_4
  float v61; // xmm6_4
  float v62; // xmm3_4
  __int64 v63; // rcx
  unsigned __int64 v64; // rbx
  unsigned __int64 v65; // r14
  float v66; // xmm9_4
  float v67; // xmm0_4
  __m128i v68; // xmm4
  __m128i v69; // xmm3
  int v70; // ecx
  float v71; // xmm6_4
  int v72; // ecx
  __m128 v73; // xmm0
  __m128 v74; // xmm1
  float v75; // xmm6_4
  float v76; // xmm5_4
  char v77; // cl
  char v78; // al
  float v79; // xmm0_4
  __int64 v80; // rax
  int v81; // eax
  float v82; // xmm6_4
  float v83; // xmm9_4
  float v84; // xmm10_4
  float v85; // xmm11_4
  CMILMatrix *v86; // rcx
  float v87; // xmm3_4
  float v88; // xmm6_4
  float v89; // xmm3_4
  float v90; // xmm4_4
  float v91; // xmm5_4
  float v92; // xmm1_4
  int v93; // eax
  char v94; // cl
  unsigned __int64 v95; // rax
  float v96; // xmm1_4
  float v97; // xmm0_4
  char v98; // dl
  char v99; // al
  __m128 v100; // xmm0
  char v101; // cl
  unsigned int v102; // xmm1_4
  unsigned int v103; // xmm3_4
  const struct CShape *v104; // rdx
  char v105; // bl
  const struct CMILMatrix *TopByReference; // rax
  int v107; // ebx
  __m128 v108; // rt1
  unsigned int v109; // eax
  int v110; // eax
  char v111; // [rsp+48h] [rbp-C0h]
  unsigned int v112; // [rsp+4Ch] [rbp-BCh]
  struct D2D_RECT_F v113; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v114; // [rsp+60h] [rbp-A8h]
  CDrawingContext *v115; // [rsp+68h] [rbp-A0h]
  int v116; // [rsp+70h] [rbp-98h]
  int v117; // [rsp+74h] [rbp-94h]
  __int64 v118; // [rsp+78h] [rbp-90h] BYREF
  float v119; // [rsp+80h] [rbp-88h]
  __m128 v120; // [rsp+88h] [rbp-80h] BYREF
  __m128 v121; // [rsp+98h] [rbp-70h]
  __m128 v122; // [rsp+A8h] [rbp-60h]
  __m128 v123; // [rsp+B8h] [rbp-50h]
  __int32 v124; // [rsp+C8h] [rbp-40h]
  struct ID2D1Geometry *v125; // [rsp+D8h] [rbp-30h] BYREF
  float *v126; // [rsp+E0h] [rbp-28h]
  __m128 v127; // [rsp+E8h] [rbp-20h] BYREF
  struct ID2D1Geometry *v128; // [rsp+F8h] [rbp-10h]
  struct ID2D1Geometry *v129; // [rsp+100h] [rbp-8h]
  struct D2D_RECT_F v130; // [rsp+108h] [rbp+0h] BYREF
  __int64 v131; // [rsp+118h] [rbp+10h]
  _BYTE v132[64]; // [rsp+128h] [rbp+20h] BYREF
  int v133; // [rsp+168h] [rbp+60h]
  _BYTE v134[16]; // [rsp+178h] [rbp+70h] BYREF
  char v135[96]; // [rsp+188h] [rbp+80h] BYREF
  struct D2D_RECT_F v136; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v137; // [rsp+1F8h] [rbp+F0h]
  struct D2D_RECT_F v138; // [rsp+208h] [rbp+100h] BYREF
  __int64 v139; // [rsp+218h] [rbp+110h]
  struct D2D_POINT_2F v140[4]; // [rsp+228h] [rbp+120h] BYREF
  struct D2D_POINT_2F v141; // [rsp+248h] [rbp+140h] BYREF
  void *retaddr; // [rsp+360h] [rbp+258h]

  v4 = *(float *)(a1 + 48);
  v5 = 0LL;
  v6 = (__m128)*(unsigned int *)(a1 + 56);
  v7 = *(_QWORD *)(a2 + 32);
  v115 = (CDrawingContext *)a2;
  v10 = (float *)a1;
  v126 = (float *)a1;
  v11 = 0;
  v131 = v7;
  v12 = 0LL;
  v129 = 0LL;
  v125 = 0LL;
  v111 = 0;
  *(float *)&v114 = a4;
  if ( v6.m128_f32[0] <= v4 || *(float *)(a1 + 60) <= *(float *)(a1 + 52) || a4 <= 0.0 )
  {
LABEL_27:
    if ( g_pComposition )
      v5 = *((_QWORD *)g_pComposition + 110);
    *((_QWORD *)v10 + 2) = v5;
    goto LABEL_30;
  }
  v13 = (*(_BYTE *)(a1 + 76) & 4) == 0;
  v14 = 0LL;
  v118 = 0LL;
  v124 = 0;
  if ( v13 )
  {
    v21 = (const struct CMILMatrix *)a3;
    *(_QWORD *)&v138.left = __PAIR64__(*(_DWORD *)(a1 + 52), LODWORD(v4));
    v138.bottom = *(FLOAT *)(a1 + 60);
    LODWORD(v138.right) = v6.m128_i32[0];
    v139 = 0LL;
    if ( !a3 )
    {
      v22 = *(_DWORD *)(a2 + 288);
      if ( v22 )
        v21 = (const struct CMILMatrix *)(*(_QWORD *)(a2 + 280) + 68LL * (unsigned int)(v22 - 1));
      else
        v21 = (const struct CMILMatrix *)&CMILMatrix::Identity;
    }
    v23 = *(_QWORD *)(a2 + 744);
    v24 = a2;
    if ( v23 != *(_QWORD *)(a2 + 736) )
    {
      if ( *(_QWORD *)(v23 - 176) )
      {
        v133 = 0;
        if ( CCpuClippingData::CalcScopeTransformFromWorld(
               (const struct CMILMatrix *)(v23 - 84),
               v21,
               (struct CMILMatrix *)v132) )
        {
          v113 = 0LL;
          if ( *((float *)&v139 + 1) == 0.0 && *(float *)&v139 == 0.0 )
          {
            CMILMatrix::Transform2DBoundsHelper<0>(v132, &v138, &v113);
          }
          else
          {
            v137 = 0LL;
            v136 = 0LL;
            CMILMatrix::Transform3DBoundsHelper<0>(v132, &v138, &v136);
            v113 = v136;
          }
          CCpuClip::CCpuClip((CCpuClip *)v134);
          v104 = CScopedClipStack::HasCpuClipsInScope((CScopedClipStack *)(a2 + 736))
               ? *(const struct CShape **)(*(_QWORD *)(a2 + 2688) - 40LL)
               : 0LL;
          CCpuClip::Initialize((CCpuClip *)v134, v104, 0LL, D2D1_ANTIALIAS_MODE_ALIASED, 0, 0LL);
          v105 = CCpuClip::FullyContains(v134, &v113, 0LL);
          CShapePtr::~CShapePtr((CShapePtr *)v135);
          if ( v105 )
          {
            v136 = 0LL;
            v14 = v24;
            TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(v24 + 280));
            v107 = CDrawingContext::PushClippingScope(
                     (struct CDrawingContext *)v24,
                     0LL,
                     1,
                     1u,
                     (__int64)TopByReference,
                     &v136.left);
            v11 = v107;
            if ( v107 < 0 )
            {
              v109 = 6613;
            }
            else
            {
              v107 = CDrawingContext::PushGpuClipRectInternal(v14, 0, (unsigned int)&v136, 0, 1);
              v11 = v107;
              if ( v107 >= 0 )
              {
                v118 = v14;
                v24 = v14;
                goto LABEL_17;
              }
              CDrawingContext::PopClippingScope((CDrawingContext *)v14, 0);
              v109 = 6626;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v109, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v107, 0x17Fu, 0LL);
            CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v118);
            goto LABEL_31;
          }
        }
      }
    }
LABEL_17:
    v25 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)v24, 0);
    v112 = v25;
    v11 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x181u, 0LL);
      CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v118);
      goto LABEL_31;
    }
    goto LABEL_6;
  }
  v15 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a2, 1);
  v112 = v15;
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x176u, 0LL);
    goto LABEL_31;
  }
LABEL_6:
  v16 = *((_QWORD *)v10 + 5);
  v17 = (unsigned __int64)(v10 + 10);
  v18 = v16 & 3;
  if ( (v16 & 3) == 0 )
  {
LABEL_76:
    if ( (v16 & 3) == 0 )
    {
LABEL_79:
      v19 = (unsigned __int64)(v10 + 10);
      if ( (v16 & 3) == 0 )
      {
        v20 = 1LL;
        goto LABEL_37;
      }
      v63 = v18 - 1;
      if ( v63 )
      {
        if ( (unsigned __int64)(v63 - 1) >= 2 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
        goto LABEL_11;
      }
LABEL_36:
      v20 = *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
      goto LABEL_37;
    }
    if ( v18 != 1 )
    {
      if ( v18 == 2 )
        goto LABEL_10;
      goto LABEL_79;
    }
LABEL_35:
    v19 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_36;
  }
  if ( ((_DWORD)v10[10] & 3) == 1LL )
  {
    v17 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_35;
  }
  if ( ((_DWORD)v10[10] & 3) != 2LL )
  {
    if ( ((_DWORD)v10[10] & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    goto LABEL_76;
  }
  v17 = 0LL;
LABEL_10:
  v19 = 0LL;
LABEL_11:
  v20 = 0LL;
LABEL_37:
  v32 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v33 = v19 + 8 * v20;
  while ( 1 )
  {
    if ( v17 == v33 )
    {
      if ( !v14 )
        goto LABEL_26;
      v38 = *(_DWORD *)(v14 + 3112);
      if ( v38 )
        *(_DWORD *)(v14 + 3112) = v38 - 1;
      v34 = 0xAAAAAAAAAAAAAAABuLL;
      --*(_QWORD *)(*(_QWORD *)(v14 + 744) - 184LL);
      *(_BYTE *)(v14 + 8065) = 1;
      v17 = *(_QWORD *)(v14 + 736);
      v39 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(v14 + 744) - v17) >> 6);
      v36 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(v14 + 744) - v17 - 192) >> 6) + 1;
      if ( v36 <= v39 )
      {
        v26 = v17 + ((__int64)(*(_QWORD *)(v14 + 744) - v17) >> 6 << 6);
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v136, *(_QWORD *)(v14 + 736), v39);
        if ( v36 != v28 )
        {
          v138 = v136;
          v139 = v137;
          stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v138, v27);
          v64 = 192 * v36 + v17;
          v136 = v138;
          v137 = v139;
          v65 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *> &,__int64>(
                  &v136,
                  0xAAAAAAAAAAAAAAABuLL * ((__int64)(v26 - v64) >> 6))
              - v64;
          while ( v64 != v26 )
          {
            CScopedClipStack::ClippingScopeState::operator=(v64 + v65, v64);
            v64 += 192LL;
          }
        }
        v29 = v26 - 192;
        do
        {
          v30 = *(_QWORD *)(v29 + 176);
          if ( v30 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
          v29 += 192LL;
        }
        while ( v29 != v26 );
        *(_QWORD *)(v14 + 744) -= 192LL;
LABEL_26:
        v10 = v126;
        v5 = 0LL;
        v11 = v112;
        goto LABEL_27;
      }
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_52;
    }
    v34 = *(_QWORD *)v17;
    if ( (*(_DWORD *)(*(_QWORD *)v17 + 64LL) & 0x100) == 0 || !CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)a3) )
    {
      v35 = 0;
      goto LABEL_41;
    }
    v69 = (__m128i)*(unsigned int *)(v34 + 72);
    v68 = v69;
    *(float *)v68.m128i_i32 = (float)((float)(*(float *)v69.m128i_i32 * a3[1].m128_f32[0])
                                    + (float)(*(float *)(v34 + 68) * a3->m128_f32[0]))
                            + a3[3].m128_f32[0];
    *(float *)v69.m128i_i32 = (float)((float)(*(float *)v69.m128i_i32 * a3[1].m128_f32[1])
                                    + (float)(*(float *)(v34 + 68) * a3->m128_f32[1]))
                            + a3[3].m128_f32[1];
    if ( (_mm_cvtsi128_si32(v68) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v6.m128_f32[0] = (float)(int)*(float *)v68.m128i_i32 - *(float *)v68.m128i_i32;
      v6 = _mm_cmple_ss(v6, (__m128)LODWORD(FLOAT_N0_5));
      v70 = (int)*(float *)v68.m128i_i32 - _mm_cvtsi128_si32((__m128i)v6);
    }
    else
    {
      v113.left = *(float *)v68.m128i_i32 + 6291456.25;
      v70 = (int)(LODWORD(v113.left) << 10) >> 11;
    }
    v71 = (float)v70;
    if ( (_mm_cvtsi128_si32(v69) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v6.m128_f32[0] = (float)(int)*(float *)v69.m128i_i32 - *(float *)v69.m128i_i32;
      v108.m128_f32[0] = FLOAT_N0_5;
      v72 = (int)*(float *)v69.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v6, v108));
    }
    else
    {
      v113.left = *(float *)v69.m128i_i32 + 6291456.25;
      v72 = (int)(LODWORD(v113.left) << 10) >> 11;
    }
    v73 = *a3;
    v74 = a3[1];
    v124 = a3[4].m128_i32[0];
    v6 = a3[2];
    v120 = v73;
    v75 = v71 - *(float *)v68.m128i_i32;
    v123 = a3[3];
    v121 = v74;
    v122 = v6;
    v76 = (float)v72 - *(float *)v69.m128i_i32;
    if ( COERCE_FLOAT(LODWORD(v75) & v32) >= 0.000081380211
      || COERCE_FLOAT(LODWORD(v76) & v32) >= 0.000081380211
      || 0.000081380211 <= 0.0 )
    {
      v77 = BYTE1(v124);
      if ( (char)(4 * BYTE1(v124)) >> 6 == 1 )
      {
        v6 = (__m128)v122.m128_u32[3];
      }
      else
      {
        if ( (char)(4 * BYTE1(v124)) >> 6 >= 0 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(v121.m128_i32[3] & v32) * 61440.0)
                                            + (float)(COERCE_FLOAT(v120.m128_i32[3] & v32) * 61440.0))
                                    + COERCE_FLOAT(v123.m128_i32[3] & v32))
                            - 1.0) & v32) >= 0.000081380211 )
          {
            v98 = 0;
            v99 = 16;
          }
          else
          {
            v98 = 1;
            v99 = 48;
          }
          v77 = v99 | BYTE1(v124) & 0xCF;
          v100 = _mm_shuffle_ps(v6, v6, 255);
          BYTE1(v124) = v77;
          v6 = v100;
          v78 = v98 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v100.m128_i32[0] & v32) * 61440.0) - 0.0) & v32) < 0.000081380211);
        }
        else
        {
          v6 = _mm_shuffle_ps(v6, v6, 255);
          v78 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v6.m128_i32[0] & v32) * 61440.0) - 0.0) & v32) < 0.000081380211;
        }
        if ( v78 )
        {
          v123.m128_f32[0] = v123.m128_f32[0] + v75;
          v79 = v123.m128_f32[2] + 0.0;
          v123.m128_f32[1] = v123.m128_f32[1] + v76;
LABEL_109:
          LOBYTE(v124) = v124 & 0xFC;
          v123.m128_f32[2] = v79;
          goto LABEL_110;
        }
      }
      BYTE1(v124) = v77 & 0xF3;
      v120.m128_f32[0] = v120.m128_f32[0] + (float)(v75 * v120.m128_f32[3]);
      v120.m128_f32[1] = v120.m128_f32[1] + (float)(v76 * v120.m128_f32[3]);
      v120.m128_f32[2] = v120.m128_f32[2] + (float)(v120.m128_f32[3] * 0.0);
      v121.m128_f32[0] = v121.m128_f32[0] + (float)(v75 * v121.m128_f32[3]);
      v121.m128_f32[1] = v121.m128_f32[1] + (float)(v76 * v121.m128_f32[3]);
      v121.m128_f32[2] = v121.m128_f32[2] + (float)(v121.m128_f32[3] * 0.0);
      v122.m128_f32[0] = v122.m128_f32[0] + (float)(v75 * v6.m128_f32[0]);
      v122.m128_f32[1] = v122.m128_f32[1] + (float)(v76 * v6.m128_f32[0]);
      v122.m128_f32[2] = v122.m128_f32[2] + (float)(v6.m128_f32[0] * 0.0);
      v123.m128_f32[0] = v123.m128_f32[0] + (float)(v75 * v123.m128_f32[3]);
      v123.m128_f32[1] = v123.m128_f32[1] + (float)(v76 * v123.m128_f32[3]);
      v79 = v123.m128_f32[2] + (float)(v123.m128_f32[3] * 0.0);
      goto LABEL_109;
    }
LABEL_110:
    v35 = 1;
LABEL_41:
    v36 = (unsigned __int64)&v120;
    if ( !v35 )
      v36 = (unsigned __int64)a3;
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)v34 + 32LL))(v34) == 2 )
      goto LABEL_44;
LABEL_52:
    v40 = 0LL;
    v41 = *(float **)(v34 + 16);
    v42 = *(_DWORD *)(v131 + 360);
    if ( v42 )
      v40 = *(_QWORD *)(*(_QWORD *)(v131 + 336) + 8LL * (unsigned int)(v42 - 1));
    v13 = *(_DWORD *)(v40 + 68) == 1;
    v43 = *(__m128 *)(v40 + 52);
    v127 = v43;
    if ( v13 )
    {
      v44 = _mm_shuffle_ps(v43, v43, 255).m128_f32[0] - 0.5;
      if ( v44 < -2147483600.0 )
      {
        v117 = 0x80000000;
      }
      else if ( v44 >= 2147483600.0 )
      {
        v117 = 0x7FFFFFFF;
      }
      else
      {
        v117 = (int)ceilf_0(v44);
      }
      v45 = _mm_shuffle_ps(v43, v43, 170).m128_f32[0] - 0.5;
      if ( v45 < -2147483600.0 )
      {
        v116 = 0x80000000;
      }
      else if ( v45 >= 2147483600.0 )
      {
        v116 = 0x7FFFFFFF;
      }
      else
      {
        v116 = (int)ceilf_0(v45);
      }
      v46 = _mm_shuffle_ps(v43, v43, 85).m128_f32[0] - 0.5;
      if ( v46 < -2147483600.0 )
      {
        v47 = 0x80000000;
      }
      else if ( v46 >= 2147483600.0 )
      {
        v47 = 0x7FFFFFFF;
      }
      else
      {
        v47 = (int)ceilf_0(v46);
      }
      v48 = v43.m128_f32[0] - 0.5;
      if ( v48 < -2147483600.0 )
      {
        v49 = 0x80000000;
      }
      else if ( v48 >= 2147483600.0 )
      {
        v49 = 0x7FFFFFFF;
      }
      else
      {
        v49 = (int)ceilf_0(v48);
      }
      v41 = *(float **)(v34 + 16);
      v50 = _mm_cvtsi32_si128(v47);
      v12 = v129;
      LODWORD(v113.left) = _mm_cvtepi32_ps(v50).m128_u32[0];
      v51 = (float)v49;
      v52 = (float)v116;
      v53 = (float)v117;
    }
    else
    {
      v53 = v127.m128_f32[3];
      v52 = v127.m128_f32[2];
      LODWORD(v113.left) = v127.m128_i32[1];
      v51 = v127.m128_f32[0];
    }
    v54 = *(_BYTE *)(v36 + 64);
    v55 = v41[14];
    v56 = v41[15];
    v57 = v41[16];
    v58 = v41[17];
    v119 = v51;
    v130.left = v55;
    v130.top = v56;
    v130.right = v57;
    v130.bottom = v58;
    if ( (char)(4 * v54) >> 6 != 1 )
    {
      if ( (char)(4 * v54) >> 6 < 0 )
        goto LABEL_70;
      if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v36)
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v36 - 1.0) & v32) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v36 + 20) - 1.0) & v32) < 0.000081380211 )
      {
        *(_BYTE *)(v36 + 64) = *(_BYTE *)(v36 + 64) & 0xCF ^ 0x30;
LABEL_70:
        x = *(float *)(v36 + 48) + v55;
        y = *(float *)(v36 + 52) + v56;
        v61 = *(float *)(v36 + 48) + v57;
        v62 = *(float *)(v36 + 52) + v58;
        goto LABEL_71;
      }
      v54 = *(_BYTE *)(v36 + 64) & 0xCF ^ 0x10;
      *(_BYTE *)(v36 + 64) = v54;
    }
    if ( v54 >> 6 == 1 )
      goto LABEL_128;
    if ( v54 >> 6 >= 0 )
    {
      v94 = *(_BYTE *)(v36 + 65);
      if ( (char)(4 * v94) >> 6 == 1 )
        goto LABEL_127;
      if ( (char)(4 * v94) >> 6 >= 0 )
      {
        v101 = v94 & 0xCF;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v36 + 28) & v32) * 61440.0)
                                          + (float)(COERCE_FLOAT(*(_DWORD *)(v36 + 12) & v32) * 61440.0))
                                  + COERCE_FLOAT(*(_DWORD *)(v36 + 60) & v32))
                          - 1.0) & v32) >= 0.000081380211 )
        {
          *(_BYTE *)(v36 + 65) = v101 ^ 0x10;
LABEL_127:
          *(_BYTE *)(v36 + 64) = v54 & 0x3F | 0x40;
LABEL_128:
          CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v36, &v130, v140);
          x = v140[0].x;
          v95 = 1LL;
          y = v140[0].y;
          v61 = v140[0].x;
          v62 = v140[0].y;
          do
          {
            v96 = v140[v95].x;
            v97 = v140[v95].y;
            x = fminf(x, v96);
            ++v95;
            y = fminf(y, v97);
            v61 = fmaxf(v61, v96);
            v62 = fmaxf(v62, v97);
          }
          while ( v95 < 4 );
          goto LABEL_71;
        }
        *(_BYTE *)(v36 + 65) = v101 ^ 0x30;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v36 + 4) - 0.0) & v32) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v36 + 16) - 0.0) & v32) >= 0.000081380211 )
      {
        goto LABEL_127;
      }
      *(_BYTE *)(v36 + 64) = v54 | 0xC0;
    }
    v6 = (__m128)*(unsigned int *)v36;
    v66 = *(float *)(v36 + 20);
    x = (float)(*(float *)v36 * v55) + *(float *)(v36 + 48);
    y = (float)(v66 * v56) + *(float *)(v36 + 52);
    v61 = (float)(*(float *)v36 * v57) + *(float *)(v36 + 48);
    v62 = (float)(v66 * v58) + *(float *)(v36 + 52);
    if ( v6.m128_f32[0] <= 0.0 || v66 <= 0.0 )
    {
      if ( x > v61 )
      {
        v67 = x;
        x = (float)(*(float *)v36 * v57) + *(float *)(v36 + 48);
        v61 = v67;
      }
      if ( y > v62 )
      {
        y = (float)(v66 * v58) + *(float *)(v36 + 52);
        v62 = (float)(*(float *)(v36 + 20) * v56) + *(float *)(v36 + 52);
      }
    }
LABEL_71:
    if ( v52 <= x || v53 <= y || v61 <= v119 || v62 <= v113.left )
      goto LABEL_46;
LABEL_44:
    if ( v12 == *(struct ID2D1Geometry **)(v34 + 32) )
      goto LABEL_45;
    if ( v111 )
    {
      v110 = CDrawingContext::PopLayer(v115);
      if ( v110 < 0 )
      {
        v11 = v110;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v110, 0x19Eu, 0LL);
        CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v118);
        goto LABEL_182;
      }
      v111 = 0;
      ReleaseInterface<ID2D1Geometry>((__int64 *)&v125);
    }
    v12 = *(struct ID2D1Geometry **)(v34 + 32);
    v129 = v12;
    if ( !v12 )
      goto LABEL_45;
    v127.m128_u64[1] = 0LL;
    v127.m128_u64[0] = (unsigned __int64)&CComplexShape::`vftable';
    v80 = *(_QWORD *)v12;
    v128 = v12;
    (*(void (__fastcall **)(struct ID2D1Geometry *))(v80 + 8))(v12);
    v81 = CTransformedGeometryHelper::TransformGeometry((const struct CMILMatrix *)v36, v12, &v125);
    if ( v81 < 0 )
      break;
    v113 = 0LL;
    v82 = v126[12];
    v83 = v126[13];
    v84 = v126[14];
    v85 = v126[15];
    v136.left = v82;
    v136.top = v83;
    v136.right = v84;
    v136.bottom = v85;
    if ( (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(v36) )
    {
      v6 = (__m128)*(unsigned int *)(v36 + 52);
      *(float *)&v102 = *(float *)(v36 + 52) + v83;
      *(float *)&v103 = *(float *)(v36 + 48) + v84;
      v113.left = *(float *)(v36 + 48) + v82;
      *(_QWORD *)&v113.top = __PAIR64__(v103, v102);
      v113.bottom = v6.m128_f32[0] + v85;
    }
    else if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v36) )
    {
      v6 = (__m128)*(unsigned int *)v36;
      v87 = *(float *)v36 * v82;
      v88 = *(float *)(v36 + 20);
      v89 = v87 + *(float *)(v36 + 48);
      v90 = (float)(*(float *)v36 * v84) + *(float *)(v36 + 48);
      v91 = (float)(v88 * v83) + *(float *)(v36 + 52);
      v113.left = v89;
      v92 = (float)(v88 * v85) + *(float *)(v36 + 52);
      *(_QWORD *)&v113.top = __PAIR64__(LODWORD(v90), LODWORD(v91));
      v113.bottom = v92;
      if ( v6.m128_f32[0] <= 0.0 || v88 <= 0.0 )
      {
        if ( v89 > v90 )
        {
          v113.left = v90;
          v113.right = v89;
        }
        if ( v91 > v92 )
        {
          v113.top = v92;
          v113.bottom = v91;
        }
      }
    }
    else
    {
      CMILMatrix::Transform2DRectToPerspective(v86, &v136, &v141);
      *(_QWORD *)&v138.left = 4LL;
      *(_QWORD *)&v138.right = &v141;
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
        &v113,
        &v138);
    }
    v93 = CDrawingContext::PushD2DLayer(v115, 0LL, 0LL, SLODWORD(FLOAT_1_0), 0, 0);
    if ( v93 < 0 )
    {
      v11 = v93;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v93, 0x1B4u, 0LL);
      CComplexShape::~CComplexShape((CComplexShape *)&v127);
      CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v118);
      goto LABEL_30;
    }
    v111 = 1;
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_45:
    v37 = CDrawListEntry::Render(v34, v115, v36);
    v112 = v37;
    v11 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x1B9u, 0LL);
      CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v118);
      goto LABEL_30;
    }
LABEL_46:
    v17 += 8LL;
  }
  v11 = v81;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x15u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1AEu, 0LL);
  CComplexShape::~CComplexShape((CComplexShape *)&v127);
  CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v118);
LABEL_30:
  if ( v111 )
LABEL_182:
    CDrawingContext::PopLayer(v115);
LABEL_31:
  if ( v125 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v125 + 16LL))(v125);
  return v11;
}
