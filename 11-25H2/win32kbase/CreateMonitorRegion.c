/*
 * XREFs of CreateMonitorRegion @ 0x140063A98
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140089AC0 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 * Callees:
 *     GetCurrentThreadCompositedDpi @ 0x140040DF8 (GetCurrentThreadCompositedDpi.c)
 *     CreateMonitorRegionForDpi @ 0x140063AC0 (CreateMonitorRegionForDpi.c)
 */

__int64 __fastcall CreateMonitorRegion(__int64 a1)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  return CreateMonitorRegionForDpi(a1, CurrentThreadCompositedDpi);
}
