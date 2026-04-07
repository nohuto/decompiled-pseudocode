/*
 * XREFs of ?OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800B9414
 * Callers:
 *     ??1CWindowData@@QEAA@XZ @ 0x18001AD44 (--1CWindowData@@QEAA@XZ.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@00@Z @ 0x18008D528 (--$_Copy_memmove@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTrailPoint@CTouchD.c)
 *     ??$_Find_vectorized@PEAVCWindowData@@PEBV1@@std@@YAPEAPEAVCWindowData@@QEAPEAV1@0QEBV1@@Z @ 0x18008DE68 (--$_Find_vectorized@PEAVCWindowData@@PEBV1@@std@@YAPEAPEAVCWindowData@@QEAPEAV1@0QEBV1@@Z.c)
 */

void __fastcall CLivePreview::OnWindowDataDeleted(CLivePreview *this, const struct CWindowData *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = std::_Find_vectorized<CWindowData *,CWindowData const *>(
         *((_QWORD *)this + 46),
         *((_QWORD *)this + 47),
         (__int64)a2);
  v4 = *((_QWORD *)this + 47);
  if ( v3 != v4 )
  {
    std::_Copy_memmove<CTouchDragVisual::TrailPoint * *,CTouchDragVisual::TrailPoint * *>(
      (void *)(v3 + 8),
      v4,
      (void *)v3);
    *((_QWORD *)this + 47) -= 8LL;
  }
}
