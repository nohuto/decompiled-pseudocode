/*
 * XREFs of ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ @ 0x180036EF0
 * Callers:
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18000BE60 (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800101D0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x1800371BC (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x180037234 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 */

__int64 __fastcall CTopLevelWindow::LivePreviewAnimation_Animated(CLivePreviewTimeline **this)
{
  double CurrentOpacity; // xmm0_8
  int v3; // eax
  unsigned int v4; // edi

  CurrentOpacity = CLivePreviewTimeline::GetCurrentOpacity(this[85]);
  v3 = CTopLevelWindow::SetLivePreviewAlpha((CTopLevelWindow *)this, CurrentOpacity * *((double *)this + 15));
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x11C3u, 0LL);
  }
  else if ( *((_BYTE *)this[85] + 72) )
  {
    CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)this);
  }
  return v4;
}
