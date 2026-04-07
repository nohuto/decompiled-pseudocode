/*
 * XREFs of ??0CPenPressHoldVisual@@IEAA@_K@Z @ 0x1800BC2C0
 * Callers:
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x1800AA078 (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180030944 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CPenPressHoldVisual *__fastcall CPenPressHoldVisual::CPenPressHoldVisual(CPenPressHoldVisual *this, __int64 a2)
{
  CPenPressHoldVisual *result; // rax

  CTouchVisual::CTouchVisual(this, a2);
  *(_QWORD *)this = &CPenPressHoldVisual::`vftable';
  CBitmapSourceArray::CBitmapSourceArray((CPenPressHoldVisual *)((char *)this + 288));
  *((_QWORD *)this + 33) = 0LL;
  result = this;
  *((_QWORD *)this + 34) = 0LL;
  return result;
}
