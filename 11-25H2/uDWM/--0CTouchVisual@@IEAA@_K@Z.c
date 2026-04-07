/*
 * XREFs of ??0CTouchVisual@@IEAA@_K@Z @ 0x180030944
 * Callers:
 *     ??0CTouchDragVisual@@IEAA@_K@Z @ 0x18002B970 (--0CTouchDragVisual@@IEAA@_K@Z.c)
 *     ??0CDirectTouchVisual@@IEAA@_K@Z @ 0x18003090C (--0CDirectTouchVisual@@IEAA@_K@Z.c)
 *     ??0CPenBarrelKeyVisual@@IEAA@_K@Z @ 0x180030A58 (--0CPenBarrelKeyVisual@@IEAA@_K@Z.c)
 *     ??0CContactStationaryVisual@@IEAA@_K@Z @ 0x180075CBC (--0CContactStationaryVisual@@IEAA@_K@Z.c)
 *     ??0CFlickVisual@@IEAA@_K@Z @ 0x1800B531C (--0CFlickVisual@@IEAA@_K@Z.c)
 *     ??0CIndirectTouchVisual@@IEAA@_K@Z @ 0x1800B9224 (--0CIndirectTouchVisual@@IEAA@_K@Z.c)
 *     ??0CPenPressHoldVisual@@IEAA@_K@Z @ 0x1800BC2C0 (--0CPenPressHoldVisual@@IEAA@_K@Z.c)
 *     ??0CPressTapVisual@@IEAA@_K@Z @ 0x1800BC774 (--0CPressTapVisual@@IEAA@_K@Z.c)
 *     ??0CTetherVisual@@IEAA@_K@Z @ 0x1800CE318 (--0CTetherVisual@@IEAA@_K@Z.c)
 *     ??0CTouchPressHoldVisual@@IEAA@_K@Z @ 0x1800D0C00 (--0CTouchPressHoldVisual@@IEAA@_K@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180009E0C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CTouchVisual *__fastcall CTouchVisual::CTouchVisual(CTouchVisual *this, __int64 a2)
{
  CTouchVisual *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *((_QWORD *)this + 31) = a2;
  *(_QWORD *)this = &CTouchVisual::`vftable';
  result = this;
  *((_BYTE *)this + 240) = 0;
  return result;
}
