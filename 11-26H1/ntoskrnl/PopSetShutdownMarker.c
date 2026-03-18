/*
 * XREFs of PopSetShutdownMarker @ 0x14077D210
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

void PopSetShutdownMarker()
{
  *(_DWORD *)&stru_140E66FF0.SavedApcStateFill[16] = 1;
}
