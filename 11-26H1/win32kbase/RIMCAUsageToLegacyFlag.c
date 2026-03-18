/*
 * XREFs of RIMCAUsageToLegacyFlag @ 0x1401BE0C0
 * Callers:
 *     RIMMarkSiblingMouseDevice @ 0x1402049FC (RIMMarkSiblingMouseDevice.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCAUsageToLegacyFlag(__int16 a1)
{
  unsigned __int16 v1; // bx

  v1 = 0;
  switch ( a1 )
  {
    case 1:
      return 16;
    case 2:
      return 4;
    case 4:
      return 8;
    case 5:
      return 2;
    default:
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 252);
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 258);
      break;
  }
  return v1;
}
