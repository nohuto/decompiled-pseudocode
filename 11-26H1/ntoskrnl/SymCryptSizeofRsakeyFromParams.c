/*
 * XREFs of SymCryptSizeofRsakeyFromParams @ 0x14055D0F8
 * Callers:
 *     SymCryptRsakeyAllocate @ 0x14055BD14 (SymCryptRsakeyAllocate.c)
 *     SymCryptRsakeyCreate @ 0x14055C5E0 (SymCryptRsakeyCreate.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x14055E5B8 (SymCryptDigitsFromBits.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModulusFromDigits @ 0x14055EEC0 (SymCryptSizeofModulusFromDigits.c)
 */

__int64 __fastcall SymCryptSizeofRsakeyFromParams(unsigned int *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  unsigned int v4; // ebp
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // edi
  int v9; // ebx

  v2 = SymCryptDigitsFromBits(a1[1]);
  v3 = a1[1];
  v4 = v2;
  v5 = a1[3] * SymCryptSizeofIntFromDigits(v2);
  v6 = v5 + SymCryptSizeofModulusFromDigits(v4);
  v7 = a1[3];
  v8 = a1[2] * (v6 + (((((v3 & 0x1FF) + 511) >> 9) + (v3 >> 9)) << 6));
  v9 = v8 + SymCryptSizeofIntFromDigits(v4) * v7;
  return v9 + (unsigned int)SymCryptSizeofModulusFromDigits(v4) + 192;
}
