/*
 * XREFs of ??0CPenBarrelKeyVisual@@IEAA@_K@Z @ 0x180030A58
 * Callers:
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x180030988 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180030944 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CPenBarrelKeyVisual *__fastcall CPenBarrelKeyVisual::CPenBarrelKeyVisual(CPenBarrelKeyVisual *this, __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  *((_WORD *)this + 150) = 1;
  *(_QWORD *)this = &CPenBarrelKeyVisual::`vftable';
  *((_DWORD *)this + 67) = 0;
  *((_BYTE *)this + 302) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  return this;
}
