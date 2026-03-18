/*
 * XREFs of SymCryptFdefModElementMaskedCopy @ 0x14056F5E0
 * Callers:
 *     SymCryptModElementMaskedCopy @ 0x14055C600 (SymCryptModElementMaskedCopy.c)
 * Callees:
 *     SymCryptFdefMaskedCopy @ 0x140570D9C (SymCryptFdefMaskedCopy.c)
 */

__int64 __fastcall SymCryptFdefModElementMaskedCopy(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefMaskedCopy(a2, a3, *(unsigned int *)(a1 + 4));
}
