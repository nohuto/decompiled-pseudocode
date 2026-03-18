/*
 * XREFs of MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14034207C
 * Callers:
 *     ?RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z @ 0x140338544 (-RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z.c)
 *     ?SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z @ 0x140340C5C (-SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x14020428C (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredMsgKM(__int64 a1)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(retaddr, 0, 0LL, -1, -1, a1);
}
