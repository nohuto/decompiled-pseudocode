/*
 * XREFs of ?StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800B9A38
 * Callers:
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800B9A10 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800B9BD0 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

void __fastcall CIndirectTouchVisual::StopFrameTimeline(CIndirectTouchVisual *this)
{
  CTimelineBase *v1; // rcx
  __int64 v2; // rdx

  v1 = (CTimelineBase *)*((_QWORD *)this + 39);
  if ( v1 )
  {
    CTimelineBase::Release(v1);
    *(_QWORD *)(v2 + 312) = 0LL;
  }
}
