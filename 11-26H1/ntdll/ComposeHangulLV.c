/*
 * XREFs of ComposeHangulLV @ 0x180121B24
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800AE3FC (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComposeHangulLV(int a1, int a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // edx

  v2 = a1 - 4352;
  if ( v2 > 0x12 )
    return 0LL;
  v3 = a2 - 4449;
  if ( v3 > 0x14 )
    return 0LL;
  else
    return 28 * (v3 + 21 * v2) + 44032;
}
