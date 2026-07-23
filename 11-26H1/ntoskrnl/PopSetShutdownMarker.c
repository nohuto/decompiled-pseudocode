/*
 * XREFs of PopSetShutdownMarker @ 0x14077FD10
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

void PopSetShutdownMarker()
{
  HIDWORD(stru_140E67200.OtherOperationCount) = 1;
}
