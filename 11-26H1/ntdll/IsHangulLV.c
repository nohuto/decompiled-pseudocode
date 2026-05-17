/*
 * XREFs of IsHangulLV @ 0x1800B087C
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800AF2CC (Normalization__NormalizeCharacter.c)
 *     ComposeHangulLVT @ 0x1800B0914 (ComposeHangulLVT.c)
 *     CanComposeHangul @ 0x1800B0994 (CanComposeHangul.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
