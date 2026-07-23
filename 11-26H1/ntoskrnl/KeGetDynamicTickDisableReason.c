/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x1404FDF30
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x140AC3574 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x140B60BD4 (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
