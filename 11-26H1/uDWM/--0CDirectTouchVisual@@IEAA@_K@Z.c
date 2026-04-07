/*
 * XREFs of ??0CDirectTouchVisual@@IEAA@_K@Z @ 0x180005C90
 * Callers:
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800060D4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004FE18 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CDirectTouchVisual *__fastcall CDirectTouchVisual::CDirectTouchVisual(CDirectTouchVisual *this, unsigned __int64 a2)
{
  CDirectTouchVisual *result; // rax

  CTouchVisual::CTouchVisual(this, a2);
  *((_QWORD *)this + 42) = 0LL;
  *(_QWORD *)this = &CDirectTouchVisual::`vftable';
  result = this;
  *((_QWORD *)this + 43) = 0LL;
  return result;
}
