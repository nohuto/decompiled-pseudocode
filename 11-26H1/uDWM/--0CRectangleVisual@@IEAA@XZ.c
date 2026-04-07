/*
 * XREFs of ??0CRectangleVisual@@IEAA@XZ @ 0x180027600
 * Callers:
 *     ?Create@CBorderSprite@@SAJPEAPEAV1@@Z @ 0x18000B99C (-Create@CBorderSprite@@SAJPEAPEAV1@@Z.c)
 *     ??0CNineGridVisual@@QEAA@XZ @ 0x1800275D8 (--0CNineGridVisual@@QEAA@XZ.c)
 *     ??0CButtonGlyph@@IEAA@XZ @ 0x180027F98 (--0CButtonGlyph@@IEAA@XZ.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x180037B18 (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ??0CSolidRectangleVisual@@QEAA@XZ @ 0x18004FF40 (--0CSolidRectangleVisual@@QEAA@XZ.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x180066AA0 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18008C8A8 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 * Callees:
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x180027638 (--0CSpriteVisual@@QEAA@XZ.c)
 */

CRectangleVisual *__fastcall CRectangleVisual::CRectangleVisual(CRectangleVisual *this)
{
  __int64 v1; // r11
  CRectangleVisual *result; // rax

  CSpriteVisual::CSpriteVisual(this);
  *(_QWORD *)(v1 + 184) = 0LL;
  result = (CRectangleVisual *)v1;
  *(_OWORD *)(v1 + 192) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
  return result;
}
