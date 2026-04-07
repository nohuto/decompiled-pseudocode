/*
 * XREFs of ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x180048FBC
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001CF40 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800490E4 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180049258 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?Restart@CTimelineBase@@QEAAXN@Z @ 0x180049614 (-Restart@CTimelineBase@@QEAAXN@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800972A4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CButton::ActivateTimeline(struct CVisual *a1, CTimelineBase **a2, double a3)
{
  unsigned int v3; // ebx
  void *v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax

  v3 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(a1, &UdwmAnimation_Start, 7LL, 0LL);
  if ( *a2 )
  {
    CTimelineBase::Restart(*a2, a3);
    return v3;
  }
  v6 = DefaultHeap::AllocClear(0x78uLL);
  if ( !v6 )
  {
    *a2 = 0LL;
    goto LABEL_10;
  }
  v10 = CTimeline<float>::CTimeline<float>((_DWORD)v6, v7, v8, v9, 0);
  *a2 = (CTimelineBase *)v10;
  if ( !v10 )
  {
LABEL_10:
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1D2u, 0LL);
    return v3;
  }
  CDesktopManager::RegisterForGlobalTimeChangeNotification(a1);
  return v3;
}
