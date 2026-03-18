/*
 * XREFs of GetMonitorRect @ 0x140091000
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxSetWindowPlacement @ 0x14016FB84 (xxxSetWindowPlacement.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     GetPrimaryMonitorRect @ 0x1402193C8 (GetPrimaryMonitorRect.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x140271D54 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1402842C0 (GetHimetricScaleForMonitor.c)
 *     UserGetHipDeviceInfo @ 0x14028DAE0 (UserGetHipDeviceInfo.c)
 *     xxxSetInternalWindowPos @ 0x1402ACC4C (xxxSetInternalWindowPos.c)
 *     ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1402C99FC (-_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14009119C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 */

__int64 __fastcall GetMonitorRect(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  GetMonitorRectForDpi(a1, a2, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
