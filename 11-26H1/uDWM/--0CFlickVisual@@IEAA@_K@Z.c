/*
 * XREFs of ??0CFlickVisual@@IEAA@_K@Z @ 0x1800B4D44
 * Callers:
 *     ??$CreateTouchVisual@VCFlickVisual@@@@YAJ_KPEAPEAVCFlickVisual@@@Z @ 0x1800A80E4 (--$CreateTouchVisual@VCFlickVisual@@@@YAJ_KPEAPEAVCFlickVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004FE18 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CFlickVisual *__fastcall CFlickVisual::CFlickVisual(CFlickVisual *this, __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  *(_QWORD *)this = &CFlickVisual::`vftable';
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  return this;
}
