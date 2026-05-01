/*
 * XREFs of ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x1804AAEC4
 * Callers:
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804AAE2C (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1804F9580 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 * Callees:
 *     ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1800DAF44 (-CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1800DAF6C (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18023A674 (-IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall TabletModePositionerHelpers::IsOperableWindow(TabletModePositionerHelpers *this, HWND a2)
{
  HWND v3; // rdx
  char v4; // bl
  HWND v5; // rdx
  HWND v6; // rdx

  v4 = 0;
  if ( IsWindow((HWND)this)
    && ApplicationViewHelpers::CanResizeWindow(this, v3)
    && ApplicationViewHelpers::CanMaximizeWindow(this, v5) )
  {
    return ApplicationViewHelpers::IsWindowInHighZOrderBand(this, v6) == 0;
  }
  return v4;
}
