/*
 * XREFs of ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1800DAF6C
 * Callers:
 *     ?OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x180057520 (-OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z @ 0x1800DAEA8 (-CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x1804AAEC4 (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804DED50 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 *     ?HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E31E0 (-HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ApplicationViewHelpers::CanMaximizeWindow(ApplicationViewHelpers *this, HWND a2)
{
  return ((unsigned int)GetWindowLongPtrW((HWND)this, -16) >> 16) & 1;
}
