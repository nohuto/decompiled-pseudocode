/*
 * XREFs of PoUnregisterSystemState @ 0x1404E9F70
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x14094CE80 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
