/*
 * XREFs of RawInputManagerObjectClose @ 0x1401E6D1C
 * Callers:
 *     RIMObjectManagerCallout @ 0x140118F14 (RIMObjectManagerCallout.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerObjectClose(__int64 a1)
{
  if ( ObGetObjectType(*(_QWORD *)(a1 + 24)) != ExRawInputManagerObjectType )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 189);
  return 0LL;
}
