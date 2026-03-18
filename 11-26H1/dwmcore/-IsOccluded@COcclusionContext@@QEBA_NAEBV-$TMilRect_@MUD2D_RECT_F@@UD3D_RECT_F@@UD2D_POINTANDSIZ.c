/*
 * XREFs of ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800CE6C0
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091390 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x180201808 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180237470 (-GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV-$DynA.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800CDD20 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800CEA3C (-CalcSubtractionRectangles@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QE.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800CF010 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

char __fastcall COcclusionContext::IsOccluded(__int64 a1, __m128 *a2, int a3, char a4)
{
  __m128 v6; // xmm3
  float v7; // xmm4_4
  float v8; // xmm5_4
  float v9; // xmm6_4
  unsigned int v10; // esi
  __int64 v11; // rdi
  __int64 v12; // rax
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm7_4
  float v17; // xmm2_4
  float v18; // xmm9_4
  float v19; // xmm8_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  int v22; // eax
  float *v23; // r10
  __int64 v24; // r11
  CMILMatrix *v25; // rcx
  const struct D2D_RECT_F *v26; // r10
  float *v27; // r11
  float v28; // xmm7_4
  __int128 v29; // [rsp+38h] [rbp-49h] BYREF
  __int128 v30; // [rsp+48h] [rbp-39h] BYREF
  struct D2D_POINT_2F v31; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-21h]

  if ( a2->m128_f32[2] <= a2->m128_f32[0] || a2->m128_f32[3] <= a2->m128_f32[1] )
    return 1;
  if ( !a3 )
    return 0;
  if ( a4 || !*(_BYTE *)(a1 + 1124) )
  {
    v6 = *a2;
    LODWORD(v7) = _mm_shuffle_ps(v6, v6, 255).m128_u32[0];
    LODWORD(v8) = _mm_shuffle_ps(*a2, *a2, 170).m128_u32[0];
    LODWORD(v9) = _mm_shuffle_ps(*a2, *a2, 85).m128_u32[0];
  }
  else
  {
    v29 = 0LL;
    if ( CMILMatrix::IsTranslateIgnoreZ<1>(a1 + 1132) )
    {
      v6.m128_f32[0] = *(float *)(v24 + 48) + *v23;
      v8 = *(float *)(v24 + 48) + v23[2];
      v9 = *(float *)(v24 + 52) + v23[1];
      v7 = *(float *)(v24 + 52) + v23[3];
    }
    else if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v24) )
    {
      v28 = v27[5];
      v6.m128_f32[0] = (float)(*v27 * v26->left) + v27[12];
      v8 = (float)(*v27 * v26->right) + v27[12];
      v9 = (float)(v28 * v26->top) + v27[13];
      v7 = (float)(v28 * v26->bottom) + v27[13];
      if ( *v27 <= 0.0 || v28 <= 0.0 )
      {
        if ( v6.m128_f32[0] > v8 )
        {
          v6.m128_f32[0] = (float)(*v27 * v26->right) + v27[12];
          v8 = (float)(*v27 * v26->left) + v27[12];
        }
        if ( v9 > v7 )
        {
          v9 = (float)(v28 * v26->bottom) + v27[13];
          v7 = (float)(v27[5] * v26->top) + v27[13];
        }
      }
    }
    else
    {
      CMILMatrix::Transform2DRectToPerspective(v25, v26, &v31);
      *(_QWORD *)&v30 = 4LL;
      *((_QWORD *)&v30 + 1) = &v31;
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
        &v29,
        &v30);
      v7 = *((float *)&v29 + 3);
      v8 = *((float *)&v29 + 2);
      v6.m128_i32[0] = v29;
      v9 = *((float *)&v29 + 1);
    }
  }
  v10 = *(_DWORD *)(a1 + 608);
  if ( v8 <= v6.m128_f32[0] || v7 <= v9 )
    return 1;
  *(_QWORD *)&v29 = __PAIR64__(LODWORD(v9), v6.m128_u32[0]);
  v11 = 0LL;
  *((_QWORD *)&v29 + 1) = __PAIR64__(LODWORD(v7), LODWORD(v8));
  while ( (unsigned int)v11 < v10 )
  {
    v12 = *(_QWORD *)(a1 + 584);
    if ( *(_DWORD *)(v12 + 48 * v11 + 16) >= a3 )
      break;
    v14 = *(float *)(v12 + 48 * v11);
    v15 = *(float *)(v12 + 48 * v11 + 8);
    if ( v15 <= v14 )
      goto LABEL_29;
    v16 = *(float *)(v12 + 48 * v11 + 12);
    v17 = *(float *)(v12 + 48 * v11 + 4);
    if ( v16 <= v17 )
      goto LABEL_29;
    LODWORD(v31.x) = v6.m128_i32[0];
    v18 = v6.m128_f32[0];
    v31.y = v9;
    v32 = __PAIR64__(LODWORD(v7), LODWORD(v8));
    if ( v14 > v6.m128_f32[0] )
    {
      v31.x = v14;
      v18 = v14;
    }
    v19 = v9;
    if ( v17 > v9 )
    {
      v31.y = v17;
      v19 = v17;
    }
    v20 = v8;
    if ( v8 > v15 )
    {
      *(float *)&v32 = v15;
      v20 = v15;
    }
    v21 = v7;
    if ( v7 > v16 )
    {
      *((float *)&v32 + 1) = v16;
      v21 = v16;
    }
    if ( v20 <= v18 || v21 <= v19 )
    {
      v32 = 0LL;
      v31 = 0LL;
      goto LABEL_29;
    }
    v30 = 0LL;
    v22 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
            (unsigned int)&v29,
            (unsigned int)&v31,
            a3,
            (unsigned int)&v30,
            1);
    if ( !v22 )
      return 1;
    if ( v22 == 1 )
    {
      v6.m128_i32[0] = v30;
      v11 = (unsigned int)(v11 + 1);
      v9 = *((float *)&v30 + 1);
      v8 = *((float *)&v30 + 2);
      v7 = *((float *)&v30 + 3);
      v29 = v30;
    }
    else
    {
LABEL_29:
      v11 = (unsigned int)(v11 + 1);
    }
  }
  return 0;
}
