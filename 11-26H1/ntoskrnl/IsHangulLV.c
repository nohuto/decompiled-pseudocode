/*
 * XREFs of IsHangulLV @ 0x14061EDF4
 * Callers:
 *     CanComposeHangul @ 0x14061ED48 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x14061EDBC (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x140808518 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
