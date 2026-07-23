/*
 * XREFs of RtlSetTimeZoneInformation @ 0x180141C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpSetTimeZoneInformationWorker((wchar_t *)TimeZoneInformation, 0xACu);
}
