/*
 * XREFs of ??0CIndirectTouchVisual@@IEAA@_K@Z @ 0x1800B8128
 * Callers:
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x180088DF8 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004FE18 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CIndirectTouchVisual *__fastcall CIndirectTouchVisual::CIndirectTouchVisual(CIndirectTouchVisual *this, __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  *(_QWORD *)this = &CIndirectTouchVisual::`vftable';
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_QWORD *)this + 38) = 0LL;
  return this;
}
