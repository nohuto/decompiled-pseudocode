/*
 * XREFs of RawInputManagerObjectClose @ 0x140130BA8
 * Callers:
 *     RIMObjectManagerCallout @ 0x140130A5C (RIMObjectManagerCallout.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerObjectClose(__int64 a1)
{
  if ( ObGetObjectType(*(_QWORD *)(a1 + 24)) != ExRawInputManagerObjectType )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 189LL);
  return 0LL;
}
