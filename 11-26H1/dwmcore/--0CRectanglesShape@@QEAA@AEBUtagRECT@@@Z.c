/*
 * XREFs of ??0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z @ 0x1800C0C88
 * Callers:
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitmapResource@@@Z @ 0x180201CBC (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitma.c)
 * Callees:
 *     ?Reset@CRectanglesShape@@AEAAXXZ @ 0x1800BAC70 (-Reset@CRectanglesShape@@AEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x1800BF9A0 (-reserve_region@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 */

CRectanglesShape *__fastcall CRectanglesShape::CRectanglesShape(CRectanglesShape *this, const __m128i *a2)
{
  detail::liberal_expansion_policy *v2; // rbx
  __m128 v4; // xmm6

  *((_QWORD *)this + 1) = 0LL;
  v2 = (CRectanglesShape *)((char *)this + 16);
  *(_QWORD *)this = &CRectanglesShape::`vftable';
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_QWORD *)this + 3) = (char *)this + 40;
  *((_QWORD *)this + 4) = (char *)this + 56;
  *((_QWORD *)this + 7) = 0LL;
  v4 = _mm_cvtepi32_ps(_mm_loadu_si128(a2));
  CRectanglesShape::Reset(this);
  *(__m128 *)detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::reserve_region(
               v2,
               (__int64)(*((_QWORD *)v2 + 1) - *(_QWORD *)v2) >> 4,
               1uLL) = v4;
  return this;
}
