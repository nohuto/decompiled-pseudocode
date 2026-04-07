/*
 * XREFs of ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180006480
 * Callers:
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x180002A30 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180005D70 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 * Callees:
 *     ?StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800064E0 (-StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180006510 (-StopTimer@CTouchVisual@@MEAAJXZ.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180006558 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800065E0 (-StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x179u, 0LL);
  return v3;
}
