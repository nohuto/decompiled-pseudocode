/*
 * XREFs of ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1401F61DC
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x14010B28C (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     rimSetupPalmTelemetry @ 0x1401E1FF8 (rimSetupPalmTelemetry.c)
 *     ?Invalidate@PalmTelemetry@@QEAAXW4tagTEL_INVALIDATION_REASON@@@Z @ 0x1401F5CC8 (-Invalidate@PalmTelemetry@@QEAAXW4tagTEL_INVALIDATION_REASON@@@Z.c)
 * Callees:
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall PalmTelemetry::_ResetTelemetryData(PalmTelemetry *this)
{
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 519) = 0;
  memset((char *)this + 2080, 0, 0x27F0uLL);
  memset((char *)this + 29, 0, 0x7FFuLL);
  *((_DWORD *)this + 5) = 0;
  *((_BYTE *)this + 28) = 0;
}
