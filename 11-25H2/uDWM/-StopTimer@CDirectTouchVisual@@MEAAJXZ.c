/*
 * XREFs of ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180030680
 * Callers:
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18002C020 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180030650 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180094398 (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800306DC (-StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180030710 (-StopTimer@CTouchVisual@@MEAAJXZ.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180030758 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800307E0 (-StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CDirectTouchVisual::StopTimer(CDirectTouchVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  CDirectTouchVisual::StopDownTimeline(this);
  CDirectTouchVisual::StopFadeTimeline(this);
  CDirectTouchVisual::StopDownDelayTimeline(this);
  v2 = CTouchVisual::StopTimer(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x179u, 0LL);
  return v3;
}
