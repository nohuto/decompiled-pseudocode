/*
 * XREFs of AcpiDiagTraceFanStatusChange @ 0x140017D94
 * Callers:
 *     ACPIFanFSTCallback @ 0x140016F90 (ACPIFanFSTCallback.c)
 * Callees:
 *     AcpiDiagTraceFanEvent @ 0x140018794 (AcpiDiagTraceFanEvent.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

__int64 __fastcall AcpiDiagTraceFanStatusChange(__int64 a1)
{
  _QWORD v2[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v3[8]; // [rsp+30h] [rbp-58h] BYREF

  LODWORD(v2[0]) = *(_DWORD *)(a1 + 296);
  HIDWORD(v2[0]) = *(_DWORD *)(a1 + 304);
  v3[4] = v2;
  v3[6] = (char *)v2 + 4;
  v3[5] = 4LL;
  v3[7] = 4LL;
  return AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_STATUS_CHANGE, 4LL, v3, v2[0]);
}
