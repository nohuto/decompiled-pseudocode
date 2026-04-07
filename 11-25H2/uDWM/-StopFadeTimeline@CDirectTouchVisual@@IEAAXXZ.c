/*
 * XREFs of ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800307E0
 * Callers:
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18002C020 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18003031C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180030680 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x18008821C (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

void __fastcall CDirectTouchVisual::StopFadeTimeline(CDirectTouchVisual *this)
{
  CTimelineBase *v1; // rcx
  __int64 v2; // rdx

  v1 = (CTimelineBase *)*((_QWORD *)this + 43);
  if ( v1 )
  {
    CTimelineBase::Release(v1);
    *(_QWORD *)(v2 + 344) = 0LL;
  }
}
