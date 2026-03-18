/*
 * XREFs of ?LocationToString@RimTelemetry@@CAPEBGW4tagHPD_LOCATION@@@Z @ 0x140172D54
 * Callers:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x140096FAC (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

const wchar_t *__fastcall RimTelemetry::LocationToString(int a1)
{
  switch ( a1 )
  {
    case 0:
      return L"Integrated";
    case 1:
      return L"External";
    case 2:
      return L"Unknown";
  }
  return L"Unexpected Value";
}
