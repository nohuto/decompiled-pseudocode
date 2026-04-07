/*
 * XREFs of ??0CNineGridVisual@@QEAA@XZ @ 0x1800275D8
 * Callers:
 *     ??0CImage@@IEAA@XZ @ 0x180027580 (--0CImage@@IEAA@XZ.c)
 *     ?Create@CNineGridVisual@@SAJPEAPEAV1@@Z @ 0x18006F188 (-Create@CNineGridVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800B5F28 (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 * Callees:
 *     ??0CRectangleVisual@@IEAA@XZ @ 0x180027600 (--0CRectangleVisual@@IEAA@XZ.c)
 */

CNineGridVisual *__fastcall CNineGridVisual::CNineGridVisual(CNineGridVisual *this)
{
  CRectangleVisual::CRectangleVisual(this);
  *(_QWORD *)this = &CNineGridVisual::`vftable';
  return this;
}
