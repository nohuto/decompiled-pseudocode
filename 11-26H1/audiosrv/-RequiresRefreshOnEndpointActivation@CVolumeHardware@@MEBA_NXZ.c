/*
 * XREFs of ?RequiresRefreshOnEndpointActivation@CVolumeHardware@@MEBA_NXZ @ 0x1801195F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVolumeHardware::RequiresRefreshOnEndpointActivation(CVolumeHardware *this)
{
  return *((_BYTE *)this + 288);
}
