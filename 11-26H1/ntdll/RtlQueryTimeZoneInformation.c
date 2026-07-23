/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x1800FBDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpQueryTimeZoneInformationWorker(TimeZoneInformation, 0xACuLL);
}
