/*
 * XREFs of AcpiDiagTraceFanPowerStateChange @ 0x140051794
 * Callers:
 *     ACPIFanPowerCallback @ 0x1400516E0 (ACPIFanPowerCallback.c)
 * Callees:
 *     AcpiDiagTraceFanEvent @ 0x140018794 (AcpiDiagTraceFanEvent.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceFanPowerStateChange(__int64 a1)
{
  __int16 v1; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v2[6]; // [rsp+28h] [rbp-40h] BYREF

  v2[5] = 2LL;
  v1 = *(_DWORD *)(a1 + 384) == 1;
  v2[4] = &v1;
  AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_POWER_STATE_CHANGE, 3u, (__int64)v2);
}
