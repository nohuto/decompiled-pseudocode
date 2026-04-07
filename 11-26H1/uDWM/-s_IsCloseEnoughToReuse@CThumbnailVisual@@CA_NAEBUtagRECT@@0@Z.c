/*
 * XREFs of ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NAEBUtagRECT@@0@Z @ 0x1800CAC70
 * Callers:
 *     ?GetVisualBrush@CThumbnailVisual@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAUD2D_POINT_3F@@@Z @ 0x1800C9C54 (-GetVisualBrush@CThumbnailVisual@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAUD2D_POINT_3F@@@Z.c)
 * Callees:
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NMM@Z @ 0x1800CACFC (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NMM@Z.c)
 */

bool __fastcall CThumbnailVisual::s_IsCloseEnoughToReuse(const struct tagRECT *a1, const struct tagRECT *a2)
{
  unsigned int v2; // eax
  __m128i v3; // xmm1
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // r10d
  __int64 v7; // r11
  unsigned int v8; // eax
  __m128i v9; // xmm1
  int v10; // eax

  v2 = 0;
  if ( a2->right - a2->left >= 0 )
    v2 = a2->right - a2->left;
  v3 = _mm_cvtsi32_si128(v2);
  v4 = 0;
  if ( a1->right - a1->left >= 0 )
    v4 = a1->right - a1->left;
  if ( CThumbnailVisual::s_IsCloseEnoughToReuse((float)v4, _mm_cvtepi32_ps(v3).m128_f32[0]) )
  {
    v8 = v6;
    if ( *(_DWORD *)(v5 + 12) - *(_DWORD *)(v5 + 4) >= 0 )
      v8 = *(_DWORD *)(v5 + 12) - *(_DWORD *)(v5 + 4);
    v9 = _mm_cvtsi32_si128(v8);
    v10 = v6;
    if ( *(_DWORD *)(v7 + 12) - *(_DWORD *)(v7 + 4) >= 0 )
      v10 = *(_DWORD *)(v7 + 12) - *(_DWORD *)(v7 + 4);
    if ( CThumbnailVisual::s_IsCloseEnoughToReuse((float)v10, _mm_cvtepi32_ps(v9).m128_f32[0]) )
      LOBYTE(v6) = 1;
  }
  return v6;
}
