/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1400820A8
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 * Callees:
 *     GreSetRectRgn @ 0x14001D700 (GreSetRectRgn.c)
 *     GreOffsetRgn @ 0x1400208C0 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     CreateMonitorRegion @ 0x1400839C4 (CreateMonitorRegion.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140083B38 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorRectForDpi @ 0x140085450 (GetMonitorRectForDpi.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, HRGN a2, HRGN a3)
{
  HRGN MonitorRegion; // rsi
  unsigned int CurrentThreadCompositedDpiContext; // eax
  _DWORD v8[6]; // [rsp+30h] [rbp-18h] BYREF

  MonitorRegion = (HRGN)CreateMonitorRegion(a1);
  if ( (unsigned int)GreCombineRgn(a2, a3, MonitorRegion, 1) )
  {
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
    GetMonitorRectForDpi(v8, a1, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
    GreOffsetRgn(a2, -v8[0], -v8[1]);
  }
  else
  {
    GreSetRectRgn(a2, 0, 0, 0, 0);
  }
  GreDeleteObject(MonitorRegion);
}
