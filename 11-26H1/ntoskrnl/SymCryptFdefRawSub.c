/*
 * XREFs of SymCryptFdefRawSub @ 0x140568260
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x14056E3A0 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModNegGeneric @ 0x14056F120 (SymCryptFdefModNegGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x14056F610 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawSubAsm @ 0x140570740 (SymCryptFdefRawSubAsm.c)
 */

__int64 __fastcall SymCryptFdefRawSub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawSubAsm(a1, a2, a3, a4);
}
