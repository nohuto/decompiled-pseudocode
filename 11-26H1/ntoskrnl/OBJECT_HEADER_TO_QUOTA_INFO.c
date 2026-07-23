/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x14041A930
 * Callers:
 *     ObGetObjectInformation @ 0x1407C6810 (ObGetObjectInformation.c)
 *     NtQueryObject @ 0x140921430 (NtQueryObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_QUOTA_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0xF];
  else
    return 0LL;
}
