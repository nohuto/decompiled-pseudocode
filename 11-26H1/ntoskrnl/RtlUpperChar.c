/*
 * XREFs of RtlUpperChar @ 0x14097D180
 * Callers:
 *     RtlCompareString @ 0x14097C2A0 (RtlCompareString.c)
 *     RtlPrefixString @ 0x14097DFD0 (RtlPrefixString.c)
 *     MiSnapThunk @ 0x14097ECD8 (MiSnapThunk.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x14097D580 (RtlpIsUtf8Process.c)
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
