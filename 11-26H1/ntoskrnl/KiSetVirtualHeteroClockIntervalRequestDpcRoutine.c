/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x1405F6B20
 * Callers:
 *     <none>
 * Callees:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14051FE68 (KiSetVirtualHeteroClockIntervalRequest.c)
 */

__int64 __fastcall KiSetVirtualHeteroClockIntervalRequestDpcRoutine(__int64 a1)
{
  LOBYTE(a1) = KiPendingVirtualHeteroRequest == 0;
  return KiSetVirtualHeteroClockIntervalRequest(a1);
}
