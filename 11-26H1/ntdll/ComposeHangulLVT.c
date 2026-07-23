/*
 * XREFs of ComposeHangulLVT @ 0x1800AFA44
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800AE3FC (Normalization__NormalizeCharacter.c)
 * Callees:
 *     IsHangulLV @ 0x1800AF9AC (IsHangulLV.c)
 */

__int64 __fastcall ComposeHangulLVT(int a1, int a2)
{
  bool v3; // al
  int v4; // r8d
  int v5; // r9d

  if ( a2 - 4519 <= 0 || a2 - 4519 >= 28 )
    return 0LL;
  v3 = IsHangulLV(a1);
  return (v4 + v5) & (unsigned int)-v3;
}
