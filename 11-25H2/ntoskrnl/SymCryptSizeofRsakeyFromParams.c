/*
 * XREFs of SymCryptSizeofRsakeyFromParams @ 0x14051FB10
 * Callers:
 *     SymCryptRsakeyAllocate @ 0x14051E894 (SymCryptRsakeyAllocate.c)
 *     SymCryptRsakeyCreate @ 0x14051F0B0 (SymCryptRsakeyCreate.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x140520FA0 (SymCryptDigitsFromBits.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521878 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModulusFromDigits @ 0x1405218A8 (SymCryptSizeofModulusFromDigits.c)
 */

__int64 __fastcall SymCryptSizeofRsakeyFromParams(unsigned int *a1)
{
  unsigned int v2; // esi
  int v3; // ebx
  int v4; // edi
  int v5; // ebx

  v2 = SymCryptDigitsFromBits(a1[1]);
  v3 = a1[3] * SymCryptSizeofIntFromDigits(v2);
  v4 = a1[2] * (v3 + SymCryptSizeofModulusFromDigits(v2) + (((a1[1] >> 9) + (((a1[1] & 0x1FF) + 511) >> 9)) << 6));
  v5 = v4 + a1[3] * SymCryptSizeofIntFromDigits(v2);
  return v5 + (unsigned int)SymCryptSizeofModulusFromDigits(v2) + 192;
}
