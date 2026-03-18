/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140089AC0
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14008AA94 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 * Callees:
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x140014370 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x140014720 (GreSetRectRgn.c)
 *     CreateMonitorRegion @ 0x140063A98 (CreateMonitorRegion.c)
 *     GetMonitorRect @ 0x140063BC4 (GetMonitorRect.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, HRGN a2, HRGN a3)
{
  HRGN MonitorRegion; // rsi
  _DWORD *MonitorRect; // rax
  struct REGION_CORE *v8; // [rsp+20h] [rbp-28h]
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  MonitorRegion = (HRGN)CreateMonitorRegion((__int64)a1);
  if ( (unsigned int)GreCombineRgn(a2, a3, MonitorRegion, 1) )
  {
    MonitorRect = (_DWORD *)GetMonitorRect((__int64)v9, (__int64)a1);
    GreOffsetRgn(a2, -*MonitorRect, -HIDWORD(*(_QWORD *)MonitorRect));
  }
  else
  {
    LODWORD(v8) = 0;
    GreSetRectRgn(a2, 0, 0, 0, v8);
  }
  GreDeleteObject((HBRUSH)MonitorRegion);
}
