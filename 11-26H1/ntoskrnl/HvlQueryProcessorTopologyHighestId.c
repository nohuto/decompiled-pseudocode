/*
 * XREFs of HvlQueryProcessorTopologyHighestId @ 0x1405BBFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryProcessorTopologyHighestId(_DWORD *a1, _DWORD *a2)
{
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  if ( a1 )
    *a1 = *(_DWORD *)&stru_140E3EAA8.SavedApcStateFill[20];
  if ( a2 )
    *a2 = *(_DWORD *)&stru_140E3EAA8.SavedApcStateFill[24];
  return 0LL;
}
