/*
 * XREFs of ??0CContactStationaryVisual@@IEAA@_K@Z @ 0x180075CBC
 * Callers:
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z @ 0x18002FB94 (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180030944 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CContactStationaryVisual *__fastcall CContactStationaryVisual::CContactStationaryVisual(
        CContactStationaryVisual *this,
        __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  *(_QWORD *)this = &CContactStationaryVisual::`vftable';
  CBitmapSourceArray::CBitmapSourceArray((CContactStationaryVisual *)((char *)this + 344));
  *((_QWORD *)this + 41) = 0LL;
  return this;
}
