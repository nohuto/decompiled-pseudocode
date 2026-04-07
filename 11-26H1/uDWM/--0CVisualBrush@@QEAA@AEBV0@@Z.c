/*
 * XREFs of ??0CVisualBrush@@QEAA@AEBV0@@Z @ 0x180083D50
 * Callers:
 *     ?EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ @ 0x180082790 (-EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ??0LivePreviewResource@@QEAA@AEBU0@@Z @ 0x1800B8FB0 (--0LivePreviewResource@@QEAA@AEBU0@@Z.c)
 *     ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAVCVisualBrush@@PEA_NPEAUD2D_POINT_3F@@@Z @ 0x1800CF7D8 (-GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationCompon.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CVisualBrush *__fastcall CVisualBrush::CVisualBrush(CVisualBrush *this, const struct CVisualBrush *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return this;
}
