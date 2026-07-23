/*
 * XREFs of SymCryptShake256Result @ 0x140573CC4
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaPkDecode @ 0x140571FA8 (SymCryptMlDsaPkDecode.c)
 * Callees:
 *     SymCryptKeccakExtract @ 0x140577E84 (SymCryptKeccakExtract.c)
 */

__int64 __fastcall SymCryptShake256Result(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a4) = 1;
  return SymCryptKeccakExtract(a1, a2, 64LL, a4);
}
