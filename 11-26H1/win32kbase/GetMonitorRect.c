/*
 * XREFs of GetMonitorRect @ 0x140083AF4
 * Callers:
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x140166B7C (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140083B38 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorRectForDpi @ 0x140085450 (GetMonitorRectForDpi.c)
 */

__int64 __fastcall GetMonitorRect(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  GetMonitorRectForDpi(a1, a2, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
