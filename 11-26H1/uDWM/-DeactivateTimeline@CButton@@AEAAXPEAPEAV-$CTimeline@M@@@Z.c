/*
 * XREFs of ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180008D28
 * Callers:
 *     ??1CButton@@MEAA@XZ @ 0x1800086EC (--1CButton@@MEAA@XZ.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180008A14 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x1800682F0 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180005C0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x18008A828 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

char __fastcall CButton::DeactivateTimeline(struct CVisual *this, CTimelineBase **a2)
{
  char result; // al

  if ( *a2 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(this, &UdwmAnimation_Stop, 7LL);
    result = CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    if ( *a2 )
    {
      result = CTimelineBase::Release(*a2);
      *a2 = 0LL;
    }
  }
  return result;
}
