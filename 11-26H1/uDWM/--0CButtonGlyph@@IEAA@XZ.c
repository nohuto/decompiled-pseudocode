/*
 * XREFs of ??0CButtonGlyph@@IEAA@XZ @ 0x180027F98
 * Callers:
 *     ?Create@CButtonGlyph@@SAJPEAPEAV1@@Z @ 0x180027EB0 (-Create@CButtonGlyph@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRectangleVisual@@IEAA@XZ @ 0x180027600 (--0CRectangleVisual@@IEAA@XZ.c)
 *     ??0CGraphicsResourceOwner@@IEAA@XZ @ 0x180027888 (--0CGraphicsResourceOwner@@IEAA@XZ.c)
 */

CButtonGlyph *__fastcall CButtonGlyph::CButtonGlyph(CButtonGlyph *this)
{
  CRectangleVisual::CRectangleVisual(this);
  CGraphicsResourceOwner::CGraphicsResourceOwner((CButtonGlyph *)((char *)this + 208));
  *(_QWORD *)this = &CButtonGlyph::`vftable'{for `CRectangleVisual'};
  *((_QWORD *)this + 26) = &CButtonVisual::`vftable'{for `CGraphicsResourceOwner'};
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  return this;
}
