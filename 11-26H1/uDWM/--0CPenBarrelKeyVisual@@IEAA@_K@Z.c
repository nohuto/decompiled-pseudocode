/*
 * XREFs of ??0CPenBarrelKeyVisual@@IEAA@_K@Z @ 0x18004F4CC
 * Callers:
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x18004F3F8 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004FE18 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CPenBarrelKeyVisual *__fastcall CPenBarrelKeyVisual::CPenBarrelKeyVisual(
        CPenBarrelKeyVisual *this,
        unsigned __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  *((_WORD *)this + 134) = 1;
  *(_QWORD *)this = &CPenBarrelKeyVisual::`vftable';
  *((_DWORD *)this + 59) = 0;
  *((_BYTE *)this + 270) = 0;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  return this;
}
