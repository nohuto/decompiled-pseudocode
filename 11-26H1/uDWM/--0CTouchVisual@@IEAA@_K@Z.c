/*
 * XREFs of ??0CTouchVisual@@IEAA@_K@Z @ 0x18004FE18
 * Callers:
 *     ??0CContactStationaryVisual@@IEAA@_K@Z @ 0x180002CBC (--0CContactStationaryVisual@@IEAA@_K@Z.c)
 *     ??0CDirectTouchVisual@@IEAA@_K@Z @ 0x180005C90 (--0CDirectTouchVisual@@IEAA@_K@Z.c)
 *     ??0CPenBarrelKeyVisual@@IEAA@_K@Z @ 0x18004F4CC (--0CPenBarrelKeyVisual@@IEAA@_K@Z.c)
 *     ??0CTouchDragVisual@@IEAA@_K@Z @ 0x180087620 (--0CTouchDragVisual@@IEAA@_K@Z.c)
 *     ??0CFlickVisual@@IEAA@_K@Z @ 0x1800B4D44 (--0CFlickVisual@@IEAA@_K@Z.c)
 *     ??0CIndirectTouchVisual@@IEAA@_K@Z @ 0x1800B8128 (--0CIndirectTouchVisual@@IEAA@_K@Z.c)
 *     ??0CPenPressHoldVisual@@IEAA@_K@Z @ 0x1800BBB40 (--0CPenPressHoldVisual@@IEAA@_K@Z.c)
 *     ??0CPressTapVisual@@IEAA@_K@Z @ 0x1800BC014 (--0CPressTapVisual@@IEAA@_K@Z.c)
 *     ??0CTetherVisual@@IEAA@_K@Z @ 0x1800C84C0 (--0CTetherVisual@@IEAA@_K@Z.c)
 *     ??0CTouchPressHoldVisual@@IEAA@_K@Z @ 0x1800CCFCC (--0CTouchPressHoldVisual@@IEAA@_K@Z.c)
 * Callees:
 *     ??0CSolidRectangleVisual@@QEAA@XZ @ 0x18004FF40 (--0CSolidRectangleVisual@@QEAA@XZ.c)
 */

CTouchVisual *__fastcall CTouchVisual::CTouchVisual(CTouchVisual *this, __int64 a2)
{
  CTouchVisual *result; // rax

  CSolidRectangleVisual::CSolidRectangleVisual(this);
  *((_QWORD *)this + 27) = a2;
  *(_QWORD *)this = &CTouchVisual::`vftable';
  result = this;
  *((_BYTE *)this + 208) = 0;
  return result;
}
