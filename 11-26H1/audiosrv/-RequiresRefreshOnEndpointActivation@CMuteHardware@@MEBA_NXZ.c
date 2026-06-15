/*
 * XREFs of ?RequiresRefreshOnEndpointActivation@CMuteHardware@@MEBA_NXZ @ 0x180109510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMuteHardware::RequiresRefreshOnEndpointActivation(CMuteHardware *this)
{
  return *((_BYTE *)this + 84);
}
