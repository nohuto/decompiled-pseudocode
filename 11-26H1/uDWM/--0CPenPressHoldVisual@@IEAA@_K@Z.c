/*
 * XREFs of ??0CPenPressHoldVisual@@IEAA@_K@Z @ 0x1800BBB40
 * Callers:
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x1800A81AC (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004FE18 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CPenPressHoldVisual *__fastcall CPenPressHoldVisual::CPenPressHoldVisual(CPenPressHoldVisual *this, __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  *(_QWORD *)this = &CPenPressHoldVisual::`vftable';
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  return this;
}
