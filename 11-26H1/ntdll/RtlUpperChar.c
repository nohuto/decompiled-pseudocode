/*
 * XREFs of RtlUpperChar @ 0x180082DC0
 * Callers:
 *     RtlEqualString @ 0x180082740 (RtlEqualString.c)
 *     RtlCompareString @ 0x180082830 (RtlCompareString.c)
 *     RtlPrefixString @ 0x1800CA1A0 (RtlPrefixString.c)
 *     RtlUpperString @ 0x180140880 (RtlUpperString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1800832B0 (RtlpIsUtf8Process.c)
 */

char __fastcall RtlUpperChar(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // cl
  char result; // al

  RtlpIsUtf8Process(a1, a2, a3);
  if ( v3 < 97 )
    return v3;
  result = v3;
  if ( v3 <= 122 )
    return v3 ^ 0x20;
  return result;
}
