/*
 * XREFs of SymCryptFdefIntMaskedCopy @ 0x140570CD8
 * Callers:
 *     SymCryptIntMaskedCopy @ 0x14055C364 (SymCryptIntMaskedCopy.c)
 * Callees:
 *     SymCryptFdefMaskedCopyAsm @ 0x1405715C0 (SymCryptFdefMaskedCopyAsm.c)
 */

__int64 __fastcall SymCryptFdefIntMaskedCopy(__int64 a1, __int64 a2, unsigned int a3)
{
  return SymCryptFdefMaskedCopyAsm(a1 + 32, a2 + 32, *(unsigned int *)(a1 + 4), a3);
}
