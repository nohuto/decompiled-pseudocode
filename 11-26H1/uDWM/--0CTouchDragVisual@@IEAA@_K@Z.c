/*
 * XREFs of ??0CTouchDragVisual@@IEAA@_K@Z @ 0x180087620
 * Callers:
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800734BC (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z.c)
 * Callees:
 *     ??0CGraphicsResourceOwner@@IEAA@XZ @ 0x180027888 (--0CGraphicsResourceOwner@@IEAA@XZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004FE18 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ??0?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAA@XZ @ 0x1800876EC (--0-$deque@UTrailPoint@CTouchDragVisual@@V-$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=5
CTouchDragVisual *__fastcall CTouchDragVisual::CTouchDragVisual(CTouchDragVisual *this, __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  CGraphicsResourceOwner::CGraphicsResourceOwner((CTouchDragVisual *)((char *)this + 224));
  *(_QWORD *)this = &CTouchDragVisual::`vftable'{for `CTouchVisual'};
  *((_QWORD *)this + 28) = &CTouchDragVisual::`vftable'{for `CGraphicsResourceOwner'};
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  std::deque<CTouchDragVisual::TrailPoint>::deque<CTouchDragVisual::TrailPoint>((char *)this + 312);
  std::deque<CTouchDragVisual::TrailPoint>::deque<CTouchDragVisual::TrailPoint>((char *)this + 352);
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 104) = 0;
  *((_WORD *)this + 210) = 0;
  *((_BYTE *)this + 422) = 0;
  return this;
}
