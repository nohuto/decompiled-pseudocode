/*
 * XREFs of ??0CTouchPressHoldVisual@@IEAA@_K@Z @ 0x1800CCFCC
 * Callers:
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x1800A840C (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004FE18 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CTouchPressHoldVisual *__fastcall CTouchPressHoldVisual::CTouchPressHoldVisual(CTouchPressHoldVisual *this, __int64 a2)
{
  CTouchPressHoldVisual *result; // rax

  CTouchVisual::CTouchVisual(this, a2);
  *(_QWORD *)this = &CTouchPressHoldVisual::`vftable';
  result = this;
  *((_QWORD *)this + 38) = 0LL;
  return result;
}
