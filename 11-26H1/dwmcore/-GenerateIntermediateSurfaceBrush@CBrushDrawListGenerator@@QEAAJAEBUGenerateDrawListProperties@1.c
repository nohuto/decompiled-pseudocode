/*
 * XREFs of ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180159B74
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18003DDB4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ??0CCpuClip@@QEAA@XZ @ 0x180007CF8 (--0CCpuClip@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18001E070 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001F080 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029120 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18003731C (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180038C0C (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18003A7BC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ED00 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005D0FC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18005EB50 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1800DA580 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180144760 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     memcpy_s_0 @ 0x18015A3C0 (memcpy_s_0.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x18015DC60 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x180185E80 (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     ?GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z @ 0x180202B9C (-GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
        CBrushDrawListGenerator *this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CSurfaceDrawListBrush **a3,
        double a4)
{
  unsigned int v6; // edi
  CMatrixStack *v7; // rcx
  unsigned int v9; // ebx
  float v10; // xmm10_4
  float v11; // xmm9_4
  rsize_t v12; // rdx
  __int64 v13; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v14; // r8
  float v15; // xmm6_4
  float v16; // xmm4_4
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  float v19; // xmm8_4
  float v20; // xmm6_4
  __int64 v21; // rbx
  float v22; // xmm8_4
  float v23; // xmm6_4
  __int64 v24; // rax
  int v25; // eax
  CDrawListCache *v26; // rbx
  int v27; // eax
  int DrawList; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  int v33; // rdx^4
  struct D2D_MATRIX_3X2_F *v34; // r9
  __int64 v35; // rcx
  CSurfaceDrawListBrush *v36; // rdx
  __int64 v37; // rcx
  int v38; // edi
  int v39; // eax
  float *v41; // rbx
  CDrawListCache *v42; // rcx
  __int64 v43; // xmm1_8
  struct CVisual *CurrentVisual; // rax
  __int64 v45; // rcx
  __int64 Bounds; // rax
  int v47; // xmm1_4
  int v48; // eax
  int v49; // eax
  float v50[4]; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v51; // [rsp+40h] [rbp-C0h] BYREF
  struct D2D_RECT_F v52; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A0h]
  _DWORD v54[2]; // [rsp+68h] [rbp-98h] BYREF
  __m128 v55[4]; // [rsp+70h] [rbp-90h] BYREF
  char v56; // [rsp+B0h] [rbp-50h]
  __int16 v57; // [rsp+B1h] [rbp-4Fh]
  char v58; // [rsp+B3h] [rbp-4Dh]
  _OWORD v59[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v60; // [rsp+100h] [rbp+0h]
  struct D2D_RECT_F v61; // [rsp+110h] [rbp+10h] BYREF
  CDrawListCache *v62[2]; // [rsp+120h] [rbp+20h] BYREF
  struct CShape *v63[2]; // [rsp+130h] [rbp+30h] BYREF
  int v64; // [rsp+140h] [rbp+40h]
  int v65; // [rsp+144h] [rbp+44h]
  _BYTE v66[4496]; // [rsp+150h] [rbp+50h] BYREF
  __int128 Destination; // [rsp+12E0h] [rbp+11E0h] BYREF
  __int128 v68; // [rsp+12F0h] [rbp+11F0h] BYREF
  __int128 v69; // [rsp+1300h] [rbp+1200h]
  __int128 v70; // [rsp+1310h] [rbp+1210h]
  int v71; // [rsp+1320h] [rbp+1220h]

  v6 = 0;
  v7 = (CMatrixStack *)(*(_QWORD *)this + 280LL);
  v60 = 0;
  v61 = 0LL;
  v51 = 0LL;
  CMatrixStack::Top(v7, (struct CMILMatrix *)v59);
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(*(_QWORD *)this + 24LL) + 88LL))(
    *(_QWORD *)(*(_QWORD *)this + 24LL),
    v54);
  v9 = *((_DWORD *)this + 10);
  v10 = (float)v54[0];
  v11 = (float)v54[1];
  *(_QWORD *)&v69 = 0LL;
  Destination = 0LL;
  v68 = 0LL;
  memcpy_s_0(&Destination, v12, (char *)this + 8, 8LL * v9);
  if ( *(_QWORD *)a2 )
    *((_QWORD *)&Destination + v9++) = *(_QWORD *)a2;
  if ( !v9 )
    goto LABEL_4;
  v38 = *((_DWORD *)a2 + 4);
  *(_QWORD *)&v52.left = v62;
  v62[0] = 0LL;
  *(_QWORD *)&v52.right = 0LL;
  LOBYTE(v53) = 1;
  gsl::details::extent_type<-1>::extent_type<-1>(v63, v9);
  if ( v63[0] == (struct CShape *)-1LL )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v63[1] = (struct CShape *)&Destination;
  v6 = CBrushDrawListGenerator::ComputeBrushClamp((unsigned __int64 *)v63, v38, (float *)a2 + 5, &v52.right);
  if ( (_BYTE)v53 )
    std::unique_ptr<CShape>::reset(
      *(__int64 (__fastcall *****)(_QWORD, __int64))&v52.left,
      *(__int64 (__fastcall ****)(_QWORD, __int64))&v52.right);
  if ( (v6 & 0x80000000) == 0 )
  {
    v39 = (*(__int64 (__fastcall **)(CDrawListCache *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v62[0] + 48LL))(
            v62[0],
            &v61,
            0LL);
    v6 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v39, 0x2C3u, 0LL);
      std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))v62);
      return v6;
    }
    if ( v62[0] )
      (**(void (__fastcall ***)(CDrawListCache *, __int64))v62[0])(v62[0], 1LL);
LABEL_4:
    if ( *((_BYTE *)a2 + 93) )
    {
      v51 = v61;
      v71 = v60;
      Destination = v59[0];
      v68 = v59[1];
      v69 = v59[2];
      v70 = v59[3];
      if ( CMILMatrix::Invert((CMILMatrix *)&Destination, v13, v14) )
      {
        CurrentVisual = CDrawingContext::GetCurrentVisual(*(CDrawingContext **)this);
        Bounds = CVisual::GetBounds(CurrentVisual, *(_QWORD *)(v45 + 7944));
        v47 = *(_DWORD *)(Bounds + 20);
        v64 = *(_DWORD *)(Bounds + 16);
        v65 = v47;
        v63[1] = (struct CShape *)__PAIR64__(LODWORD(v11), LODWORD(v10));
        v63[0] = 0LL;
        CMILMatrix::Transform3DBoundsHelper<1>((__int64)&Destination, (float *)v63, (float *)v63);
        *(_OWORD *)&a4 = LODWORD(v63[0]);
        v10 = *(float *)&v63[1] - *(float *)v63;
        v11 = *((float *)&v63[1] + 1) - *((float *)v63 + 1);
        if ( *(float *)v63 > v61.left )
          v61.left = *(FLOAT *)v63;
        if ( *((float *)v63 + 1) > v61.top )
          v61.top = *((FLOAT *)v63 + 1);
        if ( v61.right > *(float *)&v63[1] )
          v61.right = *(FLOAT *)&v63[1];
        if ( v61.bottom > *((float *)&v63[1] + 1) )
          v61.bottom = *((FLOAT *)&v63[1] + 1);
        if ( IsEmpty(&v61) )
        {
          *(_QWORD *)&v61.right = 0LL;
          *(_QWORD *)&v61.left = 0LL;
        }
      }
    }
    if ( !*((_BYTE *)a2 + 92) )
    {
LABEL_6:
      if ( v61.right <= v61.left || v61.bottom <= v61.top )
      {
        *a3 = 0LL;
        return v6;
      }
      v50[0] = 0.0;
      LODWORD(v62[0]) = 0;
      CMILMatrix::Get2DScaleDimensionsWithPerspective((__int64)v59, v50, (float *)v62, &v51.left);
      v15 = FLOAT_1_0;
      v16 = FLOAT_1_0;
      if ( *((_DWORD *)this + 10) == 1 )
      {
        v41 = (float *)*((_QWORD *)this + 1);
        if ( v41 )
        {
          v15 = sqrtf_0((float)(v41[3] * v41[3]) + (float)(v41[2] * v41[2]));
          v16 = sqrtf_0((float)(v41[5] * v41[5]) + (float)(v41[4] * v41[4]));
        }
      }
      v17 = (__m128)LODWORD(FLOAT_1_0);
      v18.m128_f32[0] = (float)(v50[0] / fmaxf(1.0, v15 * v50[0])) * (float)(v61.right - v61.left);
      v17.m128_f32[0] = (float)(int)v18.m128_f32[0];
      v19 = (float)((int)v18.m128_f32[0] - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v17, v18)));
      *(float *)v63 = v19;
      v18.m128_f32[0] = (float)(*(float *)v62 / fmaxf(1.0, v16 * *(float *)v62)) * (float)(v61.bottom - v61.top);
      *(float *)&a4 = (float)(int)v18.m128_f32[0];
      v20 = (float)((int)v18.m128_f32[0] - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(*(__m128 *)&a4, v18)));
      *((float *)v63 + 1) = v20;
      if ( v19 > v10 )
      {
        *(float *)v63 = v10;
        v19 = v10;
      }
      if ( v20 > v11 )
      {
        v20 = v11;
        *((float *)v63 + 1) = v11;
      }
      v21 = *(_QWORD *)this;
      v22 = v19 / (float)(v61.right - v61.left);
      v62[0] = 0LL;
      v23 = v20 / (float)(v61.bottom - v61.top);
      v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v21 + 16) + 16LL))(v21 + 16);
      LODWORD(v51.right) = 31;
      *(_QWORD *)&v51.left = "DWM Drawlist Brush intermediate";
      v25 = CDrawingContext::PushOffScreenRenderingLayer(
              v21,
              (__int64)&v51,
              (unsigned int *)v63,
              *(_DWORD *)(v24 + 8),
              2,
              v62);
      v26 = v62[0];
      v6 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x340u, 0LL);
      }
      else
      {
        v55[1] = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        v58 = 0;
        v55[3] = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        v55[0] = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        v55[2] = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        v56 = -86;
        v57 = 41;
        CMILMatrix::Translate(
          (CMILMatrix *)v55,
          COERCE_FLOAT(LODWORD(v61.left) ^ _xmm),
          COERCE_FLOAT(LODWORD(v61.top) ^ _xmm));
        CMILMatrix::Scale((CMILMatrix *)v55, v22, v23, 1.0);
        v27 = CDrawingContext::PushTransformInternal(*(const void ***)this, 0LL, (const struct CMILMatrix *)v55, 0, 1);
        v6 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x349u, 0LL);
        }
        else
        {
          CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v66);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CDrawingContext **)this,
                       a2,
                       (struct CDrawListEntryBuilder *)v66);
          v6 = DrawList;
          if ( DrawList < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0x34Du, 0LL);
          }
          else
          {
            v62[0] = 0LL;
            v29 = CDrawListCache::InternalCreate(1, v62);
            v6 = v29;
            if ( v29 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x350u, 0LL);
            }
            else
            {
              CDrawListCache::Update(v62[0], *(struct CDrawingContext **)this, (struct CDrawListEntryBuilder *)v66);
              v30 = CDrawListCache::Render((__int64)v62[0], *(_QWORD *)this, v55, 1.0);
              v6 = v30;
              if ( v30 >= 0 )
              {
                CDrawingContext::PopTransformInternal(*(CDrawingContext **)this, 1);
                v31 = CDrawingContext::PopLayer(*(CDrawingContext **)this);
                v6 = v31;
                if ( v31 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0x35Fu, 0LL);
                  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)v62);
                  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v66);
                }
                else
                {
                  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)v62);
                  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v66);
                  v62[0] = 0LL;
                  LOBYTE(v64) = 0;
                  *(_OWORD *)v63 = 0LL;
                  wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=(
                    (__int64 *)&v63[1],
                    ((unsigned __int64)v26 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v26 >> 64));
                  LODWORD(v32) = 0;
                  v33 = 0;
                  if ( v63[1] )
                  {
                    v32 = *(_QWORD *)(*(__int64 (__fastcall **)(struct CShape *, _DWORD *))(*(_QWORD *)v63[1] + 32LL))(
                                       v63[1],
                                       v54);
                    v33 = HIDWORD(v32);
                  }
                  *(_QWORD *)&v51.left = 0LL;
                  *(_QWORD *)&v52.left = v62;
                  LOWORD(v50[0]) = SamplerMode::k_ClampClampLinear;
                  *(_QWORD *)&v52.right = 0LL;
                  LOBYTE(v53) = 1;
                  BYTE2(v50[0]) = 1;
                  v51.right = (float)(int)v32;
                  v51.bottom = (float)v33;
                  v6 = CSurfaceDrawListBrush::CreateWithContentRect(
                         (__int64 *)v63,
                         (__int16 *)v50,
                         &v51.left,
                         (__int64)&v52.right);
                  if ( (_BYTE)v53 )
                  {
                    v35 = *(_QWORD *)&v52.left;
                    v36 = **(CSurfaceDrawListBrush ***)&v52.left;
                    **(_QWORD **)&v52.left = *(_QWORD *)&v52.right;
                    if ( v36 )
                      std::default_delete<CSurfaceDrawListBrush>::operator()(v35, v36);
                  }
                  if ( (v6 & 0x80000000) == 0 )
                  {
                    v52 = 0LL;
                    v53 = 0LL;
                    D2DMatrixHelper::ComputeRectangleTransform((CDrawListCache *)((char *)v62[0] + 32), &v61, &v52, v34);
                    v42 = v62[0];
                    v43 = v53;
                    *(struct D2D_RECT_F *)((char *)v62[0] + 8) = v52;
                    *((_QWORD *)v42 + 3) = v43;
                    *a3 = v62[0];
                    v62[0] = 0LL;
                  }
                  else
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x375u, 0LL);
                  }
                  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v63[1]);
                  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)v63);
                  if ( v62[0] )
                    std::default_delete<CSurfaceDrawListBrush>::operator()(v37, v62[0]);
                }
                goto LABEL_39;
              }
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0x358u, 0LL);
            }
            wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)v62);
          }
          CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v66);
          CDrawingContext::PopTransformInternal(*(CDrawingContext **)this, 1);
        }
        CDrawingContext::PopLayer(*(CDrawingContext **)this);
      }
LABEL_39:
      if ( v26 )
        (*(void (__fastcall **)(CDrawListCache *))(*(_QWORD *)v26 + 16LL))(v26);
      return v6;
    }
    CCpuClip::CCpuClip((CCpuClip *)&Destination);
    CDrawingContext::GetCpuClip(*(CDrawingContext **)this, (struct CCpuClip *)&Destination);
    if ( CCpuClip::HasClip((CCpuClip *)&Destination) )
    {
      v63[0] = 0LL;
      v48 = CCpuClip::ResolveClip((CCpuClip *)&Destination, v63, 0LL);
      v6 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v48, 0x2F1u, 0LL);
      }
      else
      {
        *(_OWORD *)v62 = 0LL;
        v49 = (*(__int64 (__fastcall **)(struct CShape *, CDrawListCache **, _QWORD))(*(_QWORD *)v63[0] + 48LL))(
                v63[0],
                v62,
                0LL);
        v6 = v49;
        if ( v49 >= 0 )
        {
          if ( *(float *)v62 > v61.left )
            v61.left = *(FLOAT *)v62;
          if ( *((float *)v62 + 1) > v61.top )
            v61.top = *((FLOAT *)v62 + 1);
          if ( v61.right > *(float *)&v62[1] )
            v61.right = *(FLOAT *)&v62[1];
          if ( v61.bottom > *((float *)&v62[1] + 1) )
            v61.bottom = *((FLOAT *)&v62[1] + 1);
          if ( IsEmpty(&v61) )
          {
            *(_QWORD *)&v61.right = 0LL;
            *(_QWORD *)&v61.left = 0LL;
          }
          goto LABEL_79;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, 0x2F4u, 0LL);
      }
      CShapePtr::~CShapePtr((CShapePtr *)&v68);
      return v6;
    }
LABEL_79:
    CShapePtr::~CShapePtr((CShapePtr *)&v68);
    goto LABEL_6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x2C1u, 0LL);
  if ( v62[0] )
    (**(void (__fastcall ***)(CDrawListCache *, __int64))v62[0])(v62[0], 1LL);
  return v6;
}
