/*
 * XREFs of ?InferViewportTransform@CSurfaceBrush@@IEAAJAEBUtagRECT@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180083834
 * Callers:
 *     ?ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z @ 0x180083CD4 (-ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?ApplyViewportTransformForClippedView@CSurfaceBrush@@QEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18009B228 (-ApplyViewportTransformForClippedView@CSurfaceBrush@@QEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x1800ADF80 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 * Callees:
 *     ?GetRealizationSize@CSurfaceBrush@@QEBAJPEAUD2D_SIZE_F@@@Z @ 0x180083974 (-GetRealizationSize@CSurfaceBrush@@QEBAJPEAUD2D_SIZE_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidRealizationSize@@YA_NAEBUD2D_SIZE_F@@@Z @ 0x18009B658 (-IsValidRealizationSize@@YA_NAEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CSurfaceBrush::InferViewportTransform(
        CSurfaceBrush *this,
        const struct tagRECT *a2,
        struct tagRECT *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  int RealizationSize; // eax
  unsigned int v8; // edi
  __int64 result; // rax
  unsigned int v10; // eax
  float v11; // xmm0_4
  float v12; // xmm1_4
  __m128i v13; // xmm6
  int v14; // eax
  float v15; // xmm6_4
  float v16; // xmm7_4
  D2D_SIZE_F v17; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v17 = 0LL;
  RealizationSize = CSurfaceBrush::GetRealizationSize(this, &v17);
  v8 = RealizationSize;
  if ( RealizationSize >= 0 )
  {
    if ( IsValidRealizationSize(&v17) )
    {
      v10 = 0;
      v11 = 0.0;
      v12 = 0.0;
      if ( a2->right - a2->left >= 0 )
        v10 = a2->right - a2->left;
      v13 = _mm_cvtsi32_si128(v10);
      v14 = 0;
      if ( a2->bottom - a2->top >= 0 )
        v14 = a2->bottom - a2->top;
      v15 = _mm_cvtepi32_ps(v13).m128_f32[0] / v17.width;
      v16 = (float)v14 / v17.height;
      if ( a3 )
      {
        IntersectRect(a3, a3, a2);
        v11 = (float)(a2->left - a3->left);
        v12 = (float)(a2->top - a3->top);
      }
      a4->m11 = v15;
      result = 0LL;
      *(_QWORD *)&a4->m[0][1] = 0LL;
      a4->m22 = v16;
      a4->dx = v11;
      a4->dy = v12;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
        (const char *)0x88980007LL,
        SLODWORD(v17.width));
      return 2291662855LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
      (const char *)(unsigned int)RealizationSize,
      SLODWORD(v17.width));
    return v8;
  }
  return result;
}
