/*
 * XREFs of ?GetLayoutParameters@CSwapchainRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@3PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1802837E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180202920 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CSwapchainRenderStrategy::GetLayoutParameters(
        CSwapchainRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5,
        struct D2D_RECT_F *a6,
        struct D2D_MATRIX_3X2_F *a7)
{
  CCompositionSurfaceBitmap *v8; // rcx
  unsigned int v9; // ebx
  char v10; // r11
  float bottom; // xmm0_4
  float right; // xmm1_4
  float top; // xmm3_4
  float left; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  struct D2D_RECT_F v17; // xmm1
  __int64 v18; // xmm1_8
  __int128 v20; // [rsp+30h] [rbp-71h] BYREF
  _QWORD v21[8]; // [rsp+40h] [rbp-61h] BYREF
  int v22; // [rsp+80h] [rbp-21h]
  __int64 v23[2]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-1h]
  struct D2D_RECT_F v25; // [rsp+A8h] [rbp+7h] BYREF

  v8 = (CCompositionSurfaceBitmap *)*((_QWORD *)a2 + 23);
  v9 = 0;
  v25 = 0LL;
  v22 = 0;
  *(_OWORD *)v23 = 0LL;
  v10 = CCompositionSurfaceBitmap::CalcImageTransform(
          v8,
          (struct D2D_SIZE_F *)&`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::noLayout,
          (CMILMatrix *)v21,
          &v25,
          v23);
  v20 = 0LL;
  if ( v10 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v21, &v25, (float *)&v20);
    bottom = *((float *)&v20 + 3);
    right = *((float *)&v20 + 2);
    top = *((float *)&v20 + 1);
    left = *(float *)&v20;
  }
  else
  {
    left = v25.left;
    top = v25.top;
    right = v25.right;
    bottom = v25.bottom;
  }
  v15 = right - left;
  if ( v15 == 0.0 || (v16 = bottom - top, v16 == 0.0) )
  {
    v9 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2003304441,
      0x4B0u,
      0LL);
  }
  else
  {
    a4->height = v16;
    a4->width = v15;
    v17 = *(struct D2D_RECT_F *)v23;
    *a5 = v25;
    *a6 = v17;
    if ( v10 )
    {
      v23[0] = v21[0];
      v23[1] = v21[2];
      v24 = v21[6];
    }
    else
    {
      *(__m128i *)v23 = _mm_load_si128((const __m128i *)&_xmm);
      v24 = 0LL;
    }
    v18 = v24;
    *(_OWORD *)&a7->m11 = *(_OWORD *)v23;
    *(_QWORD *)&a7->m[2][0] = v18;
  }
  return v9;
}
