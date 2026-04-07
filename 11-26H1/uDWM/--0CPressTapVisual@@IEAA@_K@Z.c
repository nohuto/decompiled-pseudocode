/*
 * XREFs of ??0CPressTapVisual@@IEAA@_K@Z @ 0x1800BC014
 * Callers:
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x1800A8274 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004FE18 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CPressTapVisual *__fastcall CPressTapVisual::CPressTapVisual(CPressTapVisual *this, __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  *(_QWORD *)this = &CPressTapVisual::`vftable';
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  return this;
}
