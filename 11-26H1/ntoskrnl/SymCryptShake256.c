/*
 * XREFs of SymCryptShake256 @ 0x140573C10
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055FB34 (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaSkDecode @ 0x140572D4C (SymCryptMlDsaSkDecode.c)
 * Callees:
 *     SymCryptKeccakAppend @ 0x140577C8C (SymCryptKeccakAppend.c)
 *     SymCryptKeccakExtract @ 0x140577E84 (SymCryptKeccakExtract.c)
 *     SymCryptKeccakInit @ 0x14057804C (SymCryptKeccakInit.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SymCryptShake256(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v11[240]; // [rsp+20h] [rbp-128h] BYREF

  memset_0(v11, 0, sizeof(v11));
  LOBYTE(v8) = 31;
  SymCryptKeccakInit(v11, 136LL, v8);
  SymCryptKeccakAppend(v11, a1, a2);
  LOBYTE(v9) = 1;
  return SymCryptKeccakExtract(v11, a3, a4, v9);
}
