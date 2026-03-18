/*
 * XREFs of RtlFindMostSignificantBit @ 0x140479BE0
 * Callers:
 *     NtMapViewOfSection @ 0x1409C28A0 (NtMapViewOfSection.c)
 *     MiValidateZeroBits @ 0x1409F3F40 (MiValidateZeroBits.c)
 * Callees:
 *     <none>
 */

CCHAR __stdcall RtlFindMostSignificantBit(ULONGLONG Set)
{
  bool v1; // zf
  __int64 v2; // rdx
  CCHAR result; // al

  v1 = !_BitScanReverse64((unsigned __int64 *)&v2, Set);
  result = -1;
  if ( !v1 )
    return v2;
  return result;
}
