/*
 * XREFs of ??0CContactStationaryVisual@@IEAA@_K@Z @ 0x180002CBC
 * Callers:
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z @ 0x180003410 (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004FE18 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CContactStationaryVisual *__fastcall CContactStationaryVisual::CContactStationaryVisual(
        CContactStationaryVisual *this,
        unsigned __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  *(_QWORD *)this = &CContactStationaryVisual::`vftable';
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_QWORD *)this + 37) = 0LL;
  return this;
}
