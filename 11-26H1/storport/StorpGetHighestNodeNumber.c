/*
 * XREFs of StorpGetHighestNodeNumber @ 0x14003F52C
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetHighestNodeNumber(__int64 a1, _DWORD *a2)
{
  if ( !a2 )
    return 3238002694LL;
  *a2 = KeQueryHighestNodeNumber();
  return 0LL;
}
