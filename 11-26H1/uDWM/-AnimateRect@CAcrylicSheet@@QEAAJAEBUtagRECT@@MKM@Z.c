/*
 * XREFs of ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKM@Z @ 0x1800957FC
 * Callers:
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800DFA18 (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180042604 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 */

__int64 __fastcall CAcrylicSheet::AnimateRect(CAcrylicSheet *this, const struct tagRECT *a2, float a3)
{
  __int64 v3; // r8
  _BYTE v5[40]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v6[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v7; // [rsp+80h] [rbp-18h]

  memset(v5, 0, 24);
  *(__m128i *)&v5[24] = _mm_load_si128((const __m128i *)&_xmm);
  v6[0] = *(_OWORD *)v5;
  v7 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v5[24], *(__m128d *)&v5[24]);
  v6[1] = *(_OWORD *)&v5[16];
  return CAcrylicSheet::AnimateRect((__int64)this, a2, v3, 12, (__int64)v6);
}
