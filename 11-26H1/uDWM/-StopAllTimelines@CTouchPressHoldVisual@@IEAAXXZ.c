/*
 * XREFs of ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800CD7E4
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CD3C4 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CD530 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CD684 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800CD850 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

void __fastcall CTouchPressHoldVisual::StopAllTimelines(CTimelineBase **this)
{
  CTouchPressHoldVisual *v1; // rdx
  CTimelineBase *v2; // rcx
  __int64 v3; // r8
  CTimelineBase *v4; // rcx
  __int64 v5; // r8
  CTimelineBase *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8

  v1 = (CTouchPressHoldVisual *)this;
  v2 = this[34];
  if ( v2 )
  {
    CTimelineBase::Release(v2);
    *((_QWORD *)v1 + 34) = v3;
  }
  v4 = (CTimelineBase *)*((_QWORD *)v1 + 35);
  if ( v4 )
  {
    CTimelineBase::Release(v4);
    *((_QWORD *)v1 + 35) = v5;
  }
  v6 = (CTimelineBase *)*((_QWORD *)v1 + 36);
  if ( v6 )
  {
    CTimelineBase::Release(v6);
    *(_QWORD *)(v7 + 288) = v8;
  }
}
