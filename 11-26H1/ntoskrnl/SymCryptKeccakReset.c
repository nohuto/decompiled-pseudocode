/*
 * XREFs of SymCryptKeccakReset @ 0x1405786A8
 * Callers:
 *     SymCryptKeccakAppend @ 0x140577C8C (SymCryptKeccakAppend.c)
 *     SymCryptKeccakExtract @ 0x140577E84 (SymCryptKeccakExtract.c)
 *     SymCryptKeccakInit @ 0x14057804C (SymCryptKeccakInit.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptKeccakReset(__int64 a1)
{
  __int64 result; // rax

  result = SymCryptWipe(a1, 0xC8uLL);
  *(_DWORD *)(a1 + 204) = 0;
  *(_BYTE *)(a1 + 209) = 0;
  return result;
}
