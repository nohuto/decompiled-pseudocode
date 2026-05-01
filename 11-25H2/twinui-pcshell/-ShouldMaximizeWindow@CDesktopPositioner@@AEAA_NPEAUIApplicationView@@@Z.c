/*
 * XREFs of ?ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F07CC
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18025B810 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAKPEAUtagRECT@@@Z @ 0x1804EED80 (-InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@.c)
 *     ?SetPositionOfExistingView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAKPEAUtagRECT@@@Z @ 0x1804F0250 (-SetPositionOfExistingView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAKPEAU.c)
 * Callees:
 *     ?ShouldMaximizeOnSmallScreenDevice@@YA_NPEAUIApplicationView@@@Z @ 0x1804F05A4 (-ShouldMaximizeOnSmallScreenDevice@@YA_NPEAUIApplicationView@@@Z.c)
 */

char __fastcall CDesktopPositioner::ShouldMaximizeWindow(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        __int64 a3,
        const char *a4)
{
  int v4; // eax

  v4 = *((_DWORD *)this + 137);
  if ( v4 )
  {
    if ( v4 == 1 )
      return 1;
    if ( ShouldMaximizeOnSmallScreenDevice(a2, (__int64)a2, a3, a4) )
    {
      if ( *((_DWORD *)this + 137) == 3 )
        return *((_BYTE *)this + 552);
      return 1;
    }
  }
  return 0;
}
