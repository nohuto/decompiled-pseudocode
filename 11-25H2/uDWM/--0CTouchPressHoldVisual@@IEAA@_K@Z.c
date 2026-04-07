/*
 * XREFs of ??0CTouchPressHoldVisual@@IEAA@_K@Z @ 0x1800D0C00
 * Callers:
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x1800AA2D0 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180030944 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CTouchPressHoldVisual *__fastcall CTouchPressHoldVisual::CTouchPressHoldVisual(CTouchPressHoldVisual *this, __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  *(_QWORD *)this = &CTouchPressHoldVisual::`vftable';
  return this;
}
