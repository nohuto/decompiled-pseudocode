/*
 * XREFs of RtlSetDynamicTimeZoneInformation @ 0x180141C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RtlSetDynamicTimeZoneInformation(wchar_t *a1)
{
  return RtlpSetTimeZoneInformationWorker(a1, 0x1B0u);
}
