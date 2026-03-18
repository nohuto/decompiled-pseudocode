/*
 * XREFs of PoUnregisterSystemState @ 0x1404F0990
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x140ABB790 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
