/*
 * XREFs of ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001D1D8
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001CF40 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18001D484 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ??1CButton@@MEAA@XZ @ 0x18001D820 (--1CButton@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037998 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800972A4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

char __fastcall CButton::DeactivateTimeline(struct CVisual *this, CTimelineBase **a2)
{
  char result; // al

  if ( *a2 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(this, &UdwmAnimation_Stop, 7LL, 0LL);
    result = CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    if ( *a2 )
    {
      result = CTimelineBase::Release(*a2);
      *a2 = 0LL;
    }
  }
  return result;
}
