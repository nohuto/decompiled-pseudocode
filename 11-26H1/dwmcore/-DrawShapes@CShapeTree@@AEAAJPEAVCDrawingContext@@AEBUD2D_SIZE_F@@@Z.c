/*
 * XREFs of ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180040050
 * Callers:
 *     ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180013130 (-Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005CEB0 (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x18000A17C (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180012950 (-ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?Pop@CDrawingContext@@QEAAJXZ @ 0x18003EE08 (-Pop@CDrawingContext@@QEAAJXZ.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18003F1EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?_Tidy@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXXZ @ 0x18003FBF8 (-_Tidy@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXXZ.c)
 *     ?clear@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18003FC80 (-clear@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansi.c)
 *     ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x1800409FC (-Clear@CMatrixStack2D@@QEAAXXZ.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180040BC0 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CRectanglesShape@@AEAAXXZ @ 0x1800BAC70 (-Reset@CRectanglesShape@@AEAAXXZ.c)
 *     ?push_back@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BE350 (-push_back@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeed.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800C70F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x1800C8C10 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x180158F04 (-MarkCurrentState@CDrawingContext@@QEAAJXZ.c)
 *     ??1CShapeDrawingContext@@QEAA@XZ @ 0x18019CC78 (--1CShapeDrawingContext@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeTree::DrawShapes(__m128 *this, struct CDrawingContext *a2, const struct D2D_SIZE_F *a3)
{
  __m128 v3; // xmm6
  char v4; // r13
  float height; // xmm12_4
  float width; // xmm13_4
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  int *v13; // r14
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  _OWORD *v18; // rax
  const struct CShape *v19; // rax
  const struct CShape *v20; // rsi
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // esi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __m128 si128; // xmm12
  int v28; // ebx
  __m128 v29; // xmm13
  __m128i v30; // xmm14
  __m128i v31; // xmm15
  __int64 v32; // rcx
  int v33; // eax
  __m128 v34; // xmm6
  float v35; // xmm7_4
  float v36; // xmm9_4
  float v37; // xmm10_4
  float v38; // xmm8_4
  __m128 v39; // xmm2
  __int64 v40; // rcx
  int v41; // eax
  __m128 v42; // xmm1
  float v43; // xmm0_4
  __m128 v44; // xmm6
  float v45; // xmm0_4
  __m128 v46; // xmm6
  float v47; // xmm1_4
  __m128 v48; // xmm6
  float v49; // xmm0_4
  float v50; // xmm6_4
  float v51; // xmm0_4
  float v52; // xmm0_4
  int v53; // eax
  int v54; // eax
  void *v55; // rbx
  int v56; // edx
  int v58; // eax
  HANDLE ProcessHeap; // rax
  __m128 v60; // xmm6
  __m128 v61; // xmm6
  __m128 v62; // xmm6
  __m128 v63; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v64; // [rsp+50h] [rbp-B8h] BYREF
  int v65; // [rsp+A8h] [rbp-60h]
  __int64 v66; // [rsp+B8h] [rbp-50h] BYREF
  const struct CShape *v67; // [rsp+C0h] [rbp-48h]
  __int64 v68; // [rsp+C8h] [rbp-40h]
  __int64 v69; // [rsp+D0h] [rbp-38h]
  LPVOID lpMem; // [rsp+D8h] [rbp-30h]
  int v71; // [rsp+E0h] [rbp-28h]
  __int64 v72; // [rsp+E4h] [rbp-24h]
  int v73; // [rsp+ECh] [rbp-1Ch]
  void *v74[3]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v75[13]; // [rsp+108h] [rbp+0h] BYREF
  int v76; // [rsp+170h] [rbp+68h]
  __int16 v77; // [rsp+174h] [rbp+6Ch]
  _QWORD v78[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  __m128 v79; // [rsp+208h] [rbp+100h]
  __m128 v80; // [rsp+218h] [rbp+110h]
  __m128 v81; // [rsp+228h] [rbp+120h]
  __m128i v82; // [rsp+238h] [rbp+130h]
  __m128i v83; // [rsp+248h] [rbp+140h]
  int v84; // [rsp+258h] [rbp+150h]
  __m128 v85; // [rsp+25Ch] [rbp+154h]
  __m128 v86; // [rsp+26Ch] [rbp+164h]
  __m128i v87; // [rsp+27Ch] [rbp+174h]
  __m128i v88; // [rsp+28Ch] [rbp+184h]
  int v89; // [rsp+29Ch] [rbp+194h]
  float v90; // [rsp+2A0h] [rbp+198h]
  float v91; // [rsp+2A4h] [rbp+19Ch]
  __int128 v92; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v93; // [rsp+2B8h] [rbp+1B0h]
  __int16 v94; // [rsp+2C0h] [rbp+1B8h]

  v3 = this[5];
  v4 = 0;
  v63 = v3;
  if ( !this[6].m128_i8[1] )
    return 0LL;
  height = a3->height;
  width = a3->width;
  v10 = _mm_shuffle_ps(v3, v3, 170).m128_f32[0];
  LODWORD(v11) = _mm_shuffle_ps(v3, v3, 85).m128_u32[0];
  LODWORD(v12) = _mm_shuffle_ps(v3, v3, 255).m128_u32[0];
  if ( v10 <= v3.m128_f32[0] || v12 <= v11 || v3.m128_f32[0] >= 0.0 && v11 >= 0.0 && width >= v10 && height >= v12 )
  {
    v13 = (int *)((char *)a2 + 288);
    goto LABEL_29;
  }
  v14 = CDrawingContext::MarkCurrentState(a2);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v75[11] = 0x2A993F800000LL;
    v67 = 0LL;
    LOBYTE(v68) = 0;
    v4 = 1;
    v69 = 0LL;
    lpMem = (LPVOID)0x3F80000000000000LL;
    memset(&v75[3], 0, 64);
    v75[12] = 0LL;
    v76 = 0;
    v77 = 0;
    if ( *((_BYTE *)a2 + 7936) )
    {
      if ( *((_BYTE *)a2 + 7937) )
        v16 = *((_QWORD *)a2 + 401);
      else
        v16 = *((_QWORD *)a2 + 994);
    }
    else
    {
      v16 = 0LL;
    }
    v13 = (int *)((char *)a2 + 288);
    v66 = v16;
    v17 = *((_DWORD *)a2 + 72);
    if ( v17 )
      v18 = (_OWORD *)(*((_QWORD *)a2 + 35) + 68LL * (unsigned int)(v17 - 1));
    else
      v18 = &CMILMatrix::Identity;
    *(_OWORD *)((char *)&v75[3] + 4) = *v18;
    *(_OWORD *)((char *)&v75[5] + 4) = v18[1];
    *(_OWORD *)((char *)&v75[7] + 4) = v18[2];
    *(_OWORD *)((char *)&v75[9] + 4) = v18[3];
    HIDWORD(v75[11]) = *((_DWORD *)v18 + 16);
    v19 = (const struct CShape *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
    v20 = v19;
    if ( v19 )
    {
      *((_QWORD *)v19 + 1) = 0LL;
      *(_QWORD *)v19 = &CRectanglesShape::`vftable';
      *((_QWORD *)v19 + 2) = (char *)v19 + 40;
      *((_QWORD *)v19 + 3) = (char *)v19 + 40;
      *((_QWORD *)v19 + 4) = (char *)v19 + 56;
      *((_QWORD *)v19 + 7) = 0LL;
      CRectanglesShape::Reset(v19);
      *((_QWORD *)&v64 + 1) = __PAIR64__(LODWORD(height), LODWORD(width));
      *(_QWORD *)&v64 = 0LL;
      detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::push_back(
        (char *)v20 + 16,
        &v64);
    }
    else
    {
      v20 = 0LL;
    }
    if ( (_BYTE)v68 && v67 )
      (**(void (__fastcall ***)(const struct CShape *, __int64))v67)(v67, 1LL);
    v67 = v20;
    LOBYTE(v68) = 1;
    if ( v20 )
    {
      v21 = *((_QWORD *)a2 + 93);
      if ( v21 != *((_QWORD *)a2 + 92) && *(_QWORD *)(v21 - 176) && *(_QWORD *)(*((_QWORD *)a2 + 336) - 24LL)
        || !CCpuClippingData::ShouldRealizeCpuClipOnGpu(v20, (const struct CMILMatrix *)((char *)&v75[3] + 4)) )
      {
        LOBYTE(v76) = 1;
      }
      v22 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(a2);
      v23 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xCC7u, 0LL);
    }
    else
    {
      v23 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xCBDu, 0LL);
    }
    if ( (_BYTE)v68 && v67 )
      (**(void (__fastcall ***)(const struct CShape *, __int64))v67)(v67, 1LL);
    if ( (v23 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x13Du, 0LL);
      goto LABEL_57;
    }
LABEL_29:
    v24 = *v13;
    v65 = 0;
    if ( v24 )
    {
      v25 = (unsigned int)(v24 - 1);
      v26 = *((_QWORD *)a2 + 35);
      si128 = *(__m128 *)(68 * v25 + v26);
      v28 = *(_DWORD *)(68 * v25 + v26 + 64);
      v29 = *(__m128 *)(68 * v25 + v26 + 16);
      v30 = *(__m128i *)(68 * v25 + v26 + 32);
      v31 = *(__m128i *)(68 * v25 + v26 + 48);
    }
    else
    {
      si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
      v29 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
      v30 = _mm_load_si128((const __m128i *)&_xmm);
      v31 = _mm_load_si128((const __m128i *)&_xmm);
      BYTE1(v65) = BYTE1(v65) & 0xC0 | 0x29;
      LOBYTE(v65) = -86;
      v28 = v65;
    }
    v32 = *((_QWORD *)a2 + 93);
    if ( v32 == *((_QWORD *)a2 + 92) )
    {
      v34 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
      goto LABEL_50;
    }
    if ( *(_QWORD *)(v32 - 184) )
    {
      v33 = *((_DWORD *)a2 + 778);
      if ( !v33 )
      {
        v39 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        LODWORD(v35) = _mm_shuffle_ps(v39, v39, 255).m128_u32[0];
        LODWORD(v36) = _mm_shuffle_ps(v39, v39, 170).m128_u32[0];
        v34 = v39;
        LODWORD(v38) = _mm_shuffle_ps(v39, v39, 85).m128_u32[0];
        v37 = v39.m128_f32[0];
        v63 = v39;
        goto LABEL_36;
      }
      v34 = *(__m128 *)(*((_QWORD *)a2 + 388) + 16LL * (unsigned int)(v33 - 1));
      LODWORD(v35) = _mm_shuffle_ps(v34, v34, 255).m128_u32[0];
      LODWORD(v36) = _mm_shuffle_ps(v34, v34, 170).m128_u32[0];
      v37 = v34.m128_f32[0];
      LODWORD(v38) = _mm_shuffle_ps(v34, v34, 85).m128_u32[0];
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __m128 *))(**(_QWORD **)(v32 - 192) + 88LL))(*(_QWORD *)(v32 - 192), &v63);
      v60 = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 225);
      v60.m128_f32[0] = 0.0;
      v37 = 0.0;
      v61 = _mm_shuffle_ps(v60, v60, 198);
      v38 = 0.0;
      v36 = (float)v63.m128_i32[0];
      v35 = (float)v63.m128_i32[1];
      v61.m128_f32[0] = (float)v63.m128_i32[0];
      v62 = _mm_shuffle_ps(v61, v61, 39);
      v62.m128_f32[0] = (float)v63.m128_i32[1];
      v34 = _mm_shuffle_ps(v62, v62, 57);
    }
    v39 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
    v63 = v34;
LABEL_36:
    v40 = *((_QWORD *)a2 + 93);
    if ( v40 != *((_QWORD *)a2 + 92) && *(_QWORD *)(v40 - 168) )
    {
      v41 = *((_DWORD *)a2 + 784);
      if ( v41 )
        v42 = *(__m128 *)(*((_QWORD *)a2 + 391) + 16LL * (unsigned int)(v41 - 1));
      else
        v42 = v39;
      if ( v42.m128_f32[0] > v37 )
      {
        v34 = v63;
        v37 = v42.m128_f32[0];
        v34.m128_f32[0] = v42.m128_f32[0];
        v63 = v34;
      }
      v43 = _mm_shuffle_ps(v42, v42, 85).m128_f32[0];
      if ( v43 > v38 )
      {
        v38 = v43;
        v44 = _mm_shuffle_ps(v63, v63, 225);
        v44.m128_f32[0] = v43;
        v34 = _mm_shuffle_ps(v44, v44, 225);
        v63 = v34;
      }
      v45 = _mm_shuffle_ps(v42, v42, 170).m128_f32[0];
      if ( v36 > v45 )
      {
        v36 = v45;
        v46 = _mm_shuffle_ps(v63, v63, 210);
        v46.m128_f32[0] = v45;
        v34 = _mm_shuffle_ps(v46, v46, 201);
        v63 = v34;
      }
      v47 = _mm_shuffle_ps(v42, v42, 255).m128_f32[0];
      if ( v35 > v47 )
      {
        v35 = v47;
        v48 = _mm_shuffle_ps(v63, v63, 147);
        v48.m128_f32[0] = v47;
        v34 = _mm_shuffle_ps(v48, v48, 57);
        v63 = v34;
      }
      if ( v36 <= v37 || v35 <= v38 )
      {
        v63 = 0uLL;
        v34 = 0u;
      }
    }
LABEL_50:
    v72 = 0LL;
    v74[0] = v75;
    lpMem = 0LL;
    v74[1] = v75;
    v74[2] = v78;
    v73 = 0;
    HIDWORD(v69) = 1;
    HIDWORD(v66) = 0;
    v67 = 0LL;
    v68 = 0LL;
    v71 = 0;
    CMatrixStack2D::Clear((CMatrixStack2D *)v74);
    v78[1] = *a3;
    v92 = 0LL;
    v49 = _mm_shuffle_ps(si128, si128, 85).m128_f32[0];
    v80 = si128;
    v85 = si128;
    v78[0] = a2;
    v84 = v28;
    v89 = v28;
    v79 = v34;
    v81 = v29;
    v82 = v30;
    v83 = v31;
    v86 = v29;
    v93 = 0LL;
    v87 = v30;
    v88 = v31;
    v50 = sqrtf_0((float)(v49 * v49) + (float)(si128.m128_f32[0] * si128.m128_f32[0]));
    v51 = _mm_shuffle_ps(v29, v29, 85).m128_f32[0];
    v52 = sqrtf_0((float)(v51 * v51) + (float)(v29.m128_f32[0] * v29.m128_f32[0]));
    v90 = v50;
    v91 = v52;
    CMatrixStack2D::Clear((CMatrixStack2D *)v74);
    if ( (_QWORD)v92 != *((_QWORD *)&v92 + 1) )
      *((_QWORD *)&v92 + 1) = v92;
    v94 = 0;
    v53 = CShapeTreeIterator::Walk<CShapeDrawingContext>(&v66, this, &v66);
    v23 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x14Cu, 0LL);
      std::vector<CShapeRenderTask>::_Tidy((__int64)&v92);
      detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear((__int64 *)v74);
      detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(v74);
      operator delete(lpMem);
    }
    else
    {
      v54 = CShapeDrawingContext::Render((CShapeDrawingContext *)&v66);
      v23 = v54;
      if ( v54 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x14Du, 0LL);
        CShapeDrawingContext::~CShapeDrawingContext((CShapeDrawingContext *)&v66);
      }
      else
      {
        std::vector<CShapeRenderTask>::_Tidy((__int64)&v92);
        detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear((__int64 *)v74);
        detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(v74);
        v55 = lpMem;
        if ( lpMem )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v55);
        }
      }
    }
    if ( !v4 )
      return v23;
LABEL_57:
    v64 = 0LL;
    while ( 1 )
    {
      v56 = *((_DWORD *)a2 + 66);
      if ( !v56 )
        break;
      if ( *(_DWORD *)(*((_QWORD *)a2 + 32) + 16LL * (unsigned int)(v56 - 1)) == 12 )
      {
        *((_DWORD *)a2 + 66) = v56 - 1;
        return v23;
      }
      v58 = CDrawingContext::Pop(a2);
      if ( v58 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x1038u, 0LL);
    }
    return v23;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x13Au, 0LL);
  return v15;
}
