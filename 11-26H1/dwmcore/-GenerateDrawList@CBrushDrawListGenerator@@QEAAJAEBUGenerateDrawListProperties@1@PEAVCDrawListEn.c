/*
 * XREFs of ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0
 * Callers:
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18003D6D0 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListEntryBuilder@@@Z @ 0x18003DB54 (-GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18003E488 (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18003F1EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D2050 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180159B74 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A76A0 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801CB150 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?FillHollowRectangleWithSolidColor@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0AEBU_D3DCOLORVALUE@@PEBUD2D_MATRIX_3X2_F@@PEBV2@PEAVCDrawListEntryBuilder@@@Z @ 0x180235E6C (-FillHollowRectangleWithSolidColor@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntryBuilder@@@Z @ 0x180236200 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180265C90 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180268130 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18000EE70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18000F9E0 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x18000FA10 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntialiasSinkContext@@@Z @ 0x18000FB50 (-Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntia.c)
 *     ?GetLocalToScopeTransform@CVisual@@IEBAPEBVCMILMatrix@@PEBVCVisualTree@@@Z @ 0x180010538 (-GetLocalToScopeTransform@CVisual@@IEBAPEBVCMILMatrix@@PEBVCVisualTree@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x180011040 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001EDE4 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180063A00 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800D624C (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18013F6F0 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180166FF0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawList(
        CDrawingContext **this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CDrawListEntryBuilder *a3)
{
  __m128i si128; // xmm1
  void ***v6; // rax
  void ***v8; // rcx
  CDrawingContext *v9; // rdi
  CScopedClipStack *v10; // r15
  const struct CMILMatrix *LocalToScopeTransform; // r12
  enum D2D1_ANTIALIAS_MODE v12; // r13d
  const struct CShape *v13; // rdx
  const struct CCpuClipAntialiasSinkContext *v14; // r8
  int v15; // eax
  int v16; // eax
  CVisual *CurrentVisual; // rax
  _QWORD *v18; // rdi
  CDrawingContext *v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __m128 v23; // xmm4
  __m128 v24; // xmm6
  __m128 v25; // xmm11
  char v26; // cl
  unsigned __int32 v27; // xmm7_4
  unsigned __int32 v28; // xmm13_4
  unsigned __int32 v29; // xmm9_4
  float v30; // xmm8_4
  unsigned __int32 v31; // xmm10_4
  float v32; // xmm5_4
  char v33; // cl
  __int32 v34; // xmm2_4
  float v35; // xmm7_4
  float v36; // xmm0_4
  __int64 v37; // rax
  size_t v38; // rax
  int DrawListWorker; // eax
  int v40; // edx
  int v41; // edi
  int BuiltHWPrimitiveEntry; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v48; // rax
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  int v51; // eax
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  const struct CMILMatrix *TopByReference; // rax
  __int64 v55; // r9
  struct CCpuClipAntialiasSinkContext *v56[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v57; // [rsp+48h] [rbp-C0h]
  __int128 v58; // [rsp+58h] [rbp-B0h]
  __int128 v59; // [rsp+68h] [rbp-A0h]
  int v60; // [rsp+78h] [rbp-90h]
  struct D2D_MATRIX_3X2_F v61; // [rsp+88h] [rbp-80h] BYREF
  __int32 v62; // [rsp+A0h] [rbp-68h]
  unsigned __int32 v63; // [rsp+A4h] [rbp-64h]
  unsigned __int32 v64; // [rsp+A8h] [rbp-60h]
  _QWORD v65[2]; // [rsp+B8h] [rbp-50h] BYREF
  void ***v66; // [rsp+C8h] [rbp-40h]
  _QWORD v67[2]; // [rsp+D0h] [rbp-38h] BYREF
  void (__fastcall ***v68)(_QWORD, __int64); // [rsp+E0h] [rbp-28h]
  char v69; // [rsp+E8h] [rbp-20h]
  __int64 v70; // [rsp+F0h] [rbp-18h]
  __m128i v71; // [rsp+F8h] [rbp-10h]
  __int128 v72; // [rsp+108h] [rbp+0h]
  __m128i v73; // [rsp+118h] [rbp+10h]
  int v74; // [rsp+128h] [rbp+20h]
  __int64 v75; // [rsp+12Ch] [rbp+24h]
  __int64 v76; // [rsp+134h] [rbp+2Ch]
  char v77; // [rsp+13Ch] [rbp+34h]
  _OWORD v78[2]; // [rsp+140h] [rbp+38h] BYREF
  __int64 v79; // [rsp+160h] [rbp+58h]
  __int64 v80; // [rsp+168h] [rbp+60h]
  __int64 v81; // [rsp+170h] [rbp+68h]
  __int128 v82; // [rsp+178h] [rbp+70h]
  __int128 v83; // [rsp+188h] [rbp+80h]
  int v84; // [rsp+198h] [rbp+90h]
  __int128 v85; // [rsp+19Ch] [rbp+94h]
  __int128 v86; // [rsp+1ACh] [rbp+A4h]
  int v87; // [rsp+1BCh] [rbp+B4h]
  BOOL v88; // [rsp+1C0h] [rbp+B8h]
  float v89; // [rsp+1C4h] [rbp+BCh] BYREF
  float v90; // [rsp+1C8h] [rbp+C0h] BYREF
  bool v91; // [rsp+1CCh] [rbp+C4h]
  char v92; // [rsp+1CDh] [rbp+C5h]
  _OWORD v93[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v94; // [rsp+218h] [rbp+110h]
  unsigned int v95; // [rsp+2F8h] [rbp+1F0h]
  void **v96; // [rsp+300h] [rbp+1F8h] BYREF

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v75 = 1065353216LL;
  v96 = &CCommonRenderingEffectFactory::`vftable';
  v6 = &v96;
  v65[0] = this;
  v8 = (void ***)*((_QWORD *)a2 + 1);
  v71 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v8 )
    v6 = v8;
  v66 = v6;
  v92 = *((_BYTE *)a2 + 96);
  v68 = 0LL;
  v69 = 0;
  v77 = 0;
  v67[0] = 0LL;
  v76 = 1LL;
  v67[1] = 0LL;
  v70 = 1065353216LL;
  v72 = 0LL;
  v73 = si128;
  v74 = 0;
  WORD2(v75) = 10666;
  v80 = 0LL;
  v81 = 0LL;
  v91 = 0;
  v65[1] = a3;
  if ( *((_BYTE *)a2 + 92) )
  {
    v9 = *this;
    BYTE5(v75) = 41;
    v10 = (CDrawingContext *)((char *)v9 + 736);
    if ( *(_BYTE *)(*((_QWORD *)v9 + 93) - 8LL) )
    {
      v60 = 0;
      LocalToScopeTransform = 0LL;
      v95 = 4;
      v12 = D2D1_ANTIALIAS_MODE_ALIASED;
      if ( !CScopedClipStack::HasCpuClipsInScope((CDrawingContext *)((char *)v9 + 736)) )
      {
LABEL_13:
        CCpuClip::Initialize((CCpuClip *)v67, v13, LocalToScopeTransform, v12, v95, v14);
        goto LABEL_14;
      }
      v15 = *((_DWORD *)v9 + 84);
      if ( v15 )
        v16 = *(_DWORD *)(*((_QWORD *)v9 + 41) + 4LL * (unsigned int)(v15 - 1));
      else
        v16 = 0;
      if ( *((_DWORD *)v9 + 72) == v16 )
      {
        CurrentVisual = CDrawingContext::GetCurrentVisual(v9);
        LocalToScopeTransform = CVisual::GetLocalToScopeTransform(
                                  CurrentVisual,
                                  *((const struct CVisualTree **)v9 + 993));
        v18 = (_QWORD *)((char *)v9 + 744);
LABEL_10:
        if ( CScopedClipStack::HasCpuClipsInScope(v10) )
        {
          v48 = *((_QWORD *)v10 + 244);
          v12 = *(_DWORD *)(v48 - 8);
          v13 = *(const struct CShape **)(v48 - 40);
        }
        else
        {
          v13 = 0LL;
        }
        v14 = *(const struct CCpuClipAntialiasSinkContext **)(*v18 - 16LL);
        goto LABEL_13;
      }
      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)v9 + 280));
      if ( !CCpuClippingData::CalcScopeTransformFromWorld(
              (const struct CMILMatrix *)(v55 - 84),
              TopByReference,
              (struct CMILMatrix *)v56)
        || !(unsigned __int8)CMILMatrix::ProducesUniformZ<1>(v56) )
      {
        goto LABEL_14;
      }
      v18 = (_QWORD *)((char *)v9 + 744);
      if ( COERCE_FLOAT(DWORD2(v59) & _xmm) >= 0.000081380211 )
      {
        if ( !(unsigned __int8)CMILMatrix::ProducesUniformZ<1>(*v18 - 84LL) )
          goto LABEL_14;
        *(struct CCpuClipAntialiasSinkContext **)&v61.m11 = v56[0];
        *(_QWORD *)&v61.m[1][0] = v57;
        *(_QWORD *)&v61.m[2][0] = v59;
        CMILMatrix::CMILMatrix((CMILMatrix *)v93, &v61);
        v60 = v94;
        *(_OWORD *)v56 = v93[0];
        v95 = 36;
        v57 = v93[1];
        v58 = v93[2];
        v59 = v93[3];
      }
      LocalToScopeTransform = (const struct CMILMatrix *)v56;
      if ( CMILMatrix::IsInvertibleDeterminant((float)(*((float *)&v57 + 1) * *(float *)v56) - (float)(*(float *)&v57 * *((float *)v56 + 1))) )
        goto LABEL_10;
    }
  }
LABEL_14:
  v19 = *this;
  v20 = *((_DWORD *)*this + 72);
  v60 = 0;
  if ( v20 )
  {
    v21 = (unsigned int)(v20 - 1);
    v22 = *((_QWORD *)v19 + 35);
    v23 = *(__m128 *)(68 * v21 + v22);
    v24 = *(__m128 *)(68 * v21 + v22 + 16);
    v25 = *(__m128 *)(68 * v21 + v22 + 48);
    v60 = *(_DWORD *)(68 * v21 + v22 + 64);
    v26 = BYTE1(v60);
    v27 = _mm_shuffle_ps(v25, v25, 255).m128_u32[0];
    v28 = _mm_shuffle_ps(v25, v25, 85).m128_u32[0];
    v29 = _mm_shuffle_ps(v24, v24, 255).m128_u32[0];
    LODWORD(v30) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
    v31 = _mm_shuffle_ps(v23, v23, 255).m128_u32[0];
    LODWORD(v32) = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
  }
  else
  {
    v23.m128_f32[0] = FLOAT_1_0;
    v32 = 0.0;
    v31 = 0;
    v24.m128_i32[0] = 0;
    v30 = FLOAT_1_0;
    v29 = 0;
    v25.m128_i32[0] = 0;
    v28 = 0;
    v27 = LODWORD(FLOAT_1_0);
    v26 = 41;
  }
  if ( *((_BYTE *)a2 + 95) )
    v88 = 1;
  else
    v88 = *((_DWORD *)v19 + 59) != 0;
  v33 = (char)(4 * v26) >> 6;
  if ( v33 > 0
    || v33 >= 0
    && (COERCE_FLOAT(v34 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]),
        COERCE_FLOAT(COERCE_UNSIGNED_INT(
                       (float)((float)((float)(COERCE_FLOAT(v31 & v34) * 61440.0)
                                     + (float)(COERCE_FLOAT(v29 & v34) * 61440.0))
                             + COERCE_FLOAT(v27 & v34))
                     - 1.0) & v34) >= 0.000081380211) )
  {
    *(_QWORD *)&v61.m11 = __PAIR64__(LODWORD(v32), v23.m128_u32[0]);
    *(_QWORD *)&v61.m[1][0] = __PAIR64__(v24.m128_u32[0], v31);
    *(_QWORD *)&v61.m[2][0] = __PAIR64__(v29, LODWORD(v30));
    v62 = v25.m128_i32[0];
    v63 = v28;
    v64 = v27;
    Matrix3x3::Get2DScaleDimensionsWithPerspective(&v61, &v89, &v90, 0LL);
  }
  else
  {
    v35 = sqrtf_0((float)(v23.m128_f32[0] * v23.m128_f32[0]) + (float)(v32 * v32));
    v36 = sqrtf_0((float)(v24.m128_f32[0] * v24.m128_f32[0]) + (float)(v30 * v30));
    v89 = v35;
    v90 = v36;
  }
  v37 = *((unsigned int *)this + 10);
  LODWORD(v80) = v37;
  HIDWORD(v80) = v37;
  v38 = 8 * v37;
  if ( v38 )
  {
    if ( this != (CDrawingContext **)-8LL && v38 <= 0x28 )
    {
      memcpy_0(v78, this + 1, v38);
      goto LABEL_26;
    }
    v79 = 0LL;
    memset(v78, 0, sizeof(v78));
    if ( this == (CDrawingContext **)-8LL )
    {
      *_errno() = 22;
LABEL_60:
      _invalid_parameter_noinfo();
      goto LABEL_26;
    }
    if ( v38 > 0x28 )
    {
      *_errno() = 34;
      goto LABEL_60;
    }
  }
LABEL_26:
  if ( *(_QWORD *)a2 )
  {
    *((_QWORD *)v78 + (unsigned int)v80) = *(_QWORD *)a2;
    LODWORD(v80) = v80 + 1;
  }
  HIDWORD(v81) = *((_DWORD *)a2 + 4) & ((1 << SBYTE4(v80)) - 1);
  if ( HIDWORD(v81) )
  {
    v49 = *(_OWORD *)((char *)a2 + 20);
    v50 = *(_OWORD *)((char *)a2 + 36);
    v84 = *((_DWORD *)a2 + 13);
    v51 = *((_DWORD *)a2 + 22);
    v82 = v49;
    v52 = *(_OWORD *)((char *)a2 + 56);
    v87 = v51;
    v83 = v50;
    v53 = *(_OWORD *)((char *)a2 + 72);
    v85 = v52;
    v86 = v53;
  }
  v91 = !*((_BYTE *)a2 + 94)
     && CDrawingContext::IsWarpFastPathEnabled(*this)
     && ((unsigned int (__fastcall *)(void ***))(*v66)[1])(v66) == 1
     && !HIDWORD(v81);
  DrawListWorker = CBrushDrawListGenerator::GenerateDrawListWorker((struct CBrushDrawListGenerator::GenerateDrawListParameters *)v65);
  v41 = DrawListWorker;
  if ( DrawListWorker < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListWorker, 0x137u, 0LL);
  }
  else if ( *((_QWORD *)a3 + 10) )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(a3, v40, 0LL, 0LL);
    v41 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x335u, 0LL);
    v43 = *((_QWORD *)a3 + 10);
    *((_QWORD *)a3 + 10) = 0LL;
    if ( v43 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
    _mm_lfence();
    v44 = *((_QWORD *)a3 + 11);
    *((_QWORD *)a3 + 11) = 0LL;
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
    v45 = *((_QWORD *)a3 + 12);
    *((_QWORD *)a3 + 12) = 0LL;
    if ( v45 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 8LL))(v45);
    v46 = *((_QWORD *)a3 + 13);
    *((_QWORD *)a3 + 13) = 0LL;
    if ( v46 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 8LL))(v46);
    if ( v41 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x13Cu, 0LL);
  }
  if ( v69 && v68 )
    (**v68)(v68, 1LL);
  return (unsigned int)v41;
}
