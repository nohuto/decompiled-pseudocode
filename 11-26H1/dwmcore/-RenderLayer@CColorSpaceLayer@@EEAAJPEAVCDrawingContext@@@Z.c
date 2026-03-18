/*
 * XREFs of ?RenderLayer@CColorSpaceLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18024FED0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1M@Z @ 0x1802037D0 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CColorSpaceLayer::RenderLayer(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  unsigned __int64 v2; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int32 v9; // [rsp+38h] [rbp-20h]
  unsigned __int32 v10; // [rsp+3Ch] [rbp-1Ch]

  v2 = *((_QWORD *)this + 1);
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v8 = 0LL;
  v10 = _mm_cvtepi32_ps(v3).m128_u32[0];
  v9 = _mm_cvtepi32_ps(v4).m128_u32[0];
  v5 = CDrawingContext::DrawBitmapRealization(
         (__int64)a2,
         (v2 + 8) & ((unsigned __int128)-(__int128)v2 >> 64),
         (float *)&v8,
         (float *)&v8,
         SLODWORD(FLOAT_1_0));
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x50u, 0LL);
  return v6;
}
