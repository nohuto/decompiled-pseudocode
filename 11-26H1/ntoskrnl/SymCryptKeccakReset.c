/*
 * XREFs of SymCryptKeccakReset @ 0x1405761F8
 * Callers:
 *     SymCryptKeccakAppend @ 0x1405757DC (SymCryptKeccakAppend.c)
 *     SymCryptKeccakExtract @ 0x1405759D4 (SymCryptKeccakExtract.c)
 *     SymCryptKeccakInit @ 0x140575B9C (SymCryptKeccakInit.c)
 * Callees:
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptKeccakReset(__int64 a1)
{
  __int64 result; // rax

  result = SymCryptWipe(a1, 0xC8uLL);
  *(_DWORD *)(a1 + 204) = 0;
  *(_BYTE *)(a1 + 209) = 0;
  return result;
}
