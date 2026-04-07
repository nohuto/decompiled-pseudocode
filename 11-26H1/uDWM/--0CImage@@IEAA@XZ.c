/*
 * XREFs of ??0CImage@@IEAA@XZ @ 0x180027580
 * Callers:
 *     ?Create@CButtonVisual@@SAJPEAPEAV1@@Z @ 0x180027384 (-Create@CButtonVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18002748C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CNineGridVisual@@QEAA@XZ @ 0x1800275D8 (--0CNineGridVisual@@QEAA@XZ.c)
 *     ??0CGraphicsResourceOwner@@IEAA@XZ @ 0x180027888 (--0CGraphicsResourceOwner@@IEAA@XZ.c)
 */

CImage *__fastcall CImage::CImage(CImage *this)
{
  CImage *result; // rax

  CNineGridVisual::CNineGridVisual(this);
  CGraphicsResourceOwner::CGraphicsResourceOwner((CImage *)((char *)this + 208));
  *(_QWORD *)this = &CImage::`vftable'{for `CNineGridVisual'};
  *((_QWORD *)this + 26) = &CButtonVisual::`vftable'{for `CGraphicsResourceOwner'};
  result = this;
  *((_QWORD *)this + 29) = 0LL;
  return result;
}
