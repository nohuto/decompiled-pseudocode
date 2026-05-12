/*
 * XREFs of StorValidateMFNDCapabilities @ 0x14006F314
 * Callers:
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 *     StorQueryMFNDCapability @ 0x1401925B8 (StorQueryMFNDCapability.c)
 * Callees:
 *     <none>
 */

char __fastcall StorValidateMFNDCapabilities(__int64 a1)
{
  char result; // al

  if ( *(_BYTE *)a1 != 77 )
    return 0;
  if ( *(_BYTE *)(a1 + 1) != 70 )
    return 0;
  if ( *(_BYTE *)(a1 + 2) != 78 )
    return 0;
  if ( *(_BYTE *)(a1 + 3) != 68 )
    return 0;
  result = 1;
  if ( *(_WORD *)(a1 + 8) <= 1u )
    return 0;
  return result;
}
