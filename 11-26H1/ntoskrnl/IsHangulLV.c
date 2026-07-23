/*
 * XREFs of IsHangulLV @ 0x140621E44
 * Callers:
 *     CanComposeHangul @ 0x140621D98 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x140621E0C (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x14080DFB8 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
