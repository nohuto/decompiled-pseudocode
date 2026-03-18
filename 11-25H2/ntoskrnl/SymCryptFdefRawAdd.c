/*
 * XREFs of SymCryptFdefRawAdd @ 0x14052CB7C
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x1405331A0 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x1405343F0 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawAddAsm @ 0x1405354B0 (SymCryptFdefRawAddAsm.c)
 */

__int64 __fastcall SymCryptFdefRawAdd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawAddAsm(a1, a2, a3, a4);
}
