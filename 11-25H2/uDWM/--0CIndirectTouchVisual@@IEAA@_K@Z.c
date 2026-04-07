/*
 * XREFs of ??0CIndirectTouchVisual@@IEAA@_K@Z @ 0x1800B9224
 * Callers:
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x180096528 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180030944 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CIndirectTouchVisual *__fastcall CIndirectTouchVisual::CIndirectTouchVisual(CIndirectTouchVisual *this, __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  *(_QWORD *)this = &CIndirectTouchVisual::`vftable';
  CBitmapSourceArray::CBitmapSourceArray((CIndirectTouchVisual *)((char *)this + 344));
  *((_QWORD *)this + 42) = 0LL;
  return this;
}
