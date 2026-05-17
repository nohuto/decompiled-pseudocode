/*
 * XREFs of ComposeHangulLVT @ 0x1800B0914
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800AF2CC (Normalization__NormalizeCharacter.c)
 * Callees:
 *     IsHangulLV @ 0x1800B087C (IsHangulLV.c)
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
