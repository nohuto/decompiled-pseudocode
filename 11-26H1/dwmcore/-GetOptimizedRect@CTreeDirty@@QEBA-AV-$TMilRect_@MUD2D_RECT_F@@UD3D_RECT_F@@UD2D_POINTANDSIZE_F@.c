/*
 * XREFs of ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x180201808
 * Callers:
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180057560 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800EDF9C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180022120 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z @ 0x1800CB340 (-GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800CE6C0 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800CEA3C (-CalcSubtractionRectangles@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QE.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x18012DEA8 (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?GetLargestOccluder@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NHPEAV2@@Z @ 0x180171FB0 (-GetLargestOccluder@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801744A0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??A?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K@Z @ 0x1801A4F38 (--A-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUnique.c)
 *     ?SubtractionIsSingleRect@@YA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801B6974 (-SubtractionIsSingleRect@@YA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UN.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?AddToTightDirtyRegion@@YAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAVCRegion@@@Z @ 0x1802373D4 (-AddToTightDirtyRegion@@YAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotN.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeDirty::GetOptimizedRect(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const struct D2D_RECT_F *a4,
        __int64 a5,
        CRegion *a6,
        __int64 a7,
        _QWORD *a8)
{
  double v8; // xmm2_8
  __int64 v9; // r14
  __int64 v10; // r10
  __m128i v11; // xmm6
  const struct D2D_RECT_F *v12; // r15
  unsigned __int64 v14; // r12
  struct tagRECT *v16; // rdx
  struct tagRECT *v17; // rcx
  int *v18; // rax
  unsigned __int64 v19; // xmm0_8
  _DWORD *v20; // rdx
  __int64 v21; // rdx
  float *v22; // rax
  float v23; // xmm6_4
  _QWORD *v24; // rax
  _QWORD *v25; // r13
  _QWORD *v26; // r15
  _QWORD *v27; // rcx
  _QWORD *v28; // rdx
  const struct CVisualTree *v29; // rdx
  int v30; // eax
  __int64 v31; // r12
  int v32; // esi
  __int64 v33; // r8
  int v34; // eax
  __m128 *v35; // rdx
  __int64 v36; // r10
  FastRegion::CRegion **v37; // rsi
  __int64 v38; // r12
  float top; // xmm0_4
  float right; // xmm1_4
  float bottom; // xmm1_4
  __m128 v43; // [rsp+38h] [rbp-C1h] BYREF
  struct D2D_RECT_F v44; // [rsp+48h] [rbp-B1h] BYREF
  unsigned int v45[2]; // [rsp+58h] [rbp-A1h]
  __int64 v46; // [rsp+60h] [rbp-99h]
  struct tagRECT v47; // [rsp+68h] [rbp-91h] BYREF
  const struct CVisualTree **v48; // [rsp+78h] [rbp-81h]
  const struct D2D_RECT_F *v49; // [rsp+80h] [rbp-79h]
  FastRegion::CRegion *v50[10]; // [rsp+88h] [rbp-71h] BYREF

  v9 = a7;
  v10 = a5;
  v11 = 0LL;
  v12 = a4;
  v49 = a4;
  v14 = a3;
  v48 = (const struct CVisualTree **)a1;
  v46 = a5;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v47 = 0LL;
  if ( a7 && CMILMatrix::IsIdentity<0>(a7) )
    v9 = 0LL;
  if ( a6 )
  {
    v16 = (struct tagRECT *)v12;
    if ( v9 )
    {
      v47 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(v9, v12, (float *)&v47.left);
      v16 = &v47;
      v17 = (struct tagRECT *)&v43;
    }
    else
    {
      v17 = &v47;
    }
    v18 = PixelAlign(&v17->left, (unsigned int *)v16, v8);
    v10 = v46;
    v11 = *(__m128i *)v18;
    v47 = *(struct tagRECT *)v18;
  }
  if ( *(_BYTE *)(a1 + 2324) )
  {
    *(struct D2D_RECT_F *)a2 = *v12;
    if ( a6 )
    {
      v19 = _mm_srli_si128(v11, 8).m128i_u64[0];
      if ( v11.m128i_i32[0] >= (int)v19 || v11.m128i_i32[1] >= SHIDWORD(v19) )
      {
        **(_DWORD **)a6 = 0;
      }
      else
      {
        v20 = *(_DWORD **)a6;
        *v20 = 2;
        v20[1] = v11.m128i_i32[0];
        v20[3] = v11.m128i_i32[1];
        v20[2] = v19;
        v20[4] = 16;
        v20[7] = v11.m128i_i32[0];
        v20[8] = v19;
        v20[5] = HIDWORD(v19);
        v20[6] = 16;
      }
    }
  }
  else
  {
    v21 = *(unsigned int *)(a1 + 16);
    v45[0] = *(_DWORD *)(v10 + 1096);
    gsl::details::extent_type<-1>::extent_type<-1>(&v43, v21);
    v43.m128_u64[1] = a1 + 20;
    if ( v43.m128_u64[0] == -1LL || a1 == -20 && v43.m128_u64[0] )
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    v22 = (float *)gsl::span<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> const,-1>::operator[](
                     (unsigned __int64 *)&v43,
                     v14);
    v23 = (float)((float)(v22[3] - v22[1]) * (float)(v22[2] - *v22)) * 0.25;
    if ( a6 )
      AddToTightDirtyRegion(a2, v9, a6);
    v24 = (_QWORD *)(16 * v14 + a1 + 456);
    v25 = (_QWORD *)*v24;
    if ( (_QWORD *)*v24 != v24 )
    {
      v26 = v24;
      do
      {
        v27 = (_QWORD *)a8[1];
        v28 = &v27[*a8];
        while ( v27 != v28 )
        {
          if ( *v27 == v25[2] )
            goto LABEL_50;
          ++v27;
        }
        v29 = *v48;
        v43 = *(__m128 *)(v25 + 3);
        v30 = CDirtyRegionAnnotation::GetZ((CDirtyRegionAnnotation *)v25, v29, v45[0]);
        v31 = v46;
        v32 = v30;
        if ( !COcclusionContext::IsOccluded(v46, &v43, v30, 0) )
        {
          v44 = 0LL;
          if ( (float)((float)(v43.m128_f32[2] - v43.m128_f32[0]) * (float)(v43.m128_f32[3] - v43.m128_f32[1])) > v23
            && COcclusionContext::GetLargestOccluder(v31, &v43, 0, v32, &v44)
            && (a6 || SubtractionIsSingleRect(&v44.left, v43.m128_f32)) )
          {
            if ( v43.m128_f32[0] > v44.left )
              LODWORD(v44.left) = v43.m128_i32[0];
            if ( v43.m128_f32[1] > v44.top )
              LODWORD(v44.top) = v43.m128_i32[1];
            if ( v44.right > v43.m128_f32[2] )
              LODWORD(v44.right) = v43.m128_i32[2];
            if ( v44.bottom > v43.m128_f32[3] )
              LODWORD(v44.bottom) = v43.m128_i32[3];
            if ( IsEmpty(&v44) )
            {
              *(_QWORD *)&v44.right = 0LL;
              *(_QWORD *)&v44.left = 0LL;
            }
            `vector constructor iterator'(
              (char *)v50,
              16LL,
              4LL,
              (void (__fastcall *)(char *))TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>);
            v34 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
                    v43.m128_f32,
                    (__int64)&v44,
                    v33,
                    (__int64)v50,
                    4u);
            v35 = (__m128 *)v50;
            if ( v34 != 1 )
              v35 = &v43;
            TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a2, v35->m128_f32);
            if ( a6 && (_DWORD)v36 )
            {
              v37 = v50;
              v38 = v36;
              do
              {
                AddToTightDirtyRegion(v37, v9, a6);
                v37 += 2;
                --v38;
              }
              while ( v38 );
            }
          }
          else
          {
            TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a2, v43.m128_f32);
            if ( a6 )
              AddToTightDirtyRegion(&v43, v9, a6);
          }
        }
LABEL_50:
        v25 = (_QWORD *)*v25;
      }
      while ( v25 != v26 );
      v12 = v49;
    }
    if ( v12->left > *(float *)a2 )
      *(FLOAT *)a2 = v12->left;
    top = v12->top;
    if ( top > *(float *)(a2 + 4) )
      *(float *)(a2 + 4) = top;
    right = v12->right;
    if ( *(float *)(a2 + 8) > right )
      *(float *)(a2 + 8) = right;
    bottom = v12->bottom;
    if ( *(float *)(a2 + 12) > bottom )
      *(float *)(a2 + 12) = bottom;
    if ( IsEmpty((const struct D2D_RECT_F *)a2) )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
    if ( a6 )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v50, &v47);
      CRegion::Intersect(a6, (const struct CRegion *)v50);
      FastRegion::CRegion::FreeMemory(v50);
    }
  }
  return a2;
}
