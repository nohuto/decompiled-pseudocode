/*
 * XREFs of ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800065E0
 * Callers:
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x180002A30 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x180002DDC (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180005F38 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180006480 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

void __fastcall CDirectTouchVisual::StopFadeTimeline(CDirectTouchVisual *this)
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
