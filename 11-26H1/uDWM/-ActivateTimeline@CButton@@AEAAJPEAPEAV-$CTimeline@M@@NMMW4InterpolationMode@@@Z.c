/*
 * XREFs of ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x180005818
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180008A14 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180005A2C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180023144 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?Restart@CTimelineBase@@QEAAXN@Z @ 0x1800231D4 (-Restart@CTimelineBase@@QEAAXN@Z.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x18008A828 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CButton::ActivateTimeline(struct CVisual *a1, CTimelineBase **a2, double a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  CTimelineBase *v9; // r9

  v3 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(a1, &UdwmAnimation_Start, 7LL);
  if ( *a2 )
  {
    CTimelineBase::Restart(*a2, a3);
    return v3;
  }
  v6 = CTimeline<float>::operator new();
  if ( !v6 )
  {
    *a2 = 0LL;
    goto LABEL_10;
  }
  CTimelineBase::CTimelineBase(v6, v7, v8, v6, 0);
  *(_QWORD *)v9 = &CTimeline<float>::`vftable';
  *a2 = v9;
  if ( !v9 )
  {
LABEL_10:
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x17Eu, 0LL);
    return v3;
  }
  CDesktopManager::RegisterForGlobalTimeChangeNotification(a1);
  return v3;
}
