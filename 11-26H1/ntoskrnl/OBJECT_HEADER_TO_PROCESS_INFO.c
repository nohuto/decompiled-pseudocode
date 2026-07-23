/*
 * XREFs of OBJECT_HEADER_TO_PROCESS_INFO @ 0x1404C3844
 * Callers:
 *     ObGetObjectInformation @ 0x1407C6810 (ObGetObjectInformation.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_PROCESS_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 0x10) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x1F];
  else
    return 0LL;
}
