/*
 * XREFs of ?CalcOverlaySize@COverlayContext@@IEBA?AW4OverlaySize@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180211294
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_NAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x1802398DC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18018BF10 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::CalcOverlaySize(__int64 a1, __int64 a2)
{
  RECT *v2; // rbx
  __m128i v4; // xmm2
  char IsEquivalentTo; // al
  unsigned int v6; // r9d
  unsigned int left; // edx
  unsigned int v9; // esi
  unsigned __int32 v10; // xmm1_4
  unsigned int v11; // edi
  unsigned int top; // r8d
  int v13; // r8d
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  __m128i v17; // [rsp+20h] [rbp-28h] BYREF

  v2 = (RECT *)(a2 + 36);
  v4 = *(__m128i *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 256LL))(*(_QWORD *)(a1 + 56)) + 24);
  v17 = v4;
  IsEquivalentTo = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
                     (unsigned int *)v2,
                     &v17);
  v6 = 0;
  if ( IsEquivalentTo )
  {
    if ( *(int *)(a2 + 20) < 0 || *(int *)(a2 + 24) < 0 )
      return 3LL;
    else
      return 3 - (unsigned int)EqualRect((const RECT *)(a2 + 20), v2);
  }
  else
  {
    left = v2->left;
    v9 = _mm_cvtsi128_si32(v4);
    v10 = _mm_srli_si128(v4, 8).m128i_u32[0];
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 12));
    if ( v2->left != v9 )
      goto LABEL_17;
    if ( v2->right != v10 )
      goto LABEL_17;
    top = v2->top;
    if ( top <= v17.m128i_i32[1] || v2->bottom >= v11 )
      goto LABEL_17;
    v13 = v2->bottom + top - v11 - v17.m128i_i32[1];
    v14 = -v13;
    if ( v13 > 0 )
      v14 = v13;
    if ( v14 <= 1 )
    {
      return 1LL;
    }
    else
    {
LABEL_17:
      if ( v2->top == v17.m128i_i32[1] && v2->bottom == v11 && left > v9 && v2->right < v10 )
      {
        v15 = v2->right + left - v10 - v9;
        v16 = -v15;
        if ( v15 > 0 )
          v16 = v15;
        LOBYTE(v6) = v16 <= 1;
        return v6;
      }
      else
      {
        return 0LL;
      }
    }
  }
}
