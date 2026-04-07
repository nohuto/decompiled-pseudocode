/*
 * XREFs of ?GetDisplayFromFinalPosition@CDisplayModeChangeAnimationHelper@@CAPEBVCDWMDisplay@@PEBVCDWMDisplaySet@@AEBUD2D_POINT_2F@@@Z @ 0x1800B3370
 * Callers:
 *     ?AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@@AEBUD2D_POINTANDSIZE_F@@AEBUD2D_POINT_2F@@PEAU4@@Z @ 0x1800B2AA4 (-AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@.c)
 * Callees:
 *     ?DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z @ 0x1800582A8 (-DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z.c)
 *     ?Contains@CDisplayModeChangeAnimationHelper@@CA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x1800B2C0C (-Contains@CDisplayModeChangeAnimationHelper@@CA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 */

const struct CDWMDisplay *__fastcall CDisplayModeChangeAnimationHelper::GetDisplayFromFinalPosition(
        const struct CDWMDisplaySet *this,
        const struct D2D_POINT_2F *a2)
{
  const struct CDWMDisplaySet *v2; // r10
  unsigned int i; // r8d
  const struct CDWMDisplay *v4; // rax
  FLOAT v5; // xmm1_4
  __m128i v6; // xmm0
  FLOAT v7; // xmm1_4
  const struct D2D_POINT_2F *v8; // r11
  int v9; // r8d
  __int64 v10; // r9
  struct D2D_RECT_F v12; // [rsp+20h] [rbp-18h] BYREF

  v2 = this;
  for ( i = 0; i < *((_DWORD *)v2 + 16); i = v9 + 1 )
  {
    v4 = CDWMDisplaySet::DisplayNoRef(v2, i);
    v5 = (float)*((int *)v4 + 15);
    v12.left = (float)*((int *)v4 + 14);
    v6 = _mm_cvtsi32_si128(*((_DWORD *)v4 + 16));
    v12.top = v5;
    v7 = (float)*((int *)v4 + 17);
    LODWORD(v12.right) = _mm_cvtepi32_ps(v6).m128_u32[0];
    v12.bottom = v7;
    if ( CDisplayModeChangeAnimationHelper::Contains(&v12, v8) )
      return (const struct CDWMDisplay *)v10;
  }
  return 0LL;
}
