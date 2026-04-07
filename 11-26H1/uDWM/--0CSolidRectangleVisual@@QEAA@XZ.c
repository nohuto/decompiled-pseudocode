/*
 * XREFs of ??0CSolidRectangleVisual@@QEAA@XZ @ 0x18004FF40
 * Callers:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18004F168 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x18004FD28 (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004FE18 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z @ 0x1800DAAAC (-Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRectangleVisual@@IEAA@XZ @ 0x180027600 (--0CRectangleVisual@@IEAA@XZ.c)
 */

CSolidRectangleVisual *__fastcall CSolidRectangleVisual::CSolidRectangleVisual(CSolidRectangleVisual *this)
{
  CRectangleVisual::CRectangleVisual(this);
  *(_QWORD *)this = &CSolidRectangleVisual::`vftable';
  return this;
}
