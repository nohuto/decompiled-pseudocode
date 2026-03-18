/*
 * XREFs of SymCryptFdefRawSub @ 0x140569080
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x14056F1C0 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModNegGeneric @ 0x14056FF40 (SymCryptFdefModNegGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x140570430 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawSubAsm @ 0x140571560 (SymCryptFdefRawSubAsm.c)
 */

__int64 __fastcall SymCryptFdefRawSub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawSubAsm(a1, a2, a3, a4);
}
