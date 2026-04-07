/*
 * XREFs of ?AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@@AEBUD2D_POINTANDSIZE_F@@AEBUD2D_POINT_2F@@PEAU4@@Z @ 0x1800B2AA4
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?Contains@CDisplayModeChangeAnimationHelper@@CA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x1800B2C0C (-Contains@CDisplayModeChangeAnimationHelper@@CA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 *     ?GetDisplayFromFinalPosition@CDisplayModeChangeAnimationHelper@@CAPEBVCDWMDisplay@@PEBVCDWMDisplaySet@@AEBUD2D_POINT_2F@@@Z @ 0x1800B3370 (-GetDisplayFromFinalPosition@CDisplayModeChangeAnimationHelper@@CAPEBVCDWMDisplay@@PEBVCDWMDispl.c)
 */

void __fastcall CDisplayModeChangeAnimationHelper::AdjustMinimizeInitialPositionIfNeeded(
        const struct CDWMDisplaySet *a1,
        const struct D2D_POINTANDSIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        struct D2D_POINT_2F *a4)
{
  const struct CDWMDisplay *DisplayFromFinalPosition; // rax
  __m128i v7; // xmm12
  __m128i v8; // xmm2
  __m128i v9; // xmm3
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm12_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm6_4
  FLOAT v17; // xmm5_4
  float v18; // xmm7_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  FLOAT v21; // xmm7_4
  D2D_POINT_2F v22; // [rsp+20h] [rbp-88h] BYREF
  struct D2D_RECT_F v23; // [rsp+28h] [rbp-80h] BYREF

  DisplayFromFinalPosition = CDisplayModeChangeAnimationHelper::GetDisplayFromFinalPosition(a1, a3);
  if ( DisplayFromFinalPosition )
  {
    v7 = _mm_cvtsi32_si128(*((_DWORD *)DisplayFromFinalPosition + 15));
    v8 = _mm_cvtsi32_si128(*((_DWORD *)DisplayFromFinalPosition + 16));
    v9 = _mm_cvtsi32_si128(*((_DWORD *)DisplayFromFinalPosition + 17));
    v10 = *((float *)a2 + 2) * 0.5;
    v11 = *((float *)a2 + 3) * 0.5;
    v12 = (float)*((int *)DisplayFromFinalPosition + 14);
    v22.x = v10 + a4->x;
    v13 = _mm_cvtepi32_ps(v7).m128_f32[0];
    v14 = _mm_cvtepi32_ps(v8).m128_f32[0];
    v15 = _mm_cvtepi32_ps(v9).m128_f32[0];
    v22.y = v11 + a4->y;
    v16 = v13 - *((float *)a2 + 1);
    v17 = v14 - *(float *)a2;
    v18 = v15 - *((float *)a2 + 1);
    v23.left = v12 - *(float *)a2;
    v23.top = v16;
    v23.right = v17;
    v23.bottom = v18;
    if ( !CDisplayModeChangeAnimationHelper::Contains(&v23, &v22) )
    {
      v21 = fminf(v18, fmaxf(v16, (float)((float)((float)(v15 + v13) * 0.5) - *((float *)a2 + 1)) - v11));
      a4->x = fminf(v20, fmaxf(v19, (float)((float)((float)(v14 + v12) * 0.5) - *(float *)a2) - v10));
      a4->y = v21;
    }
  }
}
