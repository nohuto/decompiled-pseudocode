/*
 * XREFs of CreateMonitorRegion @ 0x1400839C4
 * Callers:
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1400820A8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 * Callees:
 *     CreateMonitorRegionForDpi @ 0x1400839F0 (CreateMonitorRegionForDpi.c)
 *     GetCurrentThreadCompositedDpi @ 0x140083D64 (GetCurrentThreadCompositedDpi.c)
 */

__int64 __fastcall CreateMonitorRegion(__int64 a1)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  return CreateMonitorRegionForDpi(a1, CurrentThreadCompositedDpi);
}
