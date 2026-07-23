/*
 * XREFs of SymCryptFdefRawAdd @ 0x140567D84
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x14056E3A0 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x14056F610 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawAddAsm @ 0x1405706E0 (SymCryptFdefRawAddAsm.c)
 */

__int64 __fastcall SymCryptFdefRawAdd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawAddAsm(a1, a2, a3, a4);
}
