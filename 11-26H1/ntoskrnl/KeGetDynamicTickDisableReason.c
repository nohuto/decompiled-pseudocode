/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x14050476C
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x140AC14D4 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x140B5DA54 (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
