/*
 * XREFs of ?IsIntelWorkaroundNeeded@COverlayContext@@IEBA_NAEBUtagRECT@@00@Z @ 0x1801D8264
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_NAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x1802398DC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 */

char __fastcall COverlayContext::IsIntelWorkaroundNeeded(
        COverlayContext *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  char v4; // bl
  __int32 v7; // xmm2_4
  float v8; // xmm7_4
  float v9; // xmm6_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  tagRECT rcDst; // [rsp+20h] [rbp-58h] BYREF

  v4 = 0;
  if ( *((_BYTE *)this + 48) && !*((_BYTE *)this + 44) )
  {
    rcDst = 0LL;
    IntersectRect(&rcDst, a3, a4);
    COERCE_FLOAT(v7 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    v8 = (float)(rcDst.bottom - rcDst.top) / (float)(a3->bottom - a3->top);
    v9 = (float)((float)(rcDst.right - rcDst.left) / (float)(a3->right - a3->left)) * (float)(a2->right - a2->left);
    if ( COERCE_FLOAT(LODWORD(v9) & v7) < 8388608.0 )
    {
      v10 = floorf_0(v9);
      v7 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      v9 = (float)(int)v10;
    }
    v11 = (float)(a2->bottom - a2->top) * v8;
    if ( COERCE_FLOAT(LODWORD(v11) & v7) < 8388608.0 )
      v11 = (float)(int)floorf_0(v11);
    if ( (unsigned int)((int)v9 - 129) > 0xF7D || (unsigned int)((int)v11 - 1) > 0xFFE )
      return 1;
  }
  return v4;
}
