/*
 * XREFs of RtlUpperChar @ 0x14096C840
 * Callers:
 *     RtlCompareString @ 0x14096B960 (RtlCompareString.c)
 *     RtlPrefixString @ 0x14096D690 (RtlPrefixString.c)
 *     MiSnapThunk @ 0x140ADD2D8 (MiSnapThunk.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x14096CC40 (RtlpIsUtf8Process.c)
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  CHAR result; // al

  RtlpIsUtf8Process(0LL);
  if ( Character < 97 )
    return Character;
  result = Character;
  if ( Character <= 122 )
    return Character ^ 0x20;
  return result;
}
