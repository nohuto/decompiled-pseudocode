/*
 * XREFs of SymCryptFdefRawSub @ 0x14052D054
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x1405331A0 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModNegGeneric @ 0x140533F10 (SymCryptFdefModNegGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x1405343F0 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawSubAsm @ 0x140535510 (SymCryptFdefRawSubAsm.c)
 */

__int64 __fastcall SymCryptFdefRawSub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawSubAsm(a1, a2, a3, a4);
}
