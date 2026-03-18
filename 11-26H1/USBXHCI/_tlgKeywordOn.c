/*
 * XREFs of _tlgKeywordOn @ 0x140001040
 * Callers:
 *     Etw_DeviceUpdate @ 0x140001114 (Etw_DeviceUpdate.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x14004F608 (Etw_ReportControllerHealthWithPortInfo.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140057954 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
