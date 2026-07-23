/*
 * XREFs of IsHangulLV @ 0x1800AF9AC
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800AE3FC (Normalization__NormalizeCharacter.c)
 *     ComposeHangulLVT @ 0x1800AFA44 (ComposeHangulLVT.c)
 *     CanComposeHangul @ 0x1800AFAC4 (CanComposeHangul.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
