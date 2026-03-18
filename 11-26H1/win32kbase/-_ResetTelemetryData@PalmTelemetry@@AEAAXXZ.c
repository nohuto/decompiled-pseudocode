/*
 * XREFs of ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1402111E0
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x140077BEC (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     rimSetupPalmTelemetry @ 0x140204AFC (rimSetupPalmTelemetry.c)
 *     ?Invalidate@PalmTelemetry@@QEAAXW4tagTEL_INVALIDATION_REASON@@@Z @ 0x140210D60 (-Invalidate@PalmTelemetry@@QEAAXW4tagTEL_INVALIDATION_REASON@@@Z.c)
 * Callees:
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall PalmTelemetry::_ResetTelemetryData(PalmTelemetry *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 519) = 0;
  memset((char *)this + 2080, 0, 0x27F0uLL);
  memset((char *)this + 29, 0, 0x7FFuLL);
  *((_BYTE *)this + 28) = 0;
  *((_DWORD *)this + 5) = 0;
}
