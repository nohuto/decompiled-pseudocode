/*
 * XREFs of ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180202920
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180186130 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180189280 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801FDB90 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1802021A4 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180265C90 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180265FF0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1802661C0 (-HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 *     ?GetDirtyRegion@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180283700 (-GetDirtyRegion@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectangl.c)
 *     ?GetLayoutParameters@CSwapchainRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@3PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1802837E0 (-GetLayoutParameters@CSwapchainRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEA.c)
 * Callees:
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x180009DA8 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x180186600 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x180189610 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x1801896D0 (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCompositionSurfaceBitmap::CalcImageTransform(
        CCompositionSurfaceBitmap *this,
        struct D2D_SIZE_F *a2,
        CMILMatrix *a3,
        struct D2D_RECT_F *a4,
        _QWORD *a5)
{
  char v5; // si
  struct IBitmapRealization *RenderingRealization; // rax
  int SizePreference; // r12d
  float v12; // xmm6_4
  __int32 v13; // xmm1_4
  float v14; // xmm5_4
  float height; // xmm4_4
  float width; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  struct D2D_RECT_F v21; // [rsp+48h] [rbp-41h] BYREF
  __m128i v22; // [rsp+58h] [rbp-31h] BYREF
  __m128i si128; // [rsp+68h] [rbp-21h]
  __m128i v24; // [rsp+78h] [rbp-11h]
  __m128i v25; // [rsp+88h] [rbp-1h]
  int v26; // [rsp+98h] [rbp+Fh]

  v5 = 0;
  RenderingRealization = CCompositionSurfaceBitmap::GetRenderingRealization(this);
  if ( RenderingRealization )
  {
    v5 = (*(__int64 (__fastcall **)(struct IBitmapRealization *, struct D2D_RECT_F *, _QWORD *, CMILMatrix *))(*(_QWORD *)RenderingRealization + 48LL))(
           RenderingRealization,
           a4,
           a5,
           a3);
    SizePreference = CCompositionSurfaceBitmap::GetSizePreference((__int64)this);
    if ( CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a2) && SizePreference != 1 && !IsEmpty(a4) )
    {
      v21 = 0LL;
      if ( v5 )
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)a3, a4, &v21.left);
      else
        v21 = *a4;
      v12 = v21.right - v21.left;
      COERCE_FLOAT(v13 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      v14 = v21.bottom - v21.top;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2->width - (float)(v21.right - v21.left)) & v13) > 0.00390625
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(a2->height - v14) & v13) > 0.00390625 )
      {
        height = a2->height;
        v26 = 0;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        v25 = _mm_load_si128((const __m128i *)&_xmm);
        width = a2->width;
        v22 = _mm_load_si128((const __m128i *)&_xmm);
        v24 = _mm_load_si128((const __m128i *)&_xmm);
        LOBYTE(v26) = -86;
        *(_WORD *)((char *)&v26 + 1) = 41;
        v17 = width / v12;
        if ( SizePreference )
        {
          v18 = 0.0;
          v19 = 0.0;
          if ( height < (float)(v17 * v14) )
          {
            v17 = height / v14;
            v18 = (float)(a2->width - (float)((float)(height / v14) * v12)) * 0.5;
          }
          else
          {
            v19 = (float)(height - (float)(v17 * v14)) * 0.5;
          }
          v26 = 10632;
          *(float *)v22.m128i_i32 = v17;
          *(float *)&si128.m128i_i32[1] = v17;
          v25.m128i_i64[0] = __PAIR64__(LODWORD(v19), LODWORD(v18));
        }
        else
        {
          CMILMatrix::SetScale((CMILMatrix *)&v22, v17, height / v14, 1.0, 0.0, 0.0, 0.0);
        }
        CMILMatrix::Multiply(a3, (const struct CMILMatrix *)&v22);
        return 1;
      }
    }
  }
  else
  {
    *(_QWORD *)a3 = 1065353216LL;
    *((_QWORD *)a3 + 1) = 0LL;
    *((_DWORD *)a3 + 4) = 0;
    *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
    *(_QWORD *)((char *)a3 + 28) = 0LL;
    *((_DWORD *)a3 + 9) = 0;
    *((_QWORD *)a3 + 5) = 1065353216LL;
    *((_QWORD *)a3 + 6) = 0LL;
    *((_DWORD *)a3 + 14) = 0;
    *((_DWORD *)a3 + 15) = 1065353216;
    *((_BYTE *)a3 + 65) &= 0xE9u;
    *((_BYTE *)a3 + 65) |= 0x29u;
    *((_BYTE *)a3 + 64) = -86;
    a5[1] = 0LL;
    *a5 = 0LL;
    *(_QWORD *)&a4->right = 0LL;
    *(_QWORD *)&a4->left = 0LL;
  }
  return v5;
}
