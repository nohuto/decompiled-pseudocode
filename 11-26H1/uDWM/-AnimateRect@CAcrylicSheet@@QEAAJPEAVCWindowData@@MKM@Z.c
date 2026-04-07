/*
 * XREFs of ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKM@Z @ 0x18009586C
 * Callers:
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800DFA18 (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x18000F7E8 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180042604 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CAcrylicSheet::AnimateRect(CAcrylicSheet *this, struct CWindowData *a2, float a3)
{
  RECT v4; // xmm1
  __int64 v5; // r8
  _BYTE v7[40]; // [rsp+30h] [rbp-41h] BYREF
  _OWORD v8[2]; // [rsp+60h] [rbp-11h] BYREF
  __int64 v9; // [rsp+80h] [rbp+Fh]
  struct tagRECT v10; // [rsp+90h] [rbp+1Fh] BYREF
  RECT v11; // [rsp+A0h] [rbp+2Fh] BYREF

  memset(v7, 0, 24);
  *(__m128i *)&v7[24] = _mm_load_si128((const __m128i *)&_xmm);
  v4 = *CAcrylicSheet::GetMarginAdjustedWindowRect(&v10, a2);
  v8[0] = *(_OWORD *)v7;
  v11 = v4;
  v9 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v7[24], *(__m128d *)&v7[24]);
  v8[1] = *(_OWORD *)&v7[16];
  return CAcrylicSheet::AnimateRect((__int64)this, &v11, v5, 50, (__int64)v8);
}
