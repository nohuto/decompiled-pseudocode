/*
 * XREFs of RtlTimeFieldsToTime @ 0x18009FF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  return RtlpTimeFieldsToTime(TimeFields, Time, 0LL);
}
