/*
 * XREFs of ??0CTetherVisual@@IEAA@_K@Z @ 0x1800C84C0
 * Callers:
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z @ 0x1800A833C (--$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z.c)
 * Callees:
 *     ??0CGraphicsResourceOwner@@IEAA@XZ @ 0x180027888 (--0CGraphicsResourceOwner@@IEAA@XZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004FE18 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CTetherVisual *__fastcall CTetherVisual::CTetherVisual(CTetherVisual *this, __int64 a2)
{
  CTetherVisual *result; // rax

  CTouchVisual::CTouchVisual(this, a2);
  CGraphicsResourceOwner::CGraphicsResourceOwner((CTetherVisual *)((char *)this + 224));
  *(_QWORD *)this = &CTetherVisual::`vftable'{for `CTouchVisual'};
  *((_QWORD *)this + 28) = &CTetherVisual::`vftable'{for `CGraphicsResourceOwner'};
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_WORD *)this + 148) = 0;
  result = this;
  *((_QWORD *)this + 36) = 1034147594LL;
  return result;
}
