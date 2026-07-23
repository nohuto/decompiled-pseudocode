/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x1405F94E0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14052250C (KiSetVirtualHeteroClockIntervalRequest.c)
 */

__int64 __fastcall KiSetVirtualHeteroClockIntervalRequestDpcRoutine(__int64 a1)
{
  LOBYTE(a1) = KiPendingVirtualHeteroRequest == 0;
  return KiSetVirtualHeteroClockIntervalRequest(a1);
}
