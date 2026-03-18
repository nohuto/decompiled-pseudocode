/*
 * XREFs of SymCryptRsaCoreEncScratchSpace @ 0x14055EA48
 * Callers:
 *     SymCryptRsaPkcs1Verify @ 0x14055ECB0 (SymCryptRsaPkcs1Verify.c)
 * Callees:
 *     SymCryptSizeofModElementFromModulus @ 0x14055C9C0 (SymCryptSizeofModElementFromModulus.c)
 */

__int64 __fastcall SymCryptRsaCoreEncScratchSpace(__int64 a1)
{
  int v1; // ebx

  v1 = *(_DWORD *)(a1 + 20);
  return v1 * (4480 * v1 + 64 < (unsigned int)((v1 << 8) + 64) ? 256 : 4480)
       + (unsigned int)SymCryptSizeofModElementFromModulus(*(_QWORD *)(a1 + 120))
       + 64;
}
