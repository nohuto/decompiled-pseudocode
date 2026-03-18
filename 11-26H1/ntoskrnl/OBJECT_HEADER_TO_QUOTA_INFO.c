/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x14042DA20
 * Callers:
 *     ObGetObjectInformation @ 0x1407C37B0 (ObGetObjectInformation.c)
 *     NtQueryObject @ 0x1409FC830 (NtQueryObject.c)
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
