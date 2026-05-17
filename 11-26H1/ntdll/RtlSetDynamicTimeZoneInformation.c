/*
 * XREFs of RtlSetDynamicTimeZoneInformation @ 0x180141D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetDynamicTimeZoneInformation(__int64 a1)
{
  return RtlpSetTimeZoneInformationWorker(a1, 0x1B0u);
}
