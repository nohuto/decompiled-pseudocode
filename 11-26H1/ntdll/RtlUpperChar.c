/*
 * XREFs of RtlUpperChar @ 0x18007A160
 * Callers:
 *     RtlEqualString @ 0x180079AE0 (RtlEqualString.c)
 *     RtlCompareString @ 0x180079BD0 (RtlCompareString.c)
 *     RtlPrefixString @ 0x1800C7800 (RtlPrefixString.c)
 *     RtlUpperString @ 0x180140780 (RtlUpperString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x18007A650 (RtlpIsUtf8Process.c)
 */

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  CHAR v1; // cl
  CHAR result; // al

  RtlpIsUtf8Process(Character);
  if ( v1 < 97 )
    return v1;
  result = v1;
  if ( v1 <= 122 )
    return v1 ^ 0x20;
  return result;
}
