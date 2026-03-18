/*
 * XREFs of SymCryptKeccakInit @ 0x140575B9C
 * Callers:
 *     SymCryptShake128Init @ 0x14057498C (SymCryptShake128Init.c)
 *     SymCryptShake256 @ 0x1405749AC (SymCryptShake256.c)
 *     SymCryptShake256Init @ 0x140574A40 (SymCryptShake256Init.c)
 * Callees:
 *     SymCryptKeccakReset @ 0x1405761F8 (SymCryptKeccakReset.c)
 */

__int64 __fastcall SymCryptKeccakInit(__int64 a1, int a2, char a3)
{
  *(_DWORD *)(a1 + 200) = a2;
  *(_BYTE *)(a1 + 208) = a3;
  return SymCryptKeccakReset(a1);
}
