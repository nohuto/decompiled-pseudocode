/*
 * XREFs of ?Stop@CFlickVisual@@UEAAXXZ @ 0x1800859B0
 * Callers:
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180085558 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x1800B4FA0 (-UpdateTransition@CFlickVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18008B5D4 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800A94B0 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x1800B4F30 (-StopTimer@CFlickVisual@@MEAAJXZ.c)
 */

void __fastcall CFlickVisual::Stop(CFlickVisual *this)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  char v4; // [rsp+20h] [rbp-18h]

  CFlickVisual::StopTimer(this);
  v4 = 0;
  CContactManager::PostFlickFeedbackUpdate(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20),
    *((unsigned int *)this + 56),
    *((unsigned int *)this + 57),
    (char *)this + 240,
    v4);
  CVisual::SetOpacity(this, 0.0, v2);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v3, &UdwmFlickVisual_End, *((unsigned int *)this + 57));
}
