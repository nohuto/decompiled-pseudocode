/*
 * XREFs of SymCryptFdefModElementMaskedCopy @ 0x1405335B0
 * Callers:
 *     SymCryptModElementMaskedCopy @ 0x1405214D0 (SymCryptModElementMaskedCopy.c)
 * Callees:
 *     SymCryptFdefMaskedCopy @ 0x140534D54 (SymCryptFdefMaskedCopy.c)
 */

__int64 __fastcall SymCryptFdefModElementMaskedCopy(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefMaskedCopy(a2, a3, *(unsigned int *)(a1 + 4));
}
