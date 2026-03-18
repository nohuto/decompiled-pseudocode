/*
 * XREFs of ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ @ 0x18014C050
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020000 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x18014BF4C (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 * Callees:
 *     ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ @ 0x18008D178 (-ClearAllBackdropVisualImages@CVisual@@AEAAXXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18014C07C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 */

void __fastcall CVisual::UpdateBackdropVisualImageForWindowBackgroundTreatment(CVisual *this)
{
  CVisual *v1; // r10

  if ( !*((_QWORD *)CVisual::GetWindowBackgroundTreatmentInternal(this) + 38) )
    CVisual::ClearAllBackdropVisualImages(v1);
}
